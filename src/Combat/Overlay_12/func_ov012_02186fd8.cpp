#if defined(jpn)
#define func_ov023_021e6de4 func_ov023_021e7148
#define func_ov012_0218432c func_ov012_021853a0
#define func_ov012_0218930c func_ov012_02189be8
#define func_ov012_0218adac func_ov012_0218bba0
enum {
    Enum_ov012_02186fd8_4976 = 0x1340,
    Enum_ov012_02186fd8_5024 = 0x1368,
    Enum_ov012_02186fd8_172 = 0x90,
    Enum_ov012_02186fd8_5088 = 0x1438,
    Enum_ov012_02186fd8_4924 = 0x1314,
    Enum_ov012_02186fd8_22172 = 0x543c,
    Enum_ov012_02186fd8_5184 = 0x1498
};
#else
enum {
    Enum_ov012_02186fd8_4976 = 0x1370,
    Enum_ov012_02186fd8_5024 = 0x13a0,
    Enum_ov012_02186fd8_172 = 0xac,
    Enum_ov012_02186fd8_5088 = 0x13e0,
    Enum_ov012_02186fd8_4924 = 0x133c,
    Enum_ov012_02186fd8_22172 = 0x569c,
    Enum_ov012_02186fd8_5184 = 0x1440
};
#endif

#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

struct Struct_ov012_02186e38 {
    unsigned int unknown_0_;
    unsigned int unknown_4_0_ : 9;
    int unknown_5_1_ : 10;
    int unknown_6_3_ : 11;
    unsigned int unknown_7_6_ : 1;
    unsigned int unknown_7_7_ : 1;
};

static inline Struct_ov012_02186e38* inline_ov012_02186e38(GameState* arg0) {
    return (Struct_ov012_02186e38*)((char*)arg0 + Enum_ov012_02186fd8_22172);
}

extern "C" int func_ov012_0218432c(int arg0);
struct Struct_0205de24_2;
extern "C" void func_0205de24(struct Struct_0205de24_2* arg0, unsigned char arg1, unsigned char arg2);
extern "C" void func_ov023_021e6e60(void* arg0);
extern "C" void func_ov012_02189c44(char* arg0);
struct Struct_0205c570;
extern "C" int func_0205d794(struct Struct_0205c570* arg0);
extern "C" int func_ov023_021e6de4(char* arg0);
struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
struct Struct_02072a68_2;
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);
#if defined(jpn)
extern "C" void func_ov012_0218adac(void*, int, int);
#else
extern "C" void func_ov012_0218adac(void* arg0, int arg1, int arg2, int arg3);
#endif
extern "C" void func_ov012_0218930c(void* arg0, int arg1);
struct Struct_ov012_02186a7c;
extern "C" int func_ov023_021e6e20(struct Struct_ov012_02186a7c* arg0);
extern int data_02108760;

// USA: func_ov012_02186fd8
extern "C" ARM void func_ov012_02186fd8(char* arg0) {
    unsigned char var0 = *(unsigned char*)(arg0 + Enum_ov012_02186fd8_4976);
    if (var0 == 0) {
        *(unsigned char*)(arg0 + Enum_ov012_02186fd8_5024) = 0;
        int var1 = func_ov012_0218432c(1);
        *(int*)(arg0 + Enum_ov012_02186fd8_5088) = var1;
        if (var1 < 0) {
            *(int*)(arg0 + Enum_ov012_02186fd8_5088) = 0;
        }

        func_0205de24((struct Struct_0205de24_2*)(arg0 + Enum_ov012_02186fd8_172), 0, 3);
        func_ov023_021e6e60(arg0);
        func_ov012_02189c44(arg0);

        (*(unsigned char*)(arg0 + Enum_ov012_02186fd8_4976))++;
        return;
    }
    if (var0 != 1) return;

    *(unsigned char*)(arg0 + Enum_ov012_02186fd8_5024) = 1;
    int var2 = func_0205d794((struct Struct_0205c570*)(arg0 + Enum_ov012_02186fd8_172));
    *(int*)(arg0 + Enum_ov012_02186fd8_5088) = var2;

    if (func_ov023_021e6de4(arg0) != 0) {
        func_0205eaa0((struct Struct_02108760*)&data_02108760, 1, 0);

        GameState* var3 = GameState::GetInstance();
        int var4 = (short)(*(int*)(arg0 + Enum_ov012_02186fd8_5088) + 0x27d8);
        void* var5 = func_02072a68((struct Struct_02072a68_2*)(arg0 + Enum_ov012_02186fd8_4924), var4);
        Struct_ov012_02186e38* var6 = inline_ov012_02186e38(var3);

        memset(arg0 + Enum_ov012_02186fd8_5184, 0, 0x40);
        memcpy(arg0 + Enum_ov012_02186fd8_5184, var5, strlen((char*)var5));

        var6->unknown_5_1_ = *(int*)(arg0 + Enum_ov012_02186fd8_5088) + 0xc8;

#if defined(jpn)
        func_ov012_0218adac(arg0, 0, -1);
#else
        func_ov012_0218adac(arg0, 0, -1, 0);
#endif
        func_ov012_0218930c(arg0, 0);
    } else {
        if (func_ov023_021e6e20((struct Struct_ov012_02186a7c*)arg0) != 0) {
            func_ov012_0218930c(arg0, 1);
        }
    }
}
