#include <globaldefs.h>

struct Struct_ov000_02171738_2 {
    char unknown_0_[1];
    unsigned char unknown_1_;
    char unknown_2_[6];
    struct Struct_ov000_02171738_2* unknown_8_;
};
struct Struct_ov000_02171738 {
    struct Struct_ov000_02171738_2* unknown_0_;
};

// USA: func_ov025_021e23e8
#if defined(jpn)
extern "C" ARM struct Struct_ov000_02171738_2* func_ov000_02171738(struct Struct_ov000_02171738* arg0)
#else
extern "C" ARM struct Struct_ov000_02171738_2* func_ov025_021e23e8(struct Struct_ov000_02171738* arg0)
#endif
{
    struct Struct_ov000_02171738_2* var0 = arg0->unknown_0_;
    struct Struct_ov000_02171738_2* var1 = NULL;
    unsigned int var2 = 0xff;
    struct Struct_ov000_02171738_2* var3 = NULL;
    struct Struct_ov000_02171738_2* var4 = NULL;
    while (var0 != NULL) {
        unsigned char var5 = var0->unknown_1_;
        if (var5 < var2) {
            var4 = var1;
            var3 = var0;
            var2 = var5;
        }
        var1 = var0;
        var0 = var0->unknown_8_;
    }
    if (var3 != NULL) {
        if (var4 != NULL) {
            var4->unknown_8_ = var3->unknown_8_;
        } else {
            arg0->unknown_0_ = var3->unknown_8_;
        }
    }
    return var3;
}
