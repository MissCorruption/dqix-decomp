#include <globaldefs.h>

#if defined(jpn)
#define func_02026b3c func_020264a0
#endif
#include "std_library_functions.h"

struct Struct_02026b3c {
    short unknown_0_;
    char unknown_2_[0x18];
};

struct Struct_0201f8d0_3 {
    #if defined(jpn)
    char unknown_0_[0x6ce];
#else
    char unknown1_0_[0x77a];
#endif
    unsigned char unknown_77a_;
    char unknown_77b_[1];
    Struct_02026b3c* unknown_77c_;
};

#if defined(jpn)
extern "C" ARM void func_020264a0(Struct_0201f8d0_3* arg0, unsigned int arg1, short arg2, const char* arg3);
#endif

// USA: func_02026b3c
extern "C" ARM void func_02026b3c(Struct_0201f8d0_3* arg0, unsigned int arg1, short arg2, const char* arg3) {
    if (arg1 >= arg0->unknown_77a_) return;
    if (arg0->unknown_77c_ == NULL) return;
    arg0->unknown_77c_[arg1].unknown_0_ = arg2;
    strcpy(arg0->unknown_77c_[arg1].unknown_2_, arg3);
}
