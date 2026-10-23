#include <globaldefs.h>

struct Struct_0207f0ac;
struct Struct_0207f524;
extern "C" void* func_0207f0ac(struct Struct_0207f0ac* arg0, int arg1);
extern "C" void* func_0207f6ac(struct Struct_0207f524* arg0, int arg1);

struct Struct_02080a6c {
    short* unknown_0_;
    char unknown_4_[0xa - 4];
    short unknown_a_;
    short unknown_c_;
    char unknown_e_[0x13 - 0xe];
    unsigned char unknown_13_;
};

struct Struct_02080a6c_2 {
    char unknown_0_[6];
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
};

// USA: func_02080a6c
extern "C" ARM void func_02080a6c(void* arg0, int arg1, short arg2, short* arg3, short* arg4, short* arg5, short* arg6) {
    struct Struct_02080a6c* var0 = (struct Struct_02080a6c*)func_0207f0ac((struct Struct_0207f0ac*)((char*)arg0 + 0xc), arg1);
    if (!var0) {
        return;
    }
    *arg3 = (short)(var0->unknown_a_ << 3);
    *arg4 = (short)(var0->unknown_c_ << 3);
    unsigned char var1;
    for (var1 = 0; var1 < var0->unknown_13_; var1++) {
        if (var0->unknown_0_[var1] == arg2) {
            struct Struct_02080a6c_2* var2 = (struct Struct_02080a6c_2*)func_0207f6ac((struct Struct_0207f524*)((char*)arg0 + 4), arg2);
            if (!var2) {
                return;
            }
            *arg3 = *arg3 + var2->unknown_6_;
            *arg4 = *arg4 + var2->unknown_8_;
            *arg5 = var2->unknown_a_;
            *arg6 = var2->unknown_c_;
            return;
        }
    }
}
