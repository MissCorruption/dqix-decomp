#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct Struct_0207d538 { int unknown_0_[3]; };
struct Struct_0207d538_2 { char* unknown_0_; char* unknown_4_; int unknown_8_; };
struct Struct_020465c0 {
    Struct_0207d538* unknown_0_;
    char unknown_4_[0x18 - 4];
    Struct_0207d538_2* unknown_18_;
};
extern "C" int func_0207d300(void*, int, int, int);
extern "C" void func_0207d2c4(void*, int);
extern "C" void func_02046380(Struct_020465c0*);
extern "C" void func_02046608(Struct_020465c0*, int, const char*, char*, int, int, int);
extern "C" Struct_020465c0* func_020421a0();
extern "C" unsigned char func_020100b0(GameState*);
extern "C" void func_020e4bf4(void*, int);
extern "C" void* func_020e46c4(void*);
extern "C" void func_020dcf7c(int, void*);
extern "C" char* func_020e51cc(int);
extern "C" void func_020465c0(Struct_020465c0*, int, int);

#if defined(jpn)
extern "C" void func_020de968(int, char*);
extern char data_020f1050;
extern char data_020f106e;
extern char data_020f1094;
#endif

// USA: func_0207d538
#if defined(jpn)
extern "C" ARM int func_0207d538(void* arg0, int arg1, int arg2, char* arg3, unsigned char arg4) {
#else
extern "C" ARM int func_0207d538(void* arg0, int arg1, int arg2, char* arg3) {
#endif
    if (arg1 == 2) {
#if defined(jpn)
        int var0 = (short)arg2;
#else
        short var0 = arg2;
#endif
        int var1 = func_0207d300(arg0, var0, 1, 0);
        switch (var1) {
        case -1:
            return 0;
        case 0:
        case 1:
        case 2:
        case 3:
        case 5:
        {
#if defined(jpn)
            if (arg4) {
                char var2[0x30] = {};
                func_020de968(var0, var2);
                sprintf(arg3, &data_020f1050, var2);
            } else {
                sprintf(arg3, &data_020f1050, *(char**)((char*)arg0 + 0x30));
            }
#else
            Struct_020465c0* var3 = func_020421a0();
            func_02046380(var3);
            Struct_0207d538 var4;
            func_020e4bf4(&var4, func_020100b0(GameState::GetInstance()));
            var3->unknown_0_ = &var4;
            char var5[0x80] = {};
            char var6[0x80] = {};
            Struct_0207d538_2 var7;
            func_020e46c4(&var7);
            var7.unknown_0_ = var5;
            var7.unknown_4_ = var6;
            func_020dcf7c(var0, &var7);
            var3->unknown_18_ = &var7;
            char* var8 = func_020e51cc(0x54);
            func_02046608(var3, 12, var8, arg3, 0xe3, 0, 1);
#endif
            break;
        }
        }
        if (var1 == -2) return 0;
        return 1;
    } else if (arg1 == 1) {
        func_0207d2c4(arg0, arg2);
#if defined(jpn)
        sprintf(arg3, &data_020f106e, arg2);
#else
        Struct_020465c0* var9 = func_020421a0();
        func_02046380(var9);
        func_020465c0(var9, 0, arg2);
        char* var10 = func_020e51cc(0x3f4);
        func_02046608(var9, 12, var10, arg3, 0xe3, 0, 1);
#endif
        return 1;
    } else {
#if defined(jpn)
        sprintf(arg3, &data_020f1094);
#else
        sprintf(arg3, func_020e51cc(0x2d));
#endif
        return 0;
    }
}
