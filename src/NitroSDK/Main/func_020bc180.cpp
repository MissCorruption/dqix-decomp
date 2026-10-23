#include <globaldefs.h>

struct Struct_020bc180_2;
extern "C" void func_020c0204(struct Struct_020bc180_2*, int, int);

struct Struct_020bc180 { unsigned char unknown_0_[0x2c]; unsigned char unknown_2c_; };
struct Struct_0209c2e0_2 { struct Struct_020bc180* unknown_0_; };

static inline bool inline_020bc180(const struct Struct_0209c2e0_2* arg0) { return arg0->unknown_0_ != NULL; }

// USA: func_020bc180
extern "C" ARM void func_020bc180(struct Struct_0209c2e0_2* arg0, int arg1, int arg2) {
    if (!inline_020bc180(arg0)) return;
    if (arg0->unknown_0_->unknown_2c_ == 2) return;
    func_020c0204((struct Struct_020bc180_2*)((char*)arg0->unknown_0_ + 0x1c), arg1 << 8, arg2);
}
