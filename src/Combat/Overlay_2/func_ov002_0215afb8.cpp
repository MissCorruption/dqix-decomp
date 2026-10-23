#include <globaldefs.h>
#include "Resource/CharacterCreationUI.h"

struct Struct_020e28dc;
extern "C" int func_020e28dc(struct Struct_020e28dc *arg0);

struct Struct_0205d81c;
struct Struct_0205d0e0 {
    unsigned char unknown_0_[0xac];
    short unknown_ac_;
    short unknown_ae_;
    unsigned char unknown_b0_[0xc];
    short unknown_bc_;
    short unknown_be_;
};
extern "C" struct Struct_0205d0e0 *func_0205d8c4(struct Struct_0205d81c *arg0);
extern "C" int func_0204c7e0(unsigned char *arg0);

struct Struct_0205a254;
struct Struct_0205a254_2 {
    unsigned char unknown_0_[0x15];
    unsigned char unknown_15_;
};
extern "C" struct Struct_0205a254_2 *func_0205a3d0(struct Struct_0205a254 *arg0, int arg1);
extern "C" void func_0205a370(struct Struct_0205a254 *arg0, int arg1);
extern "C" void func_020e27ec(struct Struct_0205a254 *arg0, int arg1, short arg2, short arg3);

struct Struct_0205a330;
extern "C" void func_0205a330(struct Struct_0205a330 *arg0, int arg1);

extern "C" void func_0205ae8c(void *arg0);

#if defined(jpn)
enum { Enum_ov002_0215afb8_9340 = 0x22ac, Enum_ov002_0215afb8_3784 = 0xe20, Enum_ov002_0215afb8_6764 = 0x19c4,
       Enum_ov002_0215afb8_7072 = 0x1a68, Enum_ov002_0215afb8_6760 = 0x19c0 };
#else
enum { Enum_ov002_0215afb8_9340 = 0x247c, Enum_ov002_0215afb8_3784 = 0xec8, Enum_ov002_0215afb8_6764 = 0x1a6c,
       Enum_ov002_0215afb8_7072 = 0x1ba0, Enum_ov002_0215afb8_6760 = 0x1a68 };
#endif

namespace {
struct Struct_ov002_0215afb8 {
    unsigned char unknown_0_[4];
    Struct_020e28dc* unknown_4_;
    unsigned char unknown_8_[Enum_ov002_0215afb8_3784 - 8];
    Struct_ov023_021d9c7c unknown_ec8_;
    unsigned char unknown_f84_[Enum_ov002_0215afb8_6760 - Enum_ov002_0215afb8_3784 - sizeof(Struct_ov023_021d9c7c)];
    void* unknown_1a68_;
    Struct_0205a254* unknown_1a6c_;
    unsigned char unknown_1a70_[Enum_ov002_0215afb8_7072 - Enum_ov002_0215afb8_6764 - 4];
    int unknown_1ba0_;
    unsigned char unknown_1ba4_[Enum_ov002_0215afb8_9340 - Enum_ov002_0215afb8_7072 - 4];
    int unknown_247c_;
};
}

// JPN: func_ov002_0215c318
// USA: func_ov002_0215afb8
extern "C" ARM void func_ov002_0215afb8(char *arg0) {
    Struct_ov002_0215afb8* var0 = ((Struct_ov002_0215afb8*)(arg0));
    struct Struct_0205a254_2 *var1;

    if (!(var0->unknown_247c_ & 4)) return;

    struct Struct_0205d0e0 *var2 = func_0205d8c4(((Struct_0205d81c*)(&var0->unknown_ec8_)));
    if (var2 == NULL) return;
    if (!func_0204c7e0(((unsigned char*)(var2)))) return;
    struct Struct_020e28dc *var3 = var0->unknown_4_;
    if (var3 == NULL) return;
    if (func_020e28dc(var3)) return;

    short var4 = (short) (var2->unknown_ac_ * 8);
    short var5 = (short) (var2->unknown_ae_ * 8);
    var4 += var2->unknown_bc_;
    var5 += var2->unknown_be_;
    struct Struct_0205a254 *var6 = var0->unknown_1a6c_;
    func_0205a370(var6, 0);
    var1 = func_0205a3d0(var6, 0);
    if (var1 != NULL) {
        var1->unknown_15_ |= 8;
    }
    func_0205a330(((Struct_0205a330*)(var6)), var0->unknown_1ba0_);
    func_020e27ec(var6, 0, var4 - 8, var5 - 2);
    func_0205ae8c(var0->unknown_1a68_);
}
