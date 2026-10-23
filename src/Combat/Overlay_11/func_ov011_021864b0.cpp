#include <globaldefs.h>

struct Struct_ov011_02184c30 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
typedef unsigned char (*Type_ov011_021864b0)(struct Struct_ov011_02184c30*);
extern "C" void ColorEffect_ConfigureAlphaBlend(unsigned int* out, unsigned char a, unsigned char b, unsigned char c, int d);

// USA: func_ov011_021864b0
extern "C" ARM int func_ov011_021864b0(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(&arg0[0]);
    unsigned char var1 = ((Type_ov011_021864b0)func_ov011_02184c30)(&arg0[1]);
    unsigned char var2 = ((Type_ov011_021864b0)func_ov011_02184c30)(&arg0[2]);
    unsigned char var3 = ((Type_ov011_021864b0)func_ov011_02184c30)(&arg0[3]);
    int var4 = func_ov011_02184c30(&arg0[4]);
    if (var0 == 0) {
        ColorEffect_ConfigureAlphaBlend((unsigned int*)0x4000050, var1, var2, var3, var4);
    } else if (var0 == 1) {
        ColorEffect_ConfigureAlphaBlend((unsigned int*)0x4001050, var1, var2, var3, var4);
    }
    return 1;
}
