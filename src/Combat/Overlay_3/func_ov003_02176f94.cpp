// USA: func_ov003_02176f94
#include <globaldefs.h>
#if defined(jpn)
enum {
    Enum_ov003_02176f94_2204 = 0x818
};
enum {
    Enum_ov003_02176f94_2164 = 0x7f0
};
enum {
    Enum_ov003_02176f94_4124 = 0xf98
};
enum {
    Enum_ov003_02176f94_4144 = 0xfac
};
enum {
    Enum_ov003_02176f94_4154 = 0xfb6
};
#else
enum {
    Enum_ov003_02176f94_2204 = 0x89c
};
enum {
    Enum_ov003_02176f94_2164 = 0x874
};
enum {
    Enum_ov003_02176f94_4124 = 0x101c
};
enum {
    Enum_ov003_02176f94_4144 = 0x1030
};
enum {
    Enum_ov003_02176f94_4154 = 0x103a
};
#endif

#include "GameState/GameState.h"

struct Struct_0207fdcc_2;
extern "C" void func_02080c20(struct Struct_0207fdcc_2 *arg0, int arg1);
extern "C" void func_02080c68(void *arg0, int arg1, int arg2);
extern "C" void func_02080bac(void *arg0, int arg1);
struct Struct_0201099c_10;
struct Struct_ov003_02176f94;
extern "C" struct Struct_ov003_02176f94 *func_020dedd0(struct Struct_0201099c_10 *arg0, int arg1);
extern "C" void *func_02053c6c(unsigned char *arg0);
struct Struct_02083994;
extern "C" int func_02083994(struct Struct_02083994 *arg0, int arg1);
struct Struct_02080f8c;
extern "C" void func_02080f8c(struct Struct_02080f8c *arg0, int arg1, int arg2);
extern "C" int func_020dcc98(int arg0);
struct Struct_02080cc0;
extern "C" void func_02080cc0(struct Struct_02080cc0 *arg0, int arg1, int arg2);
struct Struct_02080fa8;
extern "C" void func_02080fa8(struct Struct_02080fa8 *arg0, int arg1, int arg2);
extern "C" int func_02080b2c(void *arg0, int arg1);
extern "C" void func_02080b54(void *arg0, int arg1);
extern "C" void func_02080c04(struct Struct_0207fdcc_2 *arg0, int arg1);
extern "C" short func_02086bf4(char *arg0, int arg1);
extern "C" void func_020813ec(void *arg0, int arg1);
extern "C" void *func_02010828(GameState *arg0);

struct Struct_ov003_02176f94 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 28;
};

struct Struct_ov003_02176f94_2 {
    unsigned char unknown_0_[Enum_ov003_02176f94_2204];
    Struct_0207fdcc_2* unknown_89c_;
    unsigned char unknown_8a0_[Enum_ov003_02176f94_4124 - Enum_ov003_02176f94_2204 - 4];
    int unknown_101c_[4];
    unsigned char unknown_102c_[Enum_ov003_02176f94_4144 - Enum_ov003_02176f94_4124 - 16];
    int unknown_1030_;
    unsigned char unknown_1034_[Enum_ov003_02176f94_4154 - Enum_ov003_02176f94_4144 - 4];
    short unknown_103a_;
};

static inline int inline_ov003_02176f94(unsigned int arg0) {
    return arg0 <= 7;
}

extern "C" ARM void func_ov003_02176f94(Struct_ov003_02176f94_2* arg0) {
    struct Struct_0207fdcc_2 *var0 = arg0->unknown_89c_;
    GameState *var1    = GameState::GetInstance();
    char *var2            = (char *) func_02010828(var1);

    int var3    = 0x19;
    short var4    = 0xe9;
    short var5 = 0xeb;
    short var6 = 0xed;
    short var7 = 0xef;
    switch (arg0->unknown_1030_) {
        case 2:
            var3  = 0x1a;
            var4    = 0xf0;
            var5 = 0xf3;
            var6 = 0xf6;
            var7 = 0xf9;
            break;
        case 3:
            var5 = 0xff;
            var6 = 0x103;
            var7 = 0x107;
            var3  = 0x1b;
            var4    = 0xfb;
            break;
        case 4:
            var3  = 0x1c;
            var4    = 0x10a;
            var5 = 0x10f;
            var6 = 0x114;
            var7 = 0x119;
            break;
    }

    func_02080c20(var0, var3);
    func_02080c68(var0, var3, 0);
    func_02080bac(var0, var3);

    bool var8                 = true;
    struct Struct_ov003_02176f94 *var9 = func_020dedd0(
        (struct Struct_0201099c_10 *) ((char*)arg0 + Enum_ov003_02176f94_2164), arg0->unknown_103a_);
    if (var9 != NULL) var8 = inline_ov003_02176f94(var9->unknown_8_0_);
    if (!var8) {
        for (unsigned char var10 = 0; var10 < arg0->unknown_1030_; var10++) {
            int var11;
            short var12;
            int var13;
            var13                = (signed char) arg0->unknown_101c_[var10];
            var11         = 0;
            var12              = 0;
            GameObject *var14 = var1->GetPartyMemberByIndex(var13);
            if (var14 != NULL) {
                var11 = (int)var14->baseStats_;
                var12 = func_02083994(
                    (struct Struct_02083994 *) func_02053c6c((unsigned char *) var14), arg0->unknown_103a_);
            }
            func_02080f8c((struct Struct_02080f8c *) var0, var4, var11);
            func_02080cc0((struct Struct_02080cc0 *) var0, var4, func_020dcc98(var13));
            func_02080fa8((struct Struct_02080fa8 *) var0, var5, var12);
            if (var12 != 0) {
                func_02080b2c(var0, var7);
            } else {
                func_02080b2c(var0, var5);
                func_02080b2c(var0, var6);
            }
            var4++;
            var5++;
            var6 = var6 + 1;
            var7 = var7 + 1;
        }
    } else {
        func_02080b54(var0, var3);
        func_02080c04(var0, var3);
    }
    func_02080fa8((struct Struct_02080fa8 *) var0, var5,
                                                         func_02086bf4(var2, arg0->unknown_103a_));
    func_020813ec(var0, var3);
}
