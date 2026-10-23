#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include <globaldefs.h>

struct Struct_0201099c_9;
struct Struct_0201099c_10 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[10];
    struct Struct_0201099c_9* unknown_c_;
    unsigned char unknown_10_[4];
    unsigned char unknown_14_;
};
struct Struct_02052e2c;
struct Struct_02052df8;

struct Struct_ov003_0217599c_3 {
    int unknown_0_;
    unsigned int unknown_4_0_ : 27;
    unsigned int unknown_7_3_ : 1;
    unsigned int unknown_7_4_ : 1;
    unsigned int unknown_7_5_ : 1;
    unsigned int unknown_7_6_ : 2;
};
struct Struct_ov003_0217599c_4 {
    Struct_ov003_0217599c_3 *unknown_0_;
    unsigned char unknown_4_[4];
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 28;
    unsigned char unknown_c_[0xc];
    short unknown_18_;
    unsigned char unknown_1a_[6];
};
struct Struct_ov003_0217599c_5 {
    unsigned char unknown_0_[0x194];
    Struct_ov003_0217599c_4 unknown_194_[8];
    unsigned char unknown_294_[0x49c - 0x294];
    unsigned char unknown_49c_0_ : 1;
};
struct Struct_ov003_0217599c {
    #if defined(jpn)
    unsigned char unknown_0_[0x144];
#else
    unsigned char unknown1_0_[0x150];
#endif
    Struct_ov003_0217599c_5 *unknown_150_;
};
struct Struct_ov003_0217e33c {
    unsigned char unknown_0_[8];
};
struct Struct_0206b37c {
    SafeAllocator unknown_0_;
    char unknown_14_[0x18];
    Struct_0201099c_10 *unknown_2c_;
    int unknown_30_;
    int unknown_34_;
};
struct Struct_01ff91ac_34 {
    char unknown_0_[0x74];
    char unknown_74_[4];
    char unknown_78_[0x103a - 0x78 - 0x800];
};
struct Struct_ov003_0217599c_2 {
#if defined(jpn)
    char unknown_0_[0x7f0];
#else
    char unknown1_0_[0x874];
#endif
    Struct_0201099c_10 unknown_874_;
    char unknown_88c_[0x103a - 0x874 - sizeof(Struct_0201099c_10)];
    short unknown_103a_;
    unsigned char unknown_103c_;
    char unknown_103d_[6];
    signed char unknown_1043_;
};

extern "C" int *func_0202ae18();
extern "C" int func_0202b7d8(int *);
extern "C" short *func_02052e2c(Struct_02052e2c *);
extern "C" Struct_ov003_0217599c_4 *func_020dedd0(Struct_0201099c_10 *, int);
extern "C" void *func_020de824(void *);
extern "C" void func_0207cbe8(char *);
extern "C" void func_0207cc18(void *, Struct_ov003_0217599c_4 *);
extern "C" void func_0207cc0c(char *);
extern "C" int func_020dd4c4(int, void *);
extern "C" int func_02052df8(Struct_02052df8 *, int);
extern "C" void func_02052d7c(Struct_ov003_0217599c *, int, short);
extern "C" void *func_02053c6c(unsigned char *);
extern "C" void func_0208358c(void *, Struct_ov003_0217599c_4 *, int);
extern "C" void func_0207c378(char *, int, int, int);
static inline int inline_ov003_0217599c(unsigned int arg0) {
    return arg0 <= 7;
}
extern "C" void func_ov017_021c3fb4(int, int);
extern "C" void func_ov017_021c4418(int, int);
GameResources *GetGameResources();
extern "C" void func_ov017_0218f5a4(GameResources *, int, int, int, int);

#if defined(jpn)
extern int data_ov003_0217e388[9];
extern Struct_ov003_0217e33c data_ov003_0217e33c;
#else
extern int data_ov003_0217faf4[9];
extern Struct_ov003_0217e33c data_ov003_0217faac;
#endif

