#include <globaldefs.h>

struct Struct_020afec4 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
};
struct Struct_0205ab78 {
    unsigned char unknown_0_[0xc];
    unsigned short unknown_c_;
    unsigned short unknown_e_;
};

// USA: func_020b0288
extern "C" ARM struct Struct_020afec4 *func_020b0288(struct Struct_0205ab78 *arg0, unsigned int arg1) {
    unsigned char *var0 = (unsigned char *)arg0 + arg0->unknown_c_;
    unsigned short var1 = arg0->unknown_e_;
    unsigned short var2 = 0;
    if (var1 > var2) {
        do {
            struct Struct_020afec4 *var3 = (struct Struct_020afec4 *)var0;
            if (var3->unknown_0_ == arg1) {
                return var3;
            }
            var0 += var3->unknown_4_;
            var2++;
        } while (var1 > var2);
    }
    return NULL;
}
