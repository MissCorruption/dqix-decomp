#include <globaldefs.h>

extern "C" int func_ov031_0220d60c(void);
extern "C" int func_ov031_0220f368(unsigned char *arg0, unsigned char *arg1);

struct Struct_ov031_0220ede4 {
    unsigned char unknown_0_[0xc];
    Struct_ov031_0220ede4 *unknown_c_;
    unsigned char unknown_10_[4];
};

struct Struct_ov031_0220ede4_2 {
    unsigned char unknown_0_[4];
    Struct_ov031_0220ede4 *unknown_4_;
};

// USA: func_ov031_0220ede4
extern "C" ARM Struct_ov031_0220ede4 *func_ov031_0220ede4(unsigned char *arg0) {
    char *var0 = (char *)func_ov031_0220d60c() + 0x2000;
    Struct_ov031_0220ede4 *var1 = NULL;
    Struct_ov031_0220ede4_2 *var2 = *(Struct_ov031_0220ede4_2 **)(var0 + 0x270);
    if (arg0 == NULL) return var1;
    if (var2 != NULL) {
        unsigned int var3 = *(unsigned int *)(var0 + 0x274);
        if (var3 > 0xc) {
            var1 = var2->unknown_4_;
            if (var1 != NULL) {
                do {
                    if (func_ov031_0220f368((unsigned char *)var1 + 0x14, arg0) != 0) break;
                    var1 = var1->unknown_c_;
                } while (var1 != NULL);
            }
        }
    }
    return var1;
}
