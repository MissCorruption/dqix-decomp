#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "std_library_functions.h"

struct Struct_02083cbc {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

struct Struct_02083cbc_2 {
    unsigned char unknown_0_[8];
    Struct_02083cbc unknown_8_[3];
};

struct Struct_02083cbc_3 {
    unsigned char unknown_0_[IS_JPN ? 0x884 : 0x91c];
    Struct_02083cbc unknown_91c_[3];
    unsigned char unknown_928_[0xc];
    unsigned char unknown_934_[0x16];
};

// USA: func_02083cbc
extern "C" ARM void func_02083cbc(void* arg0, void* arg1, void* arg2) {
    ((Struct_02083cbc_3*)arg0)->unknown_91c_[0].unknown_0_0_ = ((Struct_02083cbc_2*)arg1)->unknown_8_[0].unknown_0_0_;
    ((Struct_02083cbc_3*)arg0)->unknown_91c_[0].unknown_1_2_ = ((Struct_02083cbc_2*)arg1)->unknown_8_[0].unknown_1_2_;
    ((Struct_02083cbc_3*)arg0)->unknown_91c_[0].unknown_2_4_ = ((Struct_02083cbc_2*)arg1)->unknown_8_[0].unknown_2_4_;
    ((Struct_02083cbc_3*)arg0)->unknown_91c_[1].unknown_0_0_ = ((Struct_02083cbc_2*)arg1)->unknown_8_[1].unknown_0_0_;
    ((Struct_02083cbc_3*)arg0)->unknown_91c_[1].unknown_1_2_ = ((Struct_02083cbc_2*)arg1)->unknown_8_[1].unknown_1_2_;
    ((Struct_02083cbc_3*)arg0)->unknown_91c_[1].unknown_2_4_ = ((Struct_02083cbc_2*)arg1)->unknown_8_[1].unknown_2_4_;
    ((Struct_02083cbc_3*)arg0)->unknown_91c_[2].unknown_0_0_ = ((Struct_02083cbc_2*)arg1)->unknown_8_[2].unknown_0_0_;
    ((Struct_02083cbc_3*)arg0)->unknown_91c_[2].unknown_1_2_ = ((Struct_02083cbc_2*)arg1)->unknown_8_[2].unknown_1_2_;
    ((Struct_02083cbc_3*)arg0)->unknown_91c_[2].unknown_2_4_ = ((Struct_02083cbc_2*)arg1)->unknown_8_[2].unknown_2_4_;
    memset(((Struct_02083cbc_3*)arg0)->unknown_934_, 100, 0x16);
    if (arg2 != NULL) {
        for (int var0 = 0; var0 < 0x16; var0++) {
            ((Struct_02083cbc_3*)arg0)->unknown_934_[var0] = ((unsigned char*)arg2)[var0];
        }
    }
}
