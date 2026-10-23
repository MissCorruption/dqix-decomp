#if defined(jpn)
#define R(j,u) (j)
#define func_ov012_0218a7a0 func_ov012_0218b234
#define func_ov012_0218adac func_ov012_0218bba0
#define func_ov023_021e6de4 func_ov023_021e7148
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#if defined(jpn)
#define func_ov012_02184384 func_ov012_021853f8
#define func_ov012_0218930c func_ov012_02189be8
#endif
#include "std_library_functions.h"
#include "GameState/GameState.h"

extern "C" int func_ov012_02184384(void* arg0, int arg1);
extern "C" void func_ov023_021e6e60(void* arg0);
extern "C" int func_ov023_021e6448(void* arg0);
extern "C" int func_ov023_021e6de4(char* arg0);
struct Struct_ov012_02186a7c { char unknown_0_[R(0x90,0xac)]; };
extern "C" int func_ov023_021e6e20(struct Struct_ov012_02186a7c* arg0);
#if defined(jpn)
extern "C" void func_ov012_0218adac(void* arg0, int arg1, int arg2);
#else
extern "C" void func_ov012_0218adac(void* arg0, int arg1, int arg2, int arg3);
#endif
extern "C" void func_ov012_0218930c(void* arg0, int arg1);
#if defined(jpn)
#define func_ov012_0218a7a0 func_ov012_0218b234
extern "C" void func_ov012_0218a7a0(char* arg0);
#else
extern "C" void func_ov012_0218a7a0(char* arg0);
#endif

struct Struct_0205de24_2;
extern "C" void func_0205de24(struct Struct_0205de24_2* arg0, unsigned char arg1, unsigned char arg2);
struct Struct_0205c570;
extern "C" int func_0205d794(struct Struct_0205c570* arg0);
struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern int data_02108760;
struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);

struct Struct_ov012_02188924 { unsigned short unknown_0_0_ : 5; unsigned short unknown_0_5_ : 11; };

// USA: func_ov012_02188924
extern "C" ARM void func_ov012_02188924(char* arg0) {
    int var0 = *(unsigned char*)(arg0 + R(0x1340,0x1370));
    if (var0 == 0) {
        *(unsigned char*)(arg0 + R(0x1368,0x13a0)) = 0;
        int var1 = ((struct Struct_ov012_02188924*)(arg0 + R(0x1400,0x1300) + R(0x1c,0xc4)))->unknown_0_5_;
        void* var2 = *(void**)(arg0 + 0x1000 + R(0x420,0x3c8));
        int var3 = func_ov012_02184384(var2, var1);
        *(int*)(arg0 + 0x1000 + R(0x448,0x3f0)) = var3;
        if (var3 < 0) {
            *(int*)(arg0 + 0x1000 + R(0x448,0x3f0)) = 0;
        }
        func_0205de24((struct Struct_0205de24_2*)(arg0 + R(0x90,0xac)), 0, 3);
        func_ov023_021e6e60(arg0);
        func_ov012_0218a7a0(arg0);
        (*(unsigned char*)(arg0 + R(0x1340,0x1370)))++;
        return;
    }
    if (var0 != 1) return;
    *(unsigned char*)(arg0 + R(0x1368,0x13a0)) = 1;
    *(int*)(arg0 + R(0x1448,0x13f0)) = func_0205d794((struct Struct_0205c570*)(arg0 + R(0x90,0xac)));
    if (func_ov023_021e6448(arg0)) {
        *(int*)(arg0 + R(0x1448,0x13f0)) = func_0205d794((struct Struct_0205c570*)(arg0 + R(0x90,0xac)));
    }
    if (func_ov023_021e6de4(arg0)) {
        short* var4 = *(short**)(arg0 + 0x1000 + R(0x420,0x3c8));
        int var5 = *(int*)(arg0 + 0x1000 + R(0x448,0x3f0));
        short var6 = var4[var5];
        struct Struct_0201099c_3* var7 = (struct Struct_0201099c_3*)(arg0 + R(0x131c,0x1344));
        char* var8 = (char*)func_020e0434(var7, var6);
        if (!var8) return;
        func_0205eaa0((struct Struct_02108760*)&data_02108760, 1, 0);
        memset(arg0 + R(0x1458,0x1400), 0, 0x40);
        memcpy(arg0 + R(0x1458,0x1400), var8, strlen(var8));
        GameState* var9 = GameState::GetInstance();
        char* var10 = (char*)var9 + R(0x3c,0x29c) + 0x5400;
        int var11 = *(int*)(var10 + 0x4);
        int var12 = *(int*)(arg0 + 0x1000 + R(0x448,0x3f0));
        unsigned short* var13 = *(unsigned short**)(arg0 + 0x1000 + R(0x420,0x3c8));
        unsigned int var14 = var13[var12];
        *(int*)(var10 + 0x4) = (var11 & 0xc007ffff) | ((var14 & 0x7ff) << 19);
        int var15 = *(int*)((char*)var9 + 0x5000 + R(0x43c,0x69c));
        var15 = (var15 & ~0x40000000) | 0x20000000;
        *(int*)((char*)var9 + 0x5000 + R(0x43c,0x69c)) = var15;
#if defined(jpn)
        func_ov012_0218adac(arg0, 0, -1);
#else
        func_ov012_0218adac(arg0, 0, -1, 0);
#endif
        func_ov012_0218930c(arg0, 0);
        return;
    }
    if (func_ov023_021e6e20((struct Struct_ov012_02186a7c*)arg0)) {
        func_ov012_0218930c(arg0, 1);
    }
}
