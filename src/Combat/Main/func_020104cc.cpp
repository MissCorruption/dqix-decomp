#include <globaldefs.h>

unsigned long long GetCurrentTimestamp(void);
extern "C" unsigned long long _ll_udiv(unsigned long long arg0, unsigned long long arg1);
extern "C" unsigned int _ull_mod(unsigned long long arg0, unsigned long long arg1);

struct Struct_020104cc {
    unsigned char unknown_0_[0x3f0];
    long long unknown_3f0_;   // 0x3f0
};

// USA: func_020104cc
extern "C" ARM void func_020104cc(Struct_020104cc* arg0, unsigned short* arg1, unsigned char* arg2, unsigned char* arg3) {
    unsigned long long var0 = _ll_udiv(GetCurrentTimestamp() << 6, 0x1ff6210)
                                - _ll_udiv(arg0->unknown_3f0_ << 6, 0x1ff6210);
    unsigned long long var1 = _ll_udiv(var0, 3600);
    unsigned int var2 = _ull_mod(_ll_udiv(var0, 60), 60);
    unsigned int var3 = _ull_mod(var0, 60);
    if (var1 > 10000) var1 = 9999;
    *arg1 = (unsigned short)var1;
    *arg2 = var2;
    *arg3 = var3;
}
