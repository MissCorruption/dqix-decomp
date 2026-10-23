#include <globaldefs.h>

extern "C" int func_02032370(int arg0);

struct Struct_02073fdc_2 {
    unsigned short unknown_0_0_ : 12;
    unsigned short unknown_1_4_ : 3;
    unsigned short unknown_1_7_ : 1;
    unsigned short unknown_2_;
};
struct Struct_02073fdc {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned int unknown_4_;
    Struct_02073fdc_2 unknown_8_[];
};
// USA: func_02073fdc
extern "C" ARM int func_02073fdc(void* arg0) {
    Struct_02073fdc* var0 = (Struct_02073fdc*)arg0;
    int var1 = 0;
    for (int var2 = 0; var2 < var0->unknown_2_; ++var2) {
        var1 += var0->unknown_8_[var2].unknown_1_4_;
    }
    int var3 = func_02032370(var1);
    int var4 = -1;
    int var5 = 0;
    for (int var6 = 0; var6 < var0->unknown_2_; ++var6) {
        var5 += var0->unknown_8_[var6].unknown_1_4_;
        if (var3 < var5) {
            var4 = var0->unknown_8_[var6].unknown_0_0_;
            break;
        }
    }
    return var4;
}
