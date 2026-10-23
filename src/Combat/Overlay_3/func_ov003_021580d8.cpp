#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
enum { Enum_ov003_021580d8_512 = 0x118 };
#else
enum { Enum_ov003_021580d8_512 = 0x200 };
#endif

extern "C" int func_020d2ff0(const char* arg0);
extern char data_ov003_0217fce0;

struct Struct_ov003_021580d8 {
    int unknown_0_;
    char* unknown_4_;
    int unknown_8_;
    char unknown_c_[0x38];
    char unknown_44_[0x200];
};

struct Struct_ov003_021580d8_2 {
    int unknown_0_;
    char* unknown_4_;
    int unknown_8_;
};

// USA: func_ov003_021580d8
extern "C" ARM void func_ov003_021580d8(struct Struct_ov003_021580d8* arg0, struct Struct_ov003_021580d8_2* arg1) {
    char* var0;
    if (arg1 == 0) {
        return;
    }
    arg0->unknown_0_ = arg1->unknown_0_;
    arg0->unknown_4_ = arg1->unknown_4_;
    arg0->unknown_8_ = arg1->unknown_8_;
    arg0->unknown_4_ = arg0->unknown_44_;
    var0 = arg1->unknown_4_;
    if (var0 == 0) {
        return;
    }
    memset(arg0->unknown_44_, 0, Enum_ov003_021580d8_512);
    sprintf(arg0->unknown_44_ + func_020d2ff0(arg0->unknown_44_), &data_ov003_0217fce0, var0);
}
