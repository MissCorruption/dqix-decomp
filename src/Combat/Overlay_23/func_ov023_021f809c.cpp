#include <globaldefs.h>

extern "C" int func_0204c7e0(unsigned char* arg0);
extern "C" void func_ov023_021f7eb8(void* arg0, void* arg1, int arg2, int arg3,
    int arg4, int arg5, int arg6, unsigned char arg7, int arg8, int arg9);

struct Struct_ov004_0215fdfc {
    char unknown_0_[0xc8];
    short unknown_c8_;
    short unknown_ca_;
    short unknown_cc_;
    short unknown_ce_;
    char unknown_d0_[0x12];
    unsigned short unknown_e2_;
    char unknown_e4_;
    unsigned char unknown_e5_;
};

// USA: func_ov023_021f809c
extern "C" ARM void func_ov023_021f809c(struct Struct_ov004_0215fdfc* arg0, void* arg1) {
    if (func_0204c7e0((unsigned char*)arg0 + 0x20)) {
        unsigned char var0 = arg0->unknown_e5_;
        unsigned short var1 = arg0->unknown_e2_;
        int var2 = (var0 & 4) ? 1 : 0;
        int var3 = (var0 & 0x10) ? 1 : 0;
        short var4 = arg0->unknown_ce_;
        unsigned char var5 = (unsigned char)var1;
        short var6 = arg0->unknown_c8_;
        short var7 = arg0->unknown_ca_;
        short var8 = arg0->unknown_cc_;
        func_ov023_021f7eb8(arg0, arg1, 0, var8, var4, var6, var7, var5, var2, var3);
    }
}
