#include <globaldefs.h>

extern "C" int func_020d1e88(int, int);

struct Struct_020bc1ac_2 { unsigned char unknown_0_[0x3c]; unsigned char unknown_3c_; };
struct Struct_020bc1ac { struct Struct_020bc1ac_2* unknown_0_; };

static inline bool inline_020bc180(const struct Struct_020bc1ac* arg0) { return arg0->unknown_0_ != NULL; }

// USA: func_020bc1ac
extern "C" ARM void func_020bc1ac(struct Struct_020bc1ac* arg0, int arg1) {
    if (!inline_020bc180(arg0)) return;
    func_020d1e88(arg0->unknown_0_->unknown_3c_, arg1);
}
