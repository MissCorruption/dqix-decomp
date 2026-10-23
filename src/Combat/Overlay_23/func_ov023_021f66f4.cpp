#include <globaldefs.h>

struct Struct_ov023_021f66f4_2 {
    char unknown_0_[0xf4];
    void (*unknown_f4_)(void*, void*);
};
struct Struct_ov023_021f66f4 {
    struct Struct_ov023_021f66f4_2* unknown_0_;
};

extern "C" void* func_ov011_021849c8(void*);
extern "C" struct Struct_ov023_021f66f4* func_ov023_021f6880(void*, int);

// USA: func_ov023_021f66f4
extern "C" ARM void func_ov023_021f66f4(void* arg0, int arg1, void* arg2) {
    void* var0 = func_ov011_021849c8(arg0);
    struct Struct_ov023_021f66f4* var1 = func_ov023_021f6880(var0, arg1);
    if (var1) var1->unknown_0_->unknown_f4_(var1, arg2);
}
