#include "GameState/GameState.h"
#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
#define REGIONAL_OFFSET(jp, us) jp
#else
#define REGIONAL_OFFSET(jp, us) us
#endif

struct Struct_0207fdcc_2;
struct Struct_0207fdf0_2;
struct Struct_02108760;
struct Struct_02081f20_2;
struct Struct_0201099c_10;
struct Struct_ov003_02179e18;
struct Struct_ov003_02178910;

extern "C" void *func_02010828(GameState *arg0);

extern "C" int func_ov003_02179f34(char *arg0);
extern "C" short func_02080468(void *arg0, int arg1);
extern "C" int func_ov003_02175f20(void *arg0);
extern "C" void func_ov003_02177dd4(void *arg0);
extern "C" void func_ov003_021769ec(void *arg0);
extern "C" void func_02081ea4(struct Struct_0207fdcc_2 *arg0, int arg1, int arg2);
extern "C" void func_02080c68(void *arg0, int arg1, int arg2);
extern "C" void func_0208203c(struct Struct_02081f20_2 *arg0);
extern "C" void func_ov003_021748c4(unsigned char *arg0);
extern "C" void func_ov003_0217a14c(void *arg0);
extern "C" void func_ov023_021dcae0(struct Struct_ov003_02178910 *arg0, int arg1);
extern "C" int func_ov003_021765b4(void *arg0);
extern "C" void func_0205eaa0(struct Struct_02108760 *arg0, int arg1, int arg2);
struct Struct_0201099c_9 {
    char unknown_0_[8];
    unsigned int unknown_8_;
};
extern "C" struct Struct_0201099c_9 *func_020dedd0(struct Struct_0201099c_10 *arg0, int arg1);
extern "C" void func_0207fdf0(struct Struct_0207fdf0_2 *arg0, int arg1);
extern "C" int func_ov003_02179da8(void *arg0, int arg1);
extern "C" int func_ov003_021766e8(void *arg0);
extern "C" void func_ov003_02177208(char *arg0);
extern "C" void func_ov003_0217726c(char *arg0);
extern "C" int func_ov003_02178218(void *arg0);
extern "C" int func_02081f20(void *arg0, int arg1);
extern "C" unsigned short func_ov003_0217b200(void **arg0);
extern "C" int func_0207c7a0(void *arg0, int arg1, int arg2);
extern "C" unsigned int func_ov003_02179e18(struct Struct_ov003_02179e18 *arg0);
extern "C" int func_ov003_021782a0(struct Struct_0207fdcc_2 *arg0);
extern "C" void func_0207fdcc(struct Struct_0207fdcc_2 *arg0, int arg1);
extern "C" void func_ov003_02176468(unsigned char *arg0);
extern "C" int func_ov003_021764f4(unsigned char *arg0);
extern "C" void func_ov003_02175d78(char *arg0);
extern "C" void func_ov003_02175df4(void *arg0);

extern struct Struct_02108760 data_02108760;

static inline int inline_ov003_0217b430(struct Struct_0201099c_9 *arg0) {
    unsigned int var0 = arg0->unknown_8_;
    return (int) ((var0 << 18) >> 30);
}

