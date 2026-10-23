#include "std_library_functions.h"
#include <globaldefs.h>

#if defined(jpn)
#define func_ov002_0215fcc0 func_ov002_02160d14
#define func_ov002_0215f8b8 func_ov002_02160944
#endif
extern "C" void func_ov002_0215be00(void *arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov002_02160004(void *arg0, void *arg1, int arg2);
extern "C" void func_ov002_0215fcc0(void *arg0, void *arg1, int arg2);
extern "C" void func_ov002_0215f8b8(void *arg0, void *arg1, int arg2);
#if defined(jpn)
#define RG(u, j) (j)
extern "C" void func_0205d304(void *arg0, void *arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#define D304(a, b, p2, p3, p4, p5, p6, p7) func_0205d304(a, b, 0, 1, 0, 1, 0)
#else
#define RG(u, j) (u)
extern "C" void func_0205d304(void *arg0, void *arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#define D304(a, b, p2, p3, p4, p5, p6, p7) func_0205d304(a, b, p2, p3, p4, p5, p6, p7)
#endif

struct Struct_ov002_02155960_2;
struct Struct_ov002_02155960_4 {
    char unknown_0_[0xaa];
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_[0xc2 - 0xb0];
    short unknown_c2_;
};
extern "C" struct Struct_ov002_02155960_4 *func_0205d81c(struct Struct_ov002_02155960_2 *arg0, int arg1);
struct Struct_ov002_0215624c_11;
extern "C" void func_0205de24(struct Struct_ov002_0215624c_11 *arg0, unsigned char arg1,
                                                                        unsigned char arg2);

struct Struct_ov002_0215f6a4 {
    char unknown_0_[RG(0xbd0, 0xa98)];
    char *unknown_bd0_;
};
struct Struct_ov002_0215f6a4_2 {
    char unknown_0_[RG(0xbb8, 0xa80)];
    int unknown_bb8_;
};

static inline void inline_ov002_0215f6a4(struct Struct_ov002_02155960_4 *arg0, short arg1, short arg2) {
    arg0->unknown_ac_ = arg1;
    arg0->unknown_ae_ = arg2;
    arg0->unknown_c2_ = 0;
}

// USA: func_ov002_0215f6a4
extern "C" ARM void func_ov002_0215f6a4(char *arg0) {
    func_0205de24((struct Struct_ov002_0215624c_11 *) (arg0 + RG(0xec8, 0xe20)), 0, 3);
    func_ov002_0215be00(arg0, RG(0x1b, 0x1c), RG(0x11, 0x13), 1);
    memset(((struct Struct_ov002_0215f6a4 *) (arg0 + 0x1000))->unknown_bd0_, 0, RG(0x960, 0x800));
    func_ov002_02160004(arg0, ((struct Struct_ov002_0215f6a4 *) (arg0 + 0x1000))->unknown_bd0_, 0);
    D304(arg0 + RG(0xec8, 0xe20), ((struct Struct_ov002_0215f6a4 *) (arg0 + 0x1000))->unknown_bd0_, 0, 0, 0, 0, 0, 0);

    func_0205de24((struct Struct_ov002_0215624c_11 *) (arg0 + RG(0xec8, 0xe20)), 0, 3);
    func_ov002_0215be00(arg0, RG(0x1a, 0x1b), 1, 1);
    memset(((struct Struct_ov002_0215f6a4 *) (arg0 + 0x1000))->unknown_bd0_, 0, RG(0x960, 0x800));
    func_ov002_0215fcc0(arg0, ((struct Struct_ov002_0215f6a4 *) (arg0 + 0x1000))->unknown_bd0_, 0);
    D304(arg0 + RG(0xec8, 0xe20), ((struct Struct_ov002_0215f6a4 *) (arg0 + 0x1000))->unknown_bd0_, 0, 1, 0, 1, 0, 0);

    func_0205de24((struct Struct_ov002_0215624c_11 *) (arg0 + RG(0xec8, 0xe20)), 0, 2);
    func_ov002_0215be00(arg0, ((struct Struct_ov002_0215f6a4_2 *) (arg0 + 0x1000))->unknown_bb8_ & 0xff, 1, 1);
    memset(((struct Struct_ov002_0215f6a4 *) (arg0 + 0x1000))->unknown_bd0_, 0, RG(0x960, 0x800));
    func_ov002_0215f8b8(arg0, ((struct Struct_ov002_0215f6a4 *) (arg0 + 0x1000))->unknown_bd0_, 0);
    D304(arg0 + RG(0xec8, 0xe20), ((struct Struct_ov002_0215f6a4 *) (arg0 + 0x1000))->unknown_bd0_, 0, 1, 0, 1, 0, 0);

    struct Struct_ov002_02155960_4 *var0 = func_0205d81c(
        (struct Struct_ov002_02155960_2 *) (arg0 + RG(0xec8, 0xe20)), ((struct Struct_ov002_0215f6a4_2 *) (arg0 + 0x1000))->unknown_bb8_ & 0xff);
    if (var0 == NULL) return;
    short var1 = var0->unknown_ac_;
    short var2 = var0->unknown_ae_;
    short var3 = var0->unknown_aa_;
    var0    = func_0205d81c((struct Struct_ov002_02155960_2 *) (arg0 + RG(0xec8, 0xe20)), RG(0x1a, 0x1b));
    if (var0 != NULL) {
        inline_ov002_0215f6a4(var0, var1, var2 + var3);
    }
    var0 = func_0205d81c((struct Struct_ov002_02155960_2 *) (arg0 + RG(0xec8, 0xe20)), RG(0x1b, 0x1c));
    if (var0 != NULL) {
        inline_ov002_0215f6a4(var0, RG(0x11, 0x13), var2 + var3);
    }
}
