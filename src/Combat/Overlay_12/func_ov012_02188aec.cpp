#if defined(jpn)
#define func_ov023_021e6de4 func_ov023_021e7148
#define func_ov012_0218adac func_ov012_0218bba0
#define func_ov012_0218930c func_ov012_02189be8
enum {
    Enum_ov012_02188aec_22172 = 0x543c,
    Enum_ov012_02188aec_4976 = 0x1340,
    Enum_ov012_02188aec_4977 = 0x1341,
    Enum_ov012_02188aec_5024 = 0x1368,
    Enum_ov012_02188aec_5108 = 0x144c,
    Enum_ov012_02188aec_172 = 0x90
};
#else
enum {
    Enum_ov012_02188aec_22172 = 0x569c,
    Enum_ov012_02188aec_4976 = 0x1370,
    Enum_ov012_02188aec_4977 = 0x1371,
    Enum_ov012_02188aec_5024 = 0x13a0,
    Enum_ov012_02188aec_5108 = 0x13f4,
    Enum_ov012_02188aec_172 = 0xac
};
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov012_02188aec {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 4;
    unsigned int unknown_2_0_ : 5;
    unsigned int unknown_2_5_ : 4;
    unsigned int unknown_3_1_ : 1;
    unsigned int unknown_3_2_ : 1;
    unsigned int unknown_3_3_ : 1;
    unsigned int unknown_3_4_ : 4;
};
struct Struct_0205de24_2;
struct Struct_0205c570;
struct Struct_ov012_02186a7c;
struct Struct_02108760;
extern "C" void func_0205de24(Struct_0205de24_2*, unsigned char, unsigned char);
extern "C" int func_0205d794(Struct_0205c570*);
extern "C" int func_ov023_021e6e20(Struct_ov012_02186a7c*);
extern "C" void func_0205eaa0(Struct_02108760*, int, int);
extern "C" void func_ov012_0218a974(char*);
extern "C" void func_ov023_021e6e60(char*);
extern "C" int func_ov023_021e6de4(char*);
#if defined(jpn)
extern "C" void func_ov012_0218adac(char*, int, int);
#else
extern "C" void func_ov012_0218adac(char*, int, int, int);
#endif
extern "C" void func_ov012_0218930c(char*, int);
extern Struct_02108760 data_02108760;

static inline Struct_ov012_02188aec* inline_ov012_02188aec(GameState* arg0) {
    return (Struct_ov012_02188aec*)((char*)arg0 + Enum_ov012_02188aec_22172);
}

// USA: func_ov012_02188aec
extern "C" ARM void func_ov012_02188aec(char* arg0) {
    Struct_ov012_02188aec* var0 = inline_ov012_02188aec(GameState::GetInstance());
    if ((*(unsigned char*)(arg0 + Enum_ov012_02188aec_4976)) == 0) {
        (*(unsigned char*)(arg0 + Enum_ov012_02188aec_4976))++;
        (*(unsigned char*)(arg0 + Enum_ov012_02188aec_4976))++;
        return;
    } else if ((*(unsigned char*)(arg0 + Enum_ov012_02188aec_4976)) == 1) {
        (*(unsigned char*)(arg0 + Enum_ov012_02188aec_4976))++;
        return;
    } else if ((*(unsigned char*)(arg0 + Enum_ov012_02188aec_4976)) == 2) {
        (*(unsigned char*)(arg0 + Enum_ov012_02188aec_5024)) = 0;
        (*(unsigned int*)(arg0 + Enum_ov012_02188aec_5108)) = (var0->unknown_2_5_ - var0->unknown_3_1_) / 2;
        func_0205de24((Struct_0205de24_2*)(arg0 + Enum_ov012_02188aec_172), 0, 3);
        func_ov023_021e6e60(arg0);
        func_ov012_0218a974((char*)arg0);
        (*(unsigned char*)(arg0 + Enum_ov012_02188aec_4976))++;
        return;
    } else if ((*(unsigned char*)(arg0 + Enum_ov012_02188aec_4976)) == 3) {
        (*(unsigned char*)(arg0 + Enum_ov012_02188aec_5024)) = 1;
        int var1 = func_0205d794((Struct_0205c570*)(Struct_0205de24_2*)(arg0 + Enum_ov012_02188aec_172));
        if ((*(unsigned int*)(arg0 + Enum_ov012_02188aec_5108)) != var1) {
            (*(unsigned int*)(arg0 + Enum_ov012_02188aec_5108)) = var1;
#if defined(jpn)
            func_ov012_0218adac(arg0, 0, ((*(unsigned int*)(arg0 + Enum_ov012_02188aec_5108)) << 1) + var0->unknown_3_1_);
#else
            func_ov012_0218adac(arg0, 0, ((*(unsigned int*)(arg0 + Enum_ov012_02188aec_5108)) << 1) + var0->unknown_3_1_, 0);
#endif
        }
        int var2 = 0;
        if (func_ov023_021e6de4(arg0)) {
            func_0205eaa0(&data_02108760, 1, 0);
            Struct_ov012_02188aec* var3 = inline_ov012_02188aec(GameState::GetInstance());
            var3->unknown_2_5_ = ((*(unsigned int*)(arg0 + Enum_ov012_02188aec_5108)) << 1) + var3->unknown_3_1_;
            var3->unknown_3_3_ = 1;
            var2 = 1;
        } else if (func_ov023_021e6e20((Struct_ov012_02186a7c*)arg0)) {
            (*(unsigned int*)(arg0 + Enum_ov012_02188aec_5108)) = (var0->unknown_2_5_ - var0->unknown_3_1_) / 2;
            var2 = 1;
#if defined(jpn)
            func_ov012_0218adac(arg0, 0, -1);
#else
            func_ov012_0218adac(arg0, 0, -1, 0);
#endif
        }
        if (var2) (*(unsigned char*)(arg0 + Enum_ov012_02188aec_4976))++;
        return;
    } else if ((*(unsigned char*)(arg0 + Enum_ov012_02188aec_4976)) == 4) {
        (*(unsigned char*)(arg0 + Enum_ov012_02188aec_4976))++;
        return;
    } else if ((*(unsigned char*)(arg0 + Enum_ov012_02188aec_4976)) == 5) {
        (*(unsigned char*)(arg0 + Enum_ov012_02188aec_4977)) = 1;
        (*(unsigned char*)(arg0 + Enum_ov012_02188aec_4976)) = 1;
        func_ov012_0218930c(arg0, 1);
    }
}
