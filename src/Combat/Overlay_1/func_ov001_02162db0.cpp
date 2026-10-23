#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Brightness.h"

struct Struct_02000c9c_38 {
    char unknown_0_[0x20];
};

struct Struct_ov001_02162db0 {
    char unknown_0_[0x194];
    Struct_02000c9c_38 unknown_194_[1];
};

struct Struct_ov001_02162db0_2 {
    #if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    Struct_ov001_02162db0* unknown_150_;
};

struct Struct_ov001_02162db0_3 {
    #if defined(jpn)
    char unknown_0_[0x17c];
#else
    char unknown1_0_[0x180];
#endif
    signed char unknown_180_;
    char unknown_181_;
    short unknown_182_;
};

struct Struct_ov001_02165880_51 {
    char unknown_0_[0x18];
    unsigned int unknown_18_;
};

struct Struct_ov001_02164d14_3 {
    char unknown_0_[0x30];
    int unknown_30_;
    int unknown_34_[8];
};

extern "C" int func_ov017_021d60f4(void* arg0);
struct Struct_02052e2c;
extern "C" short* func_02052e2c(Struct_02052e2c*);
struct Struct_02052df8;
extern "C" int func_02052df8(Struct_02052df8*, int);
extern "C" void func_02052d7c(Struct_ov001_02162db0_2* arg0, int arg1, short arg2);
extern "C" void* func_02010828(GameState* arg0);
extern "C" void func_ov017_0218f5a4(GameResources* arg0, int arg1, int arg2, int arg3, int arg4);

extern Struct_ov001_02165880_51 data_ov001_02165880;
extern Struct_ov001_02164d14_3 data_ov001_02164d14;
extern int data_ov001_02164a30[];
extern int data_ov001_02164d44[];

// USA: func_ov001_02162db0
extern "C" ARM int func_ov001_02162db0(void* arg0, int arg1) {
    GameState* var0;
    Struct_ov001_02162db0_2* var1;
    int var2;
    GameResources* var3;
    Struct_ov001_02162db0_3* var4;
    int var5;
    int var6;
    short* var7;

    var0 = GameState::GetInstance();
    var5 = func_ov017_021d60f4(arg0);
    var1 = (Struct_ov001_02162db0_2*)func_0200ff1c(var0, var5);
    if (var1 == NULL) {
        return 0;
    }
    var6 = func_ov017_021d60f4((char*)arg0 + 8);
    var2 = 0;
    if (arg1 >= 3) {
        var2 = func_ov017_021d60f4((char*)arg0 + 0x10);
    }

    if (!(data_ov001_02165880.unknown_18_ & 1)) {
        int var8 = var5 * 0xc;
        data_ov001_02164d14.unknown_30_ = var5;
        data_ov001_02164d14.unknown_34_[0] = var8 + 0x13;
        data_ov001_02164d14.unknown_34_[1] = var8 + 0x14;
        data_ov001_02164d14.unknown_34_[2] = var8 + 0x15;
        data_ov001_02164d14.unknown_34_[3] = var8 + 0x17;
        data_ov001_02164d14.unknown_34_[4] = var8 + 0x19;
        data_ov001_02164d14.unknown_34_[5] = var8 + 0x1b;
        data_ov001_02164d14.unknown_34_[6] = var8 + 0x1c;
        data_ov001_02164d14.unknown_34_[7] = var8 + 0x1d;
        data_ov001_02165880.unknown_18_ |= 1;
    }

    if (&var1->unknown_150_->unknown_194_[(unsigned char)data_ov001_02164a30[var6]] == NULL) {
        return 0;
    }
    var7 = func_02052e2c((Struct_02052e2c*)var1);
    if (var7 == NULL) {
        return 0;
    }

    var3 = GetGameResources();
    var4 = (Struct_ov001_02162db0_3*)var3->unknown_ptr_array_371c[6];
    func_02010828(var0);
    var0->GetGameObjectByIndex(data_ov001_02164d44[var6]);

    if (var2 == 0) {
        var4->unknown_182_ = -1;
        var4->unknown_180_ = -1;
        var4->unknown_182_ = var7[var6];
        func_02052d7c(var1, var6, -1);
    } else {
        int var9 = var4->unknown_182_;
        signed char var10 = var4->unknown_180_;
        var4->unknown_182_ = -1;
        var4->unknown_180_ = -1;
        if (func_02052df8((Struct_02052df8*)var1, var6) < 0 && var10 != 6) {
            func_02052d7c(var1, var6, var9);
        }
    }

    ClearFlags00(var3, 0x10);
    BackgroundLoader::GetInstance();
    func_ov017_0218f5a4(var3, var5, 1, 0, 0);
    return 1;
}