// JPN: func_ov003_0217599c (021749d4)
// USA: func_ov003_0217599c
extern "C" ARM int func_ov003_0217599c(Struct_ov003_0217599c_2 *arg0) {
    GameState *var0        = GameState::GetInstance();
    int *var1          = func_0202ae18();
    Struct_ov003_0217599c *var2 = (Struct_ov003_0217599c *) func_0200ff1c(var0, arg0->unknown_1043_);
    if (!var2) return 0;
    if (!func_02052e2c((Struct_02052e2c *) var2)) return 0;
    Struct_ov003_0217599c_4 *var3 =
        func_020dedd0(&arg0->unknown_874_, arg0->unknown_103a_);
    if (!var3) return 0;
    unsigned int var4 = var3->unknown_8_0_;
    Struct_0206b37c var5;
    var5.unknown_0_.ResetAllocatorPointer();
    func_020de824(var5.unknown_14_);
    func_0207cbe8((char *) &var5);
    func_0207cbe8((char *) &var5);
    var5.unknown_2c_ = &arg0->unknown_874_;
    func_0207cc18(&var5, var3);
    func_0207cc0c((char *) &var5);
    if (!inline_ov003_0217599c(var4)) return 0;
    if (func_020dd4c4(arg0->unknown_1043_, var3)) return 0;
#if defined(jpn)
    int var6 = data_ov003_0217e388[var4];
#else
    int var6 = data_ov003_0217faf4[var4];
#endif
    if (var6 < 0) return 1;
    char *var7      = (char *) func_02010828(var0);
    int var8 = func_02052df8((Struct_02052df8 *) var2, var6);
    int var9       = arg0->unknown_103a_ == var8;
    if (!var9) {
        func_02052d7c(var2, var6, arg0->unknown_103a_);
        func_0208358c(func_02053c6c((unsigned char *) var2), var3, -1);
    }
    if (func_020dedd0(&arg0->unknown_874_, var8)) {
        func_0207c378(var7 + 0x1d4, var8, 1, var4);
    }
    arg0->unknown_103c_--;
    if (var9) return 1;
    if (var8 == 0x4680) {
#if defined(jpn)
        Struct_ov003_0217e33c var10 = data_ov003_0217e33c;
#else
        Struct_ov003_0217e33c var10 = data_ov003_0217faac;
#endif
        unsigned char var11[2];
        for (unsigned char var12 = 0; var12 < 8; var12++) {
            if (var10.unknown_0_[var12] == 0xff) break;
            Struct_ov003_0217599c_5 *var13   = var2->unknown_150_;
            Struct_ov003_0217599c_4 *var14 = &var2->unknown_150_->unknown_194_[var10.unknown_0_[var12]];
            if (!var14 || var14->unknown_18_ < 0) continue;
            Struct_ov003_0217599c_3 *var15 = var14->unknown_0_;
            if (!var15 || var15->unknown_7_5_) continue;
            var11[0] = var15->unknown_7_3_ ? 1 : 0;
            var11[1] = var15->unknown_7_4_ ? 1 : 0;
            if (var11[var13->unknown_49c_0_]) continue;
#if defined(jpn)
            func_02052d7c(var2, data_ov003_0217e388[var12], -1);
#else
            func_02052d7c(var2, data_ov003_0217faf4[var12], -1);
#endif
            if (!var14) continue;
            func_0207c378(var7 + 0x1d4, var14->unknown_18_, 1, var14->unknown_8_0_);
        }
    }
    if (func_0202b7d8(var1)) {
        func_ov017_021c3fb4(arg0->unknown_1043_, 1);
        func_ov017_021c4418(arg0->unknown_1043_, -1);
    }
    GameResources *var16 = GetGameResources();
    BackgroundLoader::GetInstance();
    func_ov017_0218f5a4(var16, arg0->unknown_1043_, 1, 0, 0);
    return 1;
}
