#include <globaldefs.h>
#include "System/ProcessorContext.h"
#include "System/Timing.h"

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef int BOOL;

typedef struct {
    u64 x;
    u64 mul;
    u64 add;
} MATHRandContext32;

typedef struct {
    u32 mode;
    void* (*alloc)(u32);
    void (*free)(void*);
    void (*dhcp_callback)(void);
    BOOL (*link_is_on)(void);
    unsigned long long random_seed;
    u8* lan_buf;
    u32 lan_buflen;
    u32 mymss;
    u32 requested_ip;
    u32 yield_wait;
} CPSConfig;

struct CPSGlobal02200298 {
    u8 field_00;
    u8 ready;
    u16 mymss;
    u32 field_04;
    u16 port;
    u8 field_0a[6];
    u32 mode;
    void* (*alloc)(u32);
    void (*dhcp_callback)(void);
    u32 field_1c;
    u32 field_20;
    u32 yield_wait;
    u32 field_28;
    u32 field_2c;
    u32 field_30;
    u32 requested_ip;
    u32 field_38;
    u32 field_3c;
    void (*free)(void*);
    u32 field_44;
    BOOL (*link_is_on)(void);
    u8 field_4c[0xc];
    u8* lan_buf;
    u32 lan_buflen;
    u8 field_60[8];
    MATHRandContext32 random;
};

extern CPSGlobal02200298 data_ov031_0224c980;
extern unsigned char data_ov031_0224ce68[6];
extern unsigned int data_ov031_02249680;
extern ProcessorContext data_ov031_0224cbe8;
extern ProcessorContext data_ov031_0224cb28;
extern unsigned char data_ov031_0224e1c0[];
extern unsigned char data_ov031_0224d9c0[];
#define CPS_MIDDLEWARE ((const void*)0x02000c04)
extern "C" void func_02000b9c(const void*);
extern "C" void func_ov031_0220028c(void);
extern "C" int func_ov031_02200290(void);
extern "C" void func_ov031_02203008(void);
extern "C" void func_ov031_02203c6c(void);
extern "C" void CopyFrom027ffcf4_020c99ac(void*);

static inline void MATH_InitRand32(MATHRandContext32* context, u64 seed) {
    context->x = seed;
    context->mul = (1566083941LL << 32) + 1812433253LL;
    context->add = 2531011;
}

static inline u32 MATH_Rand32(MATHRandContext32* context, u32 max) {
    context->x = context->mul * context->x + context->add;
    if (max == 0) {
        return (u32)(context->x >> 32);
    } else {
        return (u32)(((context->x >> 32) * max) >> 32);
    }
}

// USA: func_ov031_02200298
extern "C" ARM void func_ov031_02200298(CPSConfig* options) {
    func_02000b9c(CPS_MIDDLEWARE);
    u64 seed = options->random_seed;
    if (seed) {
        MATH_InitRand32(&data_ov031_0224c980.random, seed);
    } else {
        MATH_InitRand32(&data_ov031_0224c980.random, GetCurrentTimestamp());
    }
    if (options->alloc && options->free) {
        data_ov031_0224c980.alloc = options->alloc;
        data_ov031_0224c980.free = options->free;
    } else {
        data_ov031_0224c980.alloc = (void* (*)(u32))func_ov031_0220028c;
        data_ov031_0224c980.free = (void (*)(void*))func_ov031_0220028c;
    }
    data_ov031_0224c980.mode = options->mode;
    if (options->mymss) data_ov031_0224c980.mymss = options->mymss;
    else data_ov031_0224c980.mymss = 0x5b4;
    data_ov031_0224c980.requested_ip = options->requested_ip;
    data_ov031_0224c980.yield_wait = options->yield_wait;
    if (options->dhcp_callback) data_ov031_0224c980.dhcp_callback = options->dhcp_callback;
    else data_ov031_0224c980.dhcp_callback = func_ov031_0220028c;
    if (options->link_is_on) data_ov031_0224c980.link_is_on = options->link_is_on;
    else data_ov031_0224c980.link_is_on = func_ov031_02200290;
    data_ov031_0224c980.lan_buf = options->lan_buf;
    data_ov031_0224c980.lan_buflen = options->lan_buflen;
    data_ov031_0224c980.field_30 = 0;
    data_ov031_0224c980.field_28 = 0;
    data_ov031_0224c980.port = 0x400 + MATH_Rand32(&data_ov031_0224c980.random, 0xf88);
    CopyFrom027ffcf4_020c99ac(data_ov031_0224ce68);
    data_ov031_0224c980.ready = 0;
    PopulateContext(&data_ov031_0224cbe8, (unsigned int)func_ov031_02203008, 0, (unsigned int)data_ov031_0224e1c0, 0x800, data_ov031_02249680);
    PopulateContext(&data_ov031_0224cb28, (unsigned int)func_ov031_02203c6c, 0, (unsigned int)data_ov031_0224d9c0, 0x800, data_ov031_02249680);
    MarkContextReadyAndSwitch(&data_ov031_0224cbe8);
    MarkContextReadyAndSwitch(&data_ov031_0224cb28);
}
