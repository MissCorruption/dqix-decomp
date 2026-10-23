#include <globaldefs.h>

#if defined(jpn)
#define func_0206b224 func_0206cba0
enum { Enum_0206b224_76 = 0x18, Enum_0206b224_640 = 0x140 };
#else
enum { Enum_0206b224_76 = 0x4c, Enum_0206b224_640 = 0x280 };
#endif

#include "std_library_functions.h"

extern "C" void func_0206b104(void* arg0);
extern "C" void func_0206aa28(void* arg0);
extern "C" void func_0206b974(void* arg0, int arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6, int arg7);
extern "C" int func_020d2ff0(const char* arg0);

struct Struct_0206b224 {
    char unknown_0_[Enum_0206b224_76];
    void* unknown_4c_;
    void* unknown_50_;
    void* unknown_54_;
    unsigned char* unknown_58_;
    char unknown_5c_[4];
    void* unknown_60_;
};

// USA: func_0206b224
extern "C" ARM void func_0206b224(struct Struct_0206b224* arg0) {
    func_0206b104(arg0);
    memset(arg0->unknown_4c_, 0, Enum_0206b224_640);
    memset(arg0->unknown_50_, 0, Enum_0206b224_640);

#if defined(jpn)
    int var0 = 2;
    unsigned char* var1 = arg0->unknown_58_;
#else
    int var0 = 1;
    unsigned char* var1 = arg0->unknown_58_;
    if (var1[1] == 0xff) {
        var0 = 2;
    }
#endif
    arg0->unknown_54_ = var1 + var0;
    arg0->unknown_58_ = var1 + var0;

    func_0206aa28(arg0);
#if !defined(jpn)
    func_0206b974(arg0, 1, arg0->unknown_50_, arg0->unknown_60_, 0xe3, 0, 1, 1);
    int var2 = func_020d2ff0((const char*)arg0->unknown_60_);
    memcpy(arg0->unknown_50_, arg0->unknown_60_, var2);
#endif
}
