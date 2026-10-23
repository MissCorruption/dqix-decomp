#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);

struct Struct_ov004_021537a8 {
    char unknown_0_[0x3c];
    int (*unknown_3c_)(void*, int);
};
struct Struct_ov004_021537a8_2 {
    struct Struct_ov004_021537a8* unknown_0_;
};

// USA: func_ov004_021537a8
extern "C" ARM int func_ov004_021537a8(void* arg0, int arg1, int arg2) {
    struct Struct_ov004_021537a8_2* var0 = (struct Struct_ov004_021537a8_2*)func_ov023_021f6880(func_ov011_021849c8(arg0), arg1);
    if (!var0) return (int)var0;
    return var0->unknown_0_->unknown_3c_(var0, arg2);
}
