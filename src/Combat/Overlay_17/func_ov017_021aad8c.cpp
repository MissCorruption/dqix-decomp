#if defined(jpn)
enum { Enum_ov017_021aad8c_728 = 0x228 };
#else
enum { Enum_ov017_021aad8c_728 = 0x2d8 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0207fcb8;
extern "C" void func_0207fcb8(struct Struct_0207fcb8* arg0);
struct Struct_0207fd00;
extern "C" void func_0207fd00(struct Struct_0207fd00* arg0);
extern "C" void func_0207fe80(void* arg0, int arg1, int arg2, int arg3);
struct Struct_0207fd44_2;
extern "C" void func_0207fd44(struct Struct_0207fd44_2* arg0);
struct Struct_0207fdcc_2;
extern "C" void* func_02081da8(struct Struct_0207fdcc_2* arg0, int arg1);
extern "C" void func_020809c4(void* arg0, int arg1, int arg2, short* arg3, short* arg4);
extern "C" int func_020421a0(void);
struct Struct_0205a330;
extern "C" void func_0205a330(struct Struct_0205a330* arg0, int arg1);
struct Struct_0205a254;
extern "C" void func_0205a370(struct Struct_0205a254* arg0, int arg1);
extern "C" void* func_0205a3d0(struct Struct_0205a254* arg0, int arg1);
extern "C" void func_0205ae8c(void* arg0);

struct Struct_ov017_021aad8c_3 {
    char unknown_0_[4];
    short unknown_4_;
    short unknown_6_;
    char unknown_8_[0x15 - 8];
    unsigned char unknown_15_;
};

struct Struct_ov017_021aad8c {
    char unknown_0_[Enum_ov017_021aad8c_728];
    void* unknown_2d8_;
    char unknown_2dc_[4];
    void* unknown_2e0_;
    unsigned short unknown_2e4_;
};

struct Struct_ov017_021aad8c_2 {
    char unknown_0_[0x14];
    int unknown_14_;
    void* unknown_18_;
    char unknown_1c_[0x28];
    short* unknown_44_;
    short unknown_48_;
};

// USA: func_ov017_021aad8c
extern "C" ARM void func_ov017_021aad8c(struct Struct_ov017_021aad8c_2* arg0) {
    if (arg0->unknown_14_ != 5) return;

    if (arg0->unknown_18_ != NULL) {
        void* var0 = arg0->unknown_18_;
        func_0207fcb8((struct Struct_0207fcb8*)var0);
        func_0207fd00((struct Struct_0207fd00*)var0);
        func_0207fe80(var0, 2, 1, 1);
        func_0207fd44((struct Struct_0207fd44_2*)var0);
    }

    if (arg0->unknown_44_ == NULL) return;
    if (arg0->unknown_48_ < 0) return;
    if (func_02081da8((struct Struct_0207fdcc_2*)arg0->unknown_18_, arg0->unknown_48_) == NULL) return;

    short var1, var2;
    func_020809c4(arg0->unknown_18_, arg0->unknown_48_, *arg0->unknown_44_, &var1, &var2);
    var1 -= 0x10;
    var2 -= 3;

    struct Struct_ov017_021aad8c* var3 = (struct Struct_ov017_021aad8c*)func_020421a0();
    void* var4 = var3->unknown_2e0_;
    int var5 = var3->unknown_2e4_;
    void* var6 = var3->unknown_2d8_;
    if (var6 != NULL && var4 != NULL) {
        GameState* var7 = GameState::GetInstance();
        unsigned int var8 = var7->GetTickCount();
        func_0205a330((struct Struct_0205a330*)var4, var8);
        func_0205a370((struct Struct_0205a254*)var4, var5);

        struct Struct_ov017_021aad8c_3* var9 = (struct Struct_ov017_021aad8c_3*)func_0205a3d0((struct Struct_0205a254*)var4, var5);
        if (var9 != NULL) var9->unknown_15_ |= 8;

        short var10;
        short var11 = var2;
        var10 = var1;
        struct Struct_ov017_021aad8c_3* var12 = (struct Struct_ov017_021aad8c_3*)func_0205a3d0((struct Struct_0205a254*)var4, var5);
        if (var12 != NULL) {
            var12->unknown_4_ = var10;
            var12->unknown_6_ = var11;
        }

        func_0205ae8c(var6);
    }
}
