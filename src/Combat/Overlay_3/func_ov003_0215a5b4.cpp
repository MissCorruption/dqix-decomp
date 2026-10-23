#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0215a5b4_336 = 0x144 };
enum { Enum_ov003_0215a5b4_2464 = 0x870 };
enum { Enum_ov003_0215a5b4_2400 = 0x800 };
enum { Enum_ov003_0215a5b4_2144 = 0x700 };
#else
enum { Enum_ov003_0215a5b4_336 = 0x150 };
enum { Enum_ov003_0215a5b4_2464 = 0x9a0 };
enum { Enum_ov003_0215a5b4_2400 = 0x960 };
enum { Enum_ov003_0215a5b4_2144 = 0x860 };
#endif
#include "std_library_functions.h"
#include "GameState/GameState.h"

struct Struct_ov003_0215a5b4 {
    char unknown_0_[0x56b];
    unsigned char unknown_56b_0_ : 4;
};

struct Struct_ov003_0215a5b4_2 {
    char unknown_0_[Enum_ov003_0215a5b4_336];
    struct Struct_ov003_0215a5b4* unknown_150_;
};

struct Struct_ov003_0215a5b4_3 {
    char unknown_0_[Enum_ov003_0215a5b4_2464];
    int unknown_9a0_;
};

struct Struct_ov003_0215a5b4_4 {
    char unknown_0_[0x64];
    char unknown_64_[0x7c - 0x64];
    char* unknown_7c_;
    char unknown_80_[0xf4 - 0x80];
    char unknown_f4_[0x580 - 0xf4];
    unsigned char unknown_580_;
    char unknown_581_[0x588 - 0x581];
    unsigned char unknown_588_;
};

struct Struct_0201099c_3;
struct Struct_0205d81c;

extern "C" struct Struct_ov003_0215a5b4_3* func_020421a0();
extern "C" void func_0205deb4(struct Struct_0205d81c* arg0, int arg1, int arg2);
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_02042058(char* arg0, const char* arg1);
extern "C" void __clear(void* arg0, int arg1);
extern "C" unsigned char func_020114ec(char* arg0, void* arg1);
extern "C" void func_ov003_021592d8(struct Struct_ov003_0215a5b4_4* arg0, struct Struct_ov003_0215a5b4_2* arg1, char* arg2);
extern "C" void func_ov003_02159250(struct Struct_ov003_0215a5b4_4* arg0, char* arg1);
extern "C" void func_ov003_0215c01c(struct Struct_ov003_0215a5b4_4* arg0, int arg1, int arg2);

// USA: func_ov003_0215a5b4
extern "C" ARM void func_ov003_0215a5b4(struct Struct_ov003_0215a5b4_4* arg0) {
    struct Struct_ov003_0215a5b4_3* var0 = func_020421a0();
    unsigned char var1 = arg0->unknown_580_;
    if (var1 == 0) {
        GameState* var2 = GameState::GetInstance();
        func_0205deb4((struct Struct_0205d81c*)arg0->unknown_f4_, 0, 1);
        func_0205deb4((struct Struct_0205d81c*)arg0->unknown_f4_, 1, 1);
        func_0205deb4((struct Struct_0205d81c*)arg0->unknown_f4_, 2, 1);
        memset(arg0->unknown_7c_, 0, Enum_ov003_0215a5b4_2400);
        func_02042058(arg0->unknown_7c_,
                             (const char*)func_020e0434((struct Struct_0201099c_3*)arg0->unknown_64_, 0x3fc));
        unsigned char var3[4];
        char* var4 = arg0->unknown_7c_ + Enum_ov003_0215a5b4_2144;
        __clear(var3, sizeof(var3));
        int var5 = func_020114ec((char*)var2, var3);
        for (int var6 = 0; var6 < var5; var6++) {
            struct Struct_ov003_0215a5b4_2* var7 =
                (struct Struct_ov003_0215a5b4_2*)func_0200ff1c(var2, var3[var6]);
            if (var7 == NULL) {
                continue;
            }
            int var8;
            if (var7->unknown_150_ != NULL) {
                var8 = var7->unknown_150_->unknown_56b_0_ != 0;
            } else {
                var8 = 0;
            }
            if (var8) {
                continue;
            }
            memset(var4, 0, 0x80);
            func_ov003_021592d8(arg0, var7, var4);
            func_02042058(arg0->unknown_7c_, var4);
        }
        func_02042058(arg0->unknown_7c_,
                             (const char*)func_020e0434((struct Struct_0201099c_3*)arg0->unknown_64_, 0x42e));
        func_ov003_02159250(arg0, arg0->unknown_7c_);
        arg0->unknown_580_++;
    }
    if (var1 == 1 && var0->unknown_9a0_ == 3) {
        func_ov003_0215c01c(arg0, 1, 0);
        arg0->unknown_588_ = 2;
        arg0->unknown_580_ = 0;
    }
}
