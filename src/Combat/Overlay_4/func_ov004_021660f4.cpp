#include <globaldefs.h>

struct Struct_ov004_021660f4 {
    char unknown_0_[8];
    int unknown_8_;
};

struct Struct_ov004_021660f4_2 {
    struct Struct_ov004_021660f4* unknown_0_[2];
    int unknown_8_;
    char unknown_c_[0x48 - 0xc];
    short unknown_48_[2];
    short unknown_4c_;
};
#if defined(jpn)
struct Struct_ov004_0217101c { unsigned int unknown_0_; struct Struct_ov004_021660f4_2* unknown_4_; };
extern Struct_ov004_0217101c data_ov004_0217101c;
#define CONTEXT_VALUE data_ov004_0217101c.unknown_4_
#else
extern struct Struct_ov004_021660f4_2* data_ov004_0217101c;
#define CONTEXT_VALUE data_ov004_0217101c
#endif

// USA: func_ov004_021660f4
extern "C" ARM void func_ov004_021660f4(void) {
    struct Struct_ov004_021660f4* var0[2];
    short var1[2];
#if defined(jpn)
    short var3 = 0;
#endif
    struct Struct_ov004_021660f4_2* var2 = CONTEXT_VALUE;
    var0[0] = var2->unknown_0_[0];
    var0[1] = var2->unknown_0_[1];
    var1[0] = var2->unknown_48_[0];
    var1[1] = var2->unknown_48_[1];

#if defined(jpn)
    for (; var3 < 2; var3++) {
#else
    short var3;
    for (var3 = 0; var3 < 2; var3++) {
#endif
        struct Struct_ov004_021660f4* var4 = var0[var3];
        short var5 = var1[var3];
        short var6;
        for (var6 = 0; var6 < var5; var6++) {
            var4->unknown_8_ = 0;
            var4 = (struct Struct_ov004_021660f4*)((char*)var4 + 0xc);
        }
    }
    var2->unknown_8_ = 0;
    var2->unknown_4c_ = 0;
}