// USA: func_ov003_0217b430
extern "C" ARM void func_ov003_0217b430(unsigned char *arg0) {
    GameState *var0 = GameState::GetInstance();
    char *var1   = (char *) func_02010828(var0);
    void *var2     = *(void **) (arg0 + REGIONAL_OFFSET(0x818, 0x89c));
    int var3         = *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3f);

    if (var3 == 0) {
        int var4               = func_ov003_02179f34((char *) arg0);
        unsigned short *var5 = (unsigned short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x46);
        *var5                = (unsigned short) (*var5 & ~0x400);
        if (var4 > 5) {
            *var5 = (unsigned short) (*var5 | 0x400);
        }
        *(short *) (arg0 + 0xf00 + REGIONAL_OFFSET(0x7a, 0xfe)) = 0x1e;
        if (*(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0xe) < 0) {
            *(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0xe) = func_02080468(var2, *(short *) (arg0 + 0xf00 + REGIONAL_OFFSET(0x7a, 0xfe)));
        }
        *(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3a)         = (short) func_ov003_02175f20(arg0);
        *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3c) = 1;
        func_ov003_02177dd4(arg0);
        func_ov003_021769ec(arg0);
        func_02081ea4((struct Struct_0207fdcc_2 *) var2, *(short *) (arg0 + 0xf00 + REGIONAL_OFFSET(0x7a, 0xfe)), 0);
        func_02080c68(var2, *(short *) (arg0 + 0xf00 + REGIONAL_OFFSET(0x7a, 0xfe)), 0);
        func_0208203c((struct Struct_02081f20_2 *) (arg0 + REGIONAL_OFFSET(0x808, 0x88c)));
        *(void **) (arg0 + REGIONAL_OFFSET(0xf74, 0xff8))                 = 0;
        *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3f) = 1;
        func_ov003_021748c4(arg0);
        return;
    }

    if (var3 == 1) {
        short var6               = *(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3a);
        *(void **) (arg0 + REGIONAL_OFFSET(0xf74, 0xff8)) = arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0xe;
        func_ov003_0217a14c(arg0);
        func_ov023_021dcae0((struct Struct_ov003_02178910 *) (arg0 + 0x3c), *(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3a));
        if (func_ov003_021765b4(arg0) != 0 && var6 == *(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3a)) {
            func_0205eaa0(&data_02108760, 1, 0);
            func_0208203c((struct Struct_02081f20_2 *) (arg0 + REGIONAL_OFFSET(0x808, 0x88c)));
            *(void **) (arg0 + REGIONAL_OFFSET(0xf74, 0xff8)) = 0;
            *(void **) (arg0 + 8) =
                func_020dedd0((struct Struct_0201099c_10 *) (arg0 + REGIONAL_OFFSET(0x7f0, 0x874)), *(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3a));
            if (*(void **) (arg0 + 8) == 0) return;
            *(short *) (arg0 + 0xf00 + REGIONAL_OFFSET(0x78, 0xfc)) = *(short *) (arg0 + 0xf00 + REGIONAL_OFFSET(0x7a, 0xfe));
            func_02080c68(var2, *(short *) (arg0 + 0xf00 + REGIONAL_OFFSET(0x7a, 0xfe)), 1);
            func_02080c68(var2, 4, 1);
            func_02080c68(var2, 5, 1);
            func_02080c68(var2, 6, 1);
            func_02080c68(var2, 7, 1);
            *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3f) = 2;
            if (inline_ov003_0217b430(*(struct Struct_0201099c_9 **) (arg0 + 8)) == 0) {
                func_0207fdf0((struct Struct_0207fdf0_2 *) var2, 0);
                *(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x36)          = 0x12;
                *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3f)  = 0;
                unsigned short var7                           = *(unsigned short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x46);
#if defined(jpn)
                var7 = (unsigned short) (var7 | 0x20);
#else
                var7                                          = (unsigned short) ((var7 | 0x20) & ~0x2000);
#endif
                *(unsigned short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x46) = var7;
                return;
            }
            int var8 = func_ov003_02179da8(*(void **) (arg0 + 8), 1);
            switch (var8) {
                case 1:
                    func_0207fdf0((struct Struct_0207fdf0_2 *) var2, 0);
                    *(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x36)         = 0xd;
                    *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3f) = 6;
                    *(unsigned short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x46) =
                        (unsigned short) (*(unsigned short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x46) | 0x2000);
                    if (inline_ov003_0217b430(*(struct Struct_0201099c_9 **) (arg0 + 8)) != 2) return;
                    *(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x36)         = 0x11;
                    *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3f) = 4;
                    return;
                case 2:
                    func_0207fdf0((struct Struct_0207fdf0_2 *) var2, 0);
                    *(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x36)         = 0x1c;
                    *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3e) = 1;
                    *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3f) = 0;
                    *(unsigned short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x46) =
                        (unsigned short) (*(unsigned short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x46) | 0x2000);
                    return;
                default: return;
            }
        }
        if (func_ov003_021766e8(arg0) == 0) return;
        func_0208203c((struct Struct_02081f20_2 *) (arg0 + REGIONAL_OFFSET(0x808, 0x88c)));
        *(void **) (arg0 + REGIONAL_OFFSET(0xf74, 0xff8)) = 0;
        func_0207fdf0((struct Struct_0207fdf0_2 *) var2, 0);
        *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3e)  = 7;
        *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3f)  = 1;
        *(unsigned short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x46) = (unsigned short) (*(unsigned short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x46) | 0x2000);
        return;
    }

    if (var3 == 2) {
        func_ov003_02177208((char *) arg0);
        func_ov003_0217726c((char *) arg0);
        func_0208203c((struct Struct_02081f20_2 *) (arg0 + REGIONAL_OFFSET(0x808, 0x88c)));
        *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3f) = 3;
        *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x4a) = 0;
        return;
    }

    if (var3 == 3) {
        int var9             = 0;
        unsigned char var10 = *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x4a);
        if (var10 < 5) {
            *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x4a) = (unsigned char) (var10 + 1);
        } else {
            var9 = func_ov003_02178218(arg0);
            if (var9 != 0) {
                *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x4a) = 0;
            }
        }
        GameState *var11 = GameState::GetInstance();
        int var12     = (int) var11->GetTickCount();
        int var13     = func_02081f20(arg0 + REGIONAL_OFFSET(0x808, 0x88c), var12);
        if ((unsigned short) (var13 + 0xffff) <= 1) {
            unsigned short var14 = func_ov003_0217b200((void **) (arg0 + REGIONAL_OFFSET(0x808, 0x88c)));
            if (var14 == 0x40)
                var9 = 1;
            else if (var14 == 0x80)
                var9 = -1;
            else if (var14 == 0x20)
                var9 = 0x63;
            else if (var14 == 0x10)
                var9 = ~0x62;
        }
        if (var9 != 0) {
            int var15          = *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3c) + var9;
            int var16           = func_0207c7a0(var1 + 0x1d4, *(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3a), 9);
            unsigned int var17 = func_ov003_02179e18(*(struct Struct_ov003_02179e18 **) (arg0 + 8));
            if ((int) var17 < var16) var16 = (int) var17;
            if (var16 < var15) var15 = var16;
            if (var15 <= 1) var15 = 1;
            *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x4b) = (*(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3c) < var15) ? 1 : 0;
            *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x4c) = (var15 < *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3c)) ? 1 : 0;
            *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3c) = (unsigned char) var15;
            func_ov003_02177208((char *) arg0);
            func_ov003_0217726c((char *) arg0);
        }
        int var18 = func_ov003_021782a0((struct Struct_0207fdcc_2 *) arg0);
        if (g_keyManager.TestKeysPressed(0x401) != 0 || var18 == 1) {
            func_0205eaa0(&data_02108760, 1, 0);
            func_0207fdf0((struct Struct_0207fdf0_2 *) var2, 0);
            *(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x36) = 0xd;
            if (*(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3c) > 1) {
                *(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x36) = 0x20;
            }
            *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3f) = 6;
            *(unsigned short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x46) =
                (unsigned short) (*(unsigned short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x46) | 0x2000);
            func_0208203c((struct Struct_02081f20_2 *) (arg0 + REGIONAL_OFFSET(0x808, 0x88c)));
            if (inline_ov003_0217b430(*(struct Struct_0201099c_9 **) (arg0 + 8)) != 2) return;
            *(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x36)         = 0x11;
            *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3f) = 4;
            return;
        }
        if (g_keyManager.TestKeysPressed(2) != 0 || var18 == -1) {
            func_0207fdcc((struct Struct_0207fdcc_2 *) var2, 9);
            func_0207fdcc((struct Struct_0207fdcc_2 *) var2, 0xa);
            func_0208203c((struct Struct_02081f20_2 *) (arg0 + REGIONAL_OFFSET(0x808, 0x88c)));
            *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3f) = 0;
        }
        return;
    }

    if (var3 == 4) {
        func_ov003_02176468(arg0);
        *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3f) = 5;
        return;
    }

    if (var3 == 5) {
        int var19 = func_ov003_021764f4(arg0);
        if (var19 == -1) goto fail5;
        if (var19 != 1) return;
        *(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x36)         = 0x10;
        *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3f) = 6;
        return;
    fail5:
        *(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x36)          = 0x30;
        *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3f)  = 0;
        *(unsigned short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x46) = (unsigned short) (*(unsigned short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x46) | 0x20);
        return;
    }

    if (var3 == 6) {
        func_ov003_02176468(arg0);
        *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3f) = 7;
        return;
    }

    if (var3 == 7) {
        int var20 = func_ov003_021764f4(arg0);
        if (var20 == -1) goto fail7;
        if (var20 != 1) return;
        func_ov003_02175d78((char *) arg0);
        func_ov003_02175df4(arg0);
        *(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x36)          = 0xe;
        *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3e)  = 7;
        *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3f)  = 1;
        *(unsigned short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x46) = (unsigned short) (*(unsigned short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x46) | 0x20);
        return;
    fail7:
        *(short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x36)          = 0x30;
        *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3e)  = 8;
        *(unsigned char *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x3f)  = 0;
        *(unsigned short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x46) = (unsigned short) (*(unsigned short *) (arg0 + REGIONAL_OFFSET(0xf7c, 0x1000) + 0x46) | 0x20);
        return;
    }
}
