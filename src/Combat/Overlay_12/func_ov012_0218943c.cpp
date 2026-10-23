#include <globaldefs.h>

#if defined(jpn)
#define func_ov012_0218943c func_ov012_02189d18
#endif
#include "std_library_functions.h"

extern "C" void func_ov012_021893b4(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov012_021894b4(void* arg0, void* arg1, int arg2);
#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

struct Struct_ov012_0218943c {
#if defined(jpn)
    char unknown_0_[0x344];
#else
    char unknown1_0_[0x374];
#endif
    void* unknown_374_;
};

// USA: func_ov012_0218943c
extern "C" ARM void func_ov012_0218943c(char* arg0) {
#if defined(jpn)
    unsigned char var0 = *(unsigned char*)(arg0 + 0x1000 + 0x341);
#else
    unsigned char var0 = *(unsigned char*)(arg0 + 0x1000 + 0x371);
#endif
    func_ov012_021893b4(arg0, var0, 2, 1);

#if defined(jpn)
    memset(((struct Struct_ov012_0218943c*)(arg0 + 0x1000))->unknown_374_, 0, 0x800);
#else
    memset(((struct Struct_ov012_0218943c*)(arg0 + 0x1000))->unknown_374_, 0, 0x960);
#endif

    func_ov012_021894b4(arg0, ((struct Struct_ov012_0218943c*)(arg0 + 0x1000))->unknown_374_, 0);

#if defined(jpn)
    func_0205d304(arg0 + 0x90, ((struct Struct_ov012_0218943c*)(arg0 + 0x1000))->unknown_374_, 0, 1, 0, 0, 0);
#else
    func_0205d304(arg0 + 0xac, ((struct Struct_ov012_0218943c*)(arg0 + 0x1000))->unknown_374_, 0, 1, 0, 0, 0, 0);
#endif
}
