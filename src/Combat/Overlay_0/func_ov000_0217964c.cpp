#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov000_0217964c_92=0x28, Enum_ov000_0217964c_2400=0x800, Enum_ov000_0217964c_16=12, Enum_ov000_0217964c_8=7, Enum_ov000_0217964c_16_2=0x17, Enum_ov000_0217964c_5=8 };
#else
enum { Enum_ov000_0217964c_92=0x5c, Enum_ov000_0217964c_2400=0x960, Enum_ov000_0217964c_16=16, Enum_ov000_0217964c_8=8, Enum_ov000_0217964c_16_2=0x10, Enum_ov000_0217964c_5=5 };
#endif
extern "C" void func_020dcfc8(int arg0, char* arg1);
struct Struct_ov000_0217964c {
    char unknown_0_[Enum_ov000_0217964c_92];
    char* unknown_5c_;
};

struct Struct_ov000_02171ffc_5 {
    char unknown_0_[0x18];
    short unknown_18_;
};

struct Struct_ov000_0217964c_2 {
    char unknown_0_[0x22];
    signed char unknown_22_;
    char unknown_23_[0x44 - 0x23];
    int unknown_44_;
    int unknown_48_;
    int unknown_4c_;
};

struct Struct_0205d81c;
struct Struct_0205d5d0;

struct Struct_ov000_0217964c_3 {
    char unknown_0_[0xa0];
    short unknown_a0_;
    short unknown_a2_;
    short unknown_a4_;
    short unknown_a6_;
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_;
    unsigned char unknown_b1_;
};

struct Struct_ov000_02176e3c {
    char unknown_0_[0x188];
    struct Struct_ov000_0217964c_3 unknown_188_;
};

extern "C" Struct_ov000_0217964c* func_020421a0();
extern "C" void* func_02053c6c(unsigned char* arg0);
extern "C" Struct_ov000_02171ffc_5* func_ov000_02171b9c(void* arg0, int arg1);
extern "C" void func_02046608(Struct_ov000_0217964c* arg0, int arg1, char* arg2, char* arg3, int arg4, int arg5, int arg6);
extern "C" void* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);
#if defined(jpn)
extern "C" void func_0205d304(void*, void*, int, int, int, int, int);
#define APPLY_TEXT(s,k,t) func_0205d5d0(s,k,(int)t,1)
#define DRAW_TEXT(s,t) func_0205d304(s,t,0,0,0,1,0)
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#define APPLY_TEXT(s,k,t) func_0205d5d0(s,k,(int)t,1,0)
#define DRAW_TEXT(s,t) func_0205d304(s,t,0,0,0,1,0,0)
#endif

// USA: func_ov000_0217964c
extern "C" ARM void func_ov000_0217964c(Struct_ov000_02176e3c* arg0, Struct_ov000_0217964c_2* arg1) {
    char* var0;
    Struct_ov000_0217964c_3* var1;
#if !defined(jpn)
    char var2[0x800];
#endif
    if (arg1 == NULL) {
        return;
    }
    char* var3 = func_020421a0()->unknown_5c_;
    memset(var3, 0, Enum_ov000_0217964c_2400);
    GameObject* var4 = func_0200ff1c(GameState::GetInstance(), arg1->unknown_4c_);
    if (var4 == NULL) {
        return;
    }
    func_02053c6c((unsigned char*)var4);
    Struct_ov000_02171ffc_5* var5 = func_ov000_02171b9c(arg1, arg1->unknown_22_);
    if (var5 == NULL) {
        return;
    }
    if (var5->unknown_18_ <= 0) {
        return;
    }
    func_020dcfc8(var5->unknown_18_, var3);
#if !defined(jpn)
    func_02046608(func_020421a0(), 0xa, var3, var2, 0x72, 0, 0);
#endif
    var1 = &arg0->unknown_188_;
#if defined(jpn)
    var0 = var3;
#else
    var0 = var2;
#endif
    if (func_0205d81c((struct Struct_0205d81c*)var1, 0x24) != NULL) {
        APPLY_TEXT((struct Struct_0205d5d0*)var1, 0x24, var0);
    } else {
        int var6 = arg1->unknown_44_;
        int var7 = arg1->unknown_48_;
        var1->unknown_a0_ = Enum_ov000_0217964c_16;
        var1->unknown_a2_ = Enum_ov000_0217964c_8;
        var1->unknown_a4_ = (var6 >> 3) + Enum_ov000_0217964c_16_2;
        var1->unknown_a6_ = var7 >> 3;
        var1->unknown_a8_ = 7;
        var1->unknown_aa_ = Enum_ov000_0217964c_5;
        var1->unknown_ac_ = 0xa;
        var1->unknown_ae_ = 0xe;
        var1->unknown_b1_ = 0x24;
        DRAW_TEXT(var1, var0);
    }
}
