#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

#if defined(jpn)
extern "C" int func_020d2ff0(const char*);
extern "C" int func_02001aec(const void*, const void*, unsigned int);
extern "C" void* memset(void*, int, unsigned int);
extern "C" int sprintf(char*, const char*, ...);
#endif

// USA: func_02094b2c
extern "C" ARM void func_02094b2c(Struct_0208cb08* arg0, int arg1, const char* arg2, unsigned char arg3,
                               unsigned char arg4) {
#if defined(jpn)
    if (arg0->unknown_34_ >= 0) return;
    if (!arg2) return;
    int var0 = func_020d2ff0(arg2);
    if (!var0) return;
    if (var0 >= 16) return;
    if (arg0->unknown_40_ == 1000) {
        int var1 = func_020d2ff0(arg0->unknown_44_);
        if (var1 == var0 && func_02001aec(arg0->unknown_44_, arg2, var1) == 0) return;
    }
    memset(arg0->unknown_44_, 0, sizeof(arg0->unknown_44_));
    sprintf(arg0->unknown_44_, arg2);
    arg0->unknown_58_ = 0;
    func_02094ab0(arg0);
    arg0->unknown_34_ = arg1;
    arg0->unknown_38_ = 1000;
    arg0->unknown_56_ = 0;
    arg0->unknown_57_ = 0;
    arg0->unknown_61_ = arg3;
    arg0->unknown_62_ = arg4;
#endif
}
