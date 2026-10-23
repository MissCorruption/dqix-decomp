#include <globaldefs.h>

struct Struct_ov003_0215e8f4_2 {
    char unknown_0_[8];
    unsigned char* unknown_8_;
    char unknown_c_[2];
    short unknown_e_;
};

struct Struct_ov003_0215e8f4 {
    char unknown_0_[4];
    struct Struct_ov003_0215e8f4_2* unknown_4_;
    char unknown_8_[0x1e - 8];
    unsigned char unknown_1e_;
};

// USA: func_ov003_0215e8f4
extern "C" ARM void* func_ov003_0215e8f4(struct Struct_ov003_0215e8f4* arg0) {
    struct Struct_ov003_0215e8f4_2* var0 = arg0->unknown_4_;
    unsigned char var1 = arg0->unknown_1e_;
    unsigned char* var2 = var0->unknown_8_;
    int var3 = var0->unknown_e_;
    int var4;
    for (var4 = 0; var4 < var3; var4++, var2 += 8) {
        if (*var2 & var1) {
            return var2;
        }
    }
    return NULL;
}
