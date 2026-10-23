#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_020d2ff0(const char* arg0);
extern char data_ov002_0216d2fc[];

struct Struct_ov002_02168ca8 { int unknown_0_; char* unknown_4_; int unknown_8_; };
struct Struct_ov002_02168ca8_2 {
    int unknown_0_;
    char* unknown_4_;
    int unknown_8_;
    char unknown_c_[0x38];
#if defined(jpn)
    char unknown_44_[0x118];
#else
    char unknown_44_[0x200];
#endif
};

// USA: func_ov002_02168ca8
extern "C" ARM void func_ov002_02168ca8(Struct_ov002_02168ca8_2* arg0, Struct_ov002_02168ca8* arg1) {
    if (arg1 == 0) return;
    arg0->unknown_0_ = arg1->unknown_0_;
    arg0->unknown_4_ = arg1->unknown_4_;
    arg0->unknown_8_ = arg1->unknown_8_;
    arg0->unknown_4_ = arg0->unknown_44_;
    const char* var0 = arg1->unknown_4_;
    if (var0 == 0) return;
    memset(arg0->unknown_44_, 0, sizeof(arg0->unknown_44_));
    sprintf(arg0->unknown_44_ + func_020d2ff0((const char*)arg0->unknown_44_), data_ov002_0216d2fc, var0);
}
