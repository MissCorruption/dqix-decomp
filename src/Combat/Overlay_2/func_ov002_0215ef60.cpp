#include "std_library_functions.h"
#include <globaldefs.h>

extern "C" void func_ov002_0215be00(void *arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov002_0215f084(void *arg0, void *arg1, int arg2);
#if defined(jpn)
extern "C" void func_0205d304(void *arg0, void *arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void *arg0, void *arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

struct Struct_ov002_02155960_2;
struct Struct_ov002_02155960_4 {
    char unknown_0_[0xa8];
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
};
extern "C" struct Struct_ov002_02155960_4 *func_0205d81c(struct Struct_ov002_02155960_2 *arg0, int arg1);
struct Struct_ov002_0215624c_11;
extern "C" void func_0205de24(struct Struct_ov002_0215624c_11 *arg0, unsigned char arg1,
                                                                        unsigned char arg2);
struct Struct_ov002_0215bba8_3;
extern "C" void func_0205d5d0(struct Struct_ov002_0215bba8_3 *arg0, int arg1, int arg2, int arg3,
                                                                     unsigned char arg4);

struct Struct_ov002_0215ef60 {
    char unknown_0_[0xbd0];
    void *unknown_bd0_;
};

static inline void inline_ov002_0215ef60(struct Struct_ov002_02155960_4 *arg0, short arg1, short arg2) {
    arg0->unknown_ac_ = arg1;
    arg0->unknown_ae_ = arg2;
}

// USA: func_ov002_0215ef60
extern "C" ARM void func_ov002_0215ef60(char *arg0) {
#if defined(jpn)
    func_0205de24((struct Struct_ov002_0215624c_11 *) (arg0 + 0xe20), 0, 2);
    func_ov002_0215be00(arg0, 0x14, 0x15, 8);

    memset(*(void **) (arg0 + 0x1000 + 0xa98), 0, 0x800);
    func_ov002_0215f084(arg0, *(void **) (arg0 + 0x1000 + 0xa98), 0);

    func_0205d304(arg0 + 0xe20, *(void **) (arg0 + 0x1000 + 0xa98), 0, 0, 0, 1, 0);
#else
    short var0 = 0x17;
    short var1 = 9;
    short var2 = 0;
    struct Struct_ov002_02155960_4 *var3 =
        func_0205d81c((struct Struct_ov002_02155960_2 *) (arg0 + 0xec8), 0x10);
    if (var3 != NULL) {
        var0 = var3->unknown_ac_;
        var2 = var3->unknown_a8_;
        var1 = var3->unknown_ae_ + var3->unknown_aa_;
    }
    func_0205de24((struct Struct_ov002_0215624c_11 *) (arg0 + 0xec8), 0, 2);
    func_ov002_0215be00(arg0, 0x13, var0, var1);

    memset(((struct Struct_ov002_0215ef60 *) (arg0 + 0x1000))->unknown_bd0_, 0, 0x960);
    func_ov002_0215f084(arg0, ((struct Struct_ov002_0215ef60 *) (arg0 + 0x1000))->unknown_bd0_, 0);

    func_0205d304(arg0 + 0xec8, ((struct Struct_ov002_0215ef60 *) (arg0 + 0x1000))->unknown_bd0_, 0, 0, 0, 1, 0, 0);

    var3 = func_0205d81c((struct Struct_ov002_02155960_2 *) (arg0 + 0xec8), 0x13);
    if (var3 == NULL) return;
    inline_ov002_0215ef60(var3, var0 + var2 - var3->unknown_a8_, var3->unknown_ae_);
    func_0205d5d0((struct Struct_ov002_0215bba8_3 *) (arg0 + 0xec8), 0x13,
                                                         (int) ((struct Struct_ov002_0215ef60 *) (arg0 + 0x1000))->unknown_bd0_, 1, 0);
#endif
}
