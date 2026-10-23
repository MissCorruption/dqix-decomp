#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct Struct_ov000_0217c32c {
    unsigned int unknown_0_0_ : 7;
    unsigned int unknown_0_7_ : 4;
    unsigned int unknown_1_3_ : 21;
};

struct Struct_ov000_0217c32c_4 {
    struct Struct_ov000_0217c32c* unknown_0_;
};

struct Struct_ov000_0217c32c_5 {
    char unknown_0_[0x2b4];
    struct Struct_ov000_0217c32c_4 unknown_2b4_;
#if defined(jpn)
    char unknown_2b8_[0x8b8 - 0x2b8];
#else
    char unknown1_2b8_[0x950 - 0x2b8];
#endif
    int unknown_950_;
};

struct Struct_02054000 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    struct Struct_ov000_0217c32c_5* unknown_150_;
};
extern "C" struct Struct_ov000_0217c32c_4* func_02054000(struct Struct_02054000* arg0);

struct Struct_02052e14;
extern "C" short* func_02052e14(struct Struct_02052e14* arg0);
extern "C" void* func_02053c6c(unsigned char* arg0);

struct Struct_0200f3a4_8;
extern "C" void func_0209a338(struct Struct_0200f3a4_8* arg0);
struct Struct_0209a348;
extern "C" void func_0209a348(struct Struct_0209a348* arg0, void* arg1);

struct Struct_0209a614_2 {
#if defined(jpn)
    unsigned short unknown_0_0_ : 12;
    unsigned short unknown_1_4_ : 4;
#else
    unsigned short unknown_0_0_ : 11;
    unsigned short unknown_1_3_ : 5;
#endif
    unsigned short unknown_2_;
    unsigned int unknown_4_0_ : 5;
    unsigned int unknown_4_5_ : 27;
    int unknown_8_;
};
struct Struct_0209a614 {
    struct Struct_0209a614_2* unknown_0_;
    int unknown_4_;
};
extern "C" struct Struct_0209a614_2* func_0209a614(struct Struct_0209a614* arg0, int arg1);

struct Struct_ov000_0217c32c_2 {
    int unknown_0_;
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
};

struct Struct_ov000_0217c32c_3 {
    char unknown_0_[0x4c];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0xc8 - 0x50];
#else
    char unknown1_50_[0x88 - 0x50];
#endif
    unsigned char unknown_88_[0x13];
    char unknown_9b_[0x1a4 - 0x9b];
    struct Struct_ov000_0217c32c_2* unknown_1a4_[0x93];
};

// USA: func_ov000_0217c32c
extern "C" ARM void func_ov000_0217c32c(struct Struct_ov000_0217c32c_3* arg0) {
    struct Struct_02054000* var0 = (struct Struct_02054000*)func_0200ff1c(GameState::GetInstance(), arg0->unknown_4c_);
    if (var0 == NULL) {
        return;
    }
    struct Struct_ov000_0217c32c_4* var1 = func_02054000(var0);
    struct Struct_ov000_0217c32c_4* var2 = &var0->unknown_150_->unknown_2b4_;
    short* var3 = func_02052e14((struct Struct_02052e14*)var0);
    if (var3 != NULL) {
        if (var3[7] < 0) {
            var1 = NULL;
        }
        if (var3[8] < 0) {
            var2 = NULL;
        }
    }
    if (func_02053c6c((unsigned char*)var0) == NULL) {
        return;
    }
    memset(arg0->unknown_88_, 0, sizeof(arg0->unknown_88_));
    struct Struct_0209a614 var4;
    struct Struct_0209a614_2 var5[287];
    func_0209a338((struct Struct_0200f3a4_8*)&var4);
    func_0209a348((struct Struct_0209a348*)&var4, var5);
    for (unsigned short var6 = 0; var6 < 0x93; var6++) {
        struct Struct_ov000_0217c32c_2* var7 = arg0->unknown_1a4_[var6];
        if (var7 == NULL) {
            return;
        }
        struct Struct_0209a614_2* var8 = func_0209a614(&var4, var7->unknown_4_0_);
        if (var8 == NULL) {
            continue;
        }
        int var9;
        if (var0->unknown_150_->unknown_950_ == 0) {
            var9 = 1;
        } else if (var1 != NULL) {
            var9 = var1->unknown_0_->unknown_0_7_ == var8->unknown_4_0_;
        } else {
            var9 = var8->unknown_4_0_ == 0xe;
        }
        if (var2 != NULL && var2->unknown_0_->unknown_0_7_ == var8->unknown_4_0_) {
            var9 = 1;
        }
        if (var8->unknown_4_0_ > 0xe) {
            var9 = 1;
        }
        if (var8->unknown_0_0_ == 0x11e) {
            var9 = 1;
        }
        if (var9) {
            arg0->unknown_88_[(unsigned char)(var6 >> 3)] |= 1 << (var6 & 7);
        }
    }
}
