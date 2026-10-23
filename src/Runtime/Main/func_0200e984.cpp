#include <globaldefs.h>

struct Struct_0200e984_2 {
    unsigned int unknown_0_;
    unsigned char* unknown_4_;
};

struct Struct_0200e984 {
    unsigned int unknown_0_;
    char unknown_4_[0xc - 0x4];
    unsigned char* unknown_c_;
};

extern "C" ARM int func_0200eff0(void* arg0, unsigned char* arg1, Struct_0200e984_2* arg2);

// USA: func_0200e984
extern "C" ARM int func_0200e984(void* arg0, Struct_0200e984* arg1) {
    unsigned char* var0 = arg1->unknown_c_;
    unsigned int var1 = 0;
    if (var1 < arg1->unknown_0_) {
        do {
            unsigned char* var2 = (unsigned char*)(var0[0] | (var0[1] << 8) | (var0[2] << 16) | (var0[3] << 24));
            Struct_0200e984_2 var3;
            var3.unknown_4_ = var2;
            int var4 = func_0200eff0(arg0, var2, &var3);
            if (var4 != 0) return 1;
            var1++;
            var0 += 4;
        } while (var1 < arg1->unknown_0_);
    }
    return 0;
}
