#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "NitroSDK/Timing.h"

struct Struct_ov031_0221eadc {
    int unknown_0_;
    unsigned char unknown_4_[0x20];
    int unknown_24_;
    int unknown_28_;
    unsigned char unknown_2c_[0x14];
};
struct Struct_ov031_0224f5c0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[4][0x14];
    unsigned char unknown_52_[0xe];
};
struct Struct_ov031_0224f500 {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned char unknown_c_[0x20];
    unsigned char unknown_2c_[0x94];
};
struct Struct_ov031_0224f4e0_2;

#define DEBUG_PRINTF(...) ((void)0)

extern Struct_ov031_0224f5c0 data_ov031_0224f5c0;
extern Struct_ov031_0224f4e0_2 data_ov031_0224f4e0;
extern Struct_ov031_0224f500 data_ov031_0224f500 __attribute__((aligned(32)));
namespace DuplicatePool {
    extern "C" Struct_ov031_0224f500 data_ov031_0224f500;
}
extern "C" ARM void func_ov031_0220eadc(void);
extern "C" int func_ov031_0221f02c(int, unsigned char*, int, unsigned int);
extern "C" ARM int func_020c7ea0(Struct_ov031_0224f4e0_2*, int*, int);
extern "C" int func_ov031_0221efe8(Struct_ov031_0224f500*, int);
extern "C" void func_ov031_0221e774(Struct_ov031_0221eadc*, Struct_ov031_0224f500*);
extern "C" int func_ov031_0221f1e8(Struct_ov031_0224f500*, Struct_ov031_0224f5c0*, int);
extern "C" void func_ov031_0221e798(void*, Struct_ov031_0224f500*, int);
extern "C" void func_ov031_0221e7bc(ProcessorContext**);

// USA: func_ov031_0221eadc
extern "C" THUMB int func_ov031_0221eadc(Struct_ov031_0221eadc* arg0, void* arg1) {
    int var0 = 1;
    int var1 = -1;
    int var2 = 0;
    int var3 = 0;
    int var4;
    int var5;
    int var6;
    int var7;
    Alarm var8;

    if (arg0->unknown_24_ == 0) {
        var4 = 0x80000;
    } else if (arg0->unknown_24_ == 1) {
        var4 = 0xc0000;
    }
    var4 |= 0x30000;
    VectorizedMemset(&data_ov031_0224f5c0, 0, sizeof(Struct_ov031_0224f5c0));
    if (arg0->unknown_28_ == 5) {
        data_ov031_0224f5c0.unknown_0_ = 1;
    } else if (arg0->unknown_28_ == 13) {
        data_ov031_0224f5c0.unknown_0_ = 2;
    } else if (arg0->unknown_28_ == 16) {
        data_ov031_0224f5c0.unknown_0_ = 3;
    } else {
        return -1;
    }
    data_ov031_0224f5c0.unknown_1_ = var3;
    VectorizedInvertedMemcpy(arg0->unknown_2c_, (unsigned char*)&data_ov031_0224f5c0 + (var3 * 0x14 + 2), arg0->unknown_28_);
    func_ov031_0220eadc();
    if (!func_ov031_0221f02c(0, arg0->unknown_4_, arg0->unknown_0_, 0x30bffe)) goto done;
    var5 = 0;
    ZeroInitializeAlarm(&var8);
    SetTimeout(&var8, 0x003fec42ULL, func_ov031_0221e7bc, (ProcessorContext**)18);
    while (var0) {
        func_020c7ea0(&data_ov031_0224f4e0, &var7, 1);
        switch (var7) {
        case 18:
            if (!var2) var0 = 0;
            break;
        case 19:
            DEBUG_PRINTF("connect: event 19");
            break;
        case 5:
            if (!var2) {
                CancelAlarm(&var8);
                if (func_ov031_0221efe8(&data_ov031_0224f500, 1) != 1) {
                    var0 = 0;
                    break;
                }
                func_ov031_0221e774(arg0, &data_ov031_0224f500);
                for (var6 = 0; var6 < DuplicatePool::data_ov031_0224f500.unknown_a_; var6++) {
                }
                if (!func_ov031_0221f1e8(&data_ov031_0224f500, &data_ov031_0224f5c0, var4)) {
                    var0 = 0;
                    break;
                }
                var2 = 1;
            }
            break;
        case 10:
            func_ov031_0221e774(arg0, &data_ov031_0224f500);
            if (!func_ov031_0221f1e8(&data_ov031_0224f500, &data_ov031_0224f5c0, var4)) var0 = 0;
            break;
        case 12:
            var0 = 0;
            var1 = 0;
            break;
        case 13:
            if (++var5 < 3) {
                if (!func_ov031_0221f1e8(&data_ov031_0224f500, &data_ov031_0224f5c0, var4)) var0 = 0;
            } else {
                var0 = 0;
            }
            break;
        case 4:
        case 8:
            break;
        case 0: case 1: case 2: case 3:
        case 6: case 7: case 9: case 11:
        case 14: case 15: case 16: case 17:
        default:
            var0 = 0;
            break;
        }
    }
    CancelAlarm(&var8);
    while (func_020c7ea0(&data_ov031_0224f4e0, &var7, 0) == 1) {}
done:
    func_ov031_0221e798(arg1, &data_ov031_0224f500, var1 == 0);
    return var1;
}
