#include <globaldefs.h>

extern "C" int func_020d1ea0(int, int, int);

struct Struct_020bc1cc { char unknown_0_[0x3c]; unsigned char unknown_3c_; };
struct Struct_020bc1cc_2 { struct Struct_020bc1cc* unknown_0_; };

// USA: func_020bc1cc
extern "C" ARM void func_020bc1cc(struct Struct_020bc1cc_2* arg0, int arg1, int arg2) {
    if (*(int*)arg0 != 0) {
        func_020d1ea0(arg0->unknown_0_->unknown_3c_, arg1, arg2);
    }
}
