#include <globaldefs.h>

extern "C" int func_020d424c(int arg0, int arg1, int arg2);
extern "C" int func_020d40bc(int arg0, int arg1, const void* arg2, unsigned int arg3,
                             unsigned short arg4, unsigned short arg5, unsigned short arg6,
                             int arg7, int arg8);
extern "C" void* func_020d41d8(void);
extern "C" void InvalidateDataCacheRange(const void* addr, unsigned int size);
void CleanCacheRange(const void* addr, unsigned int size);

struct Struct_020d59bc {
    char unknown_0_[0x7c];
    const void* unknown_7c_;
    char unknown_80_[6];
    unsigned short unknown_86_;
    char unknown_88_[0xfa];
    unsigned short unknown_182_;
    char unknown_184_[4];
    unsigned short unknown_188_;
};

struct Struct_020d59bc_2 {
    char unknown_0_[4];
    struct Struct_020d59bc* unknown_4_;
};

// USA: func_020d59bc
extern "C" ARM int func_020d59bc(int arg0, int arg1, const void* arg2, unsigned int arg3,
                                 unsigned short arg4, unsigned short arg5, unsigned short arg6) {
    int var0 = 1;
    struct Struct_020d59bc* var1 = ((struct Struct_020d59bc_2*)func_020d41d8())->unknown_4_;
    int var2 = func_020d424c(2, 9, 0xa);
    if (var2 != 0) {
        return var2;
    }
    InvalidateDataCacheRange(&var1->unknown_188_, 2);
    if (var1->unknown_188_ == 0) {
        InvalidateDataCacheRange(&var1->unknown_182_, 2);
        var0 = var1->unknown_182_;
        InvalidateDataCacheRange(&var1->unknown_86_, 2);
    }
    if (arg2 == 0) {
        return 6;
    }
    if (var0 == 0) {
        return 7;
    }
    InvalidateDataCacheRange(&var1->unknown_7c_, 2);
    if (arg2 == var1->unknown_7c_) {
        return 6;
    }
    if (arg3 > 0x200) {
        return 6;
    }
    if (arg3 == 0) {
        return 6;
    }
    CleanCacheRange(arg2, arg3);
    var2 = func_020d40bc(0xf, 7, arg2, arg3, arg4, arg5, arg6, arg0, arg1);
    if (var2 == 0) {
        var2 = 2;
    }
    return var2;
}
