#include <globaldefs.h>
#include "Resource/CharacterCreationUI.h"

struct Struct_0205d81c;
struct Struct_0205d0e0 {
    unsigned char unknown_0_[0xac];
    short unknown_ac_, unknown_ae_;
};
struct Struct_0204c654;

struct Struct_ov002_0216c98a {
    short unknown_0_[4];
};

extern "C" struct Struct_0205d0e0 *func_0205d81c(struct Struct_0205d81c *arg0, int arg1);
extern "C" void func_ov002_02154bcc(int arg0, int arg1, void *arg2, int arg3, unsigned char arg4, unsigned char arg5);
extern "C" void func_0204c654(Struct_0204c654 *arg0, int arg1, short arg2, short arg3, short arg4, short arg5);

#if defined(jpn)
enum { Enum_ov002_0215ad70_3784 = 0xe20, Enum_ov002_0215ad70_6760 = 0x19c0, Enum_ov002_0215ad70_7174 = 0x1ace,
       Enum_ov002_0215ad70_28 = 0x1d, Enum_ov002_0215ad70_29 = 0x1e, Enum_ov002_0215ad70_22 = 0x18, Enum_ov002_0215ad70_17 = 0x13, Enum_ov002_0215ad70_20 = 0x16 };
#define data_ov002_0216c98a data_ov002_0216cfe6
#else
enum { Enum_ov002_0215ad70_3784 = 0xec8, Enum_ov002_0215ad70_6760 = 0x1a68, Enum_ov002_0215ad70_7174 = 0x1c06,
       Enum_ov002_0215ad70_28 = 0x1c, Enum_ov002_0215ad70_29 = 0x1d, Enum_ov002_0215ad70_22 = 0x16, Enum_ov002_0215ad70_17 = 0x11, Enum_ov002_0215ad70_20 = 0x14 };
#endif
extern Struct_ov002_0216c98a data_ov002_0216c98a;

namespace {
struct Struct_ov002_0215ad70 {
    unsigned char unknown_0_[Enum_ov002_0215ad70_3784];
    Struct_ov023_021d9c7c unknown_ec8_;
    unsigned char unknown_f84_[Enum_ov002_0215ad70_6760 - Enum_ov002_0215ad70_3784 - sizeof(Struct_ov023_021d9c7c)];
    void* unknown_1a68_;
    unsigned char unknown_1a6c_[Enum_ov002_0215ad70_7174 - Enum_ov002_0215ad70_6760 - 4];
    short unknown_1c06_;
};
}

// USA: func_ov002_0215ad70
// JPN: func_ov002_0215c0d8
extern "C" ARM void func_ov002_0215ad70(unsigned char *arg0) {
    Struct_ov002_0215ad70* var0 = ((Struct_ov002_0215ad70*)(arg0));
    struct Struct_0205d0e0 *var1 =
        func_0205d81c(((Struct_0205d81c*)(&var0->unknown_ec8_)), Enum_ov002_0215ad70_28);
    if (var1 == 0) {
        return;
    }
    int var2             = static_cast<short>(var1->unknown_ac_ * 8);
    int var3             = static_cast<short>(var1->unknown_ae_ * 8);
    Struct_ov002_0216c98a var4 = data_ov002_0216c98a;
    unsigned char var5       = 0;
    unsigned short var6   = Enum_ov002_0215ad70_22;
    for (unsigned char var7 = 0; var7 < 4; var7++) {
        for (unsigned char var8 = 0; var8 < 4; var8++) {
            short var9;
            int var10;
            short var11;
            var11       = var4.unknown_0_[var8];
            short var12 = var4.unknown_0_[var7];
            short var13 = (short) (var11 + var2);
            var10       = (short) (var12 + var3);
            func_ov002_02154bcc(var13, var10, var0->unknown_1a68_, var6++, (unsigned char) (var5 * 4 + 0xc),
                                              0xff);
            var9 = (short) (var8 + var7 * 4);
            if (var0->unknown_1c06_ == var9) {
                func_ov002_02154bcc(var13, var10, var0->unknown_1a68_, Enum_ov002_0215ad70_17, 8, 0xff);
            }
            func_0204c654(((Struct_0204c654*)(var1)), var9, var11, var12, 0x18, 0x18);
            var5++;
        }
    }
    var1 = func_0205d81c(((Struct_0205d81c*)(&var0->unknown_ec8_)), Enum_ov002_0215ad70_29);
    if (var1 == 0) {
        return;
    }
    int var14 = var1->unknown_ac_;
    int var15 = var1->unknown_ae_;
    var14     = (short) (var14 * 8) + 0x10;
    var15     = (short) (var15 * 8) + 0x18;
    func_ov002_02154bcc(var14, var15, var0->unknown_1a68_, Enum_ov002_0215ad70_20, 0x54, 8);
}

#if defined(jpn)
#undef data_ov002_0216c98a
#endif
