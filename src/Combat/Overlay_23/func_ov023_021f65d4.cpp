#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);

struct Struct_ov023_021f65d4 {
    char unknown_0_[0xc];
    unsigned char unknown_c_;
};

// USA: func_ov023_021f65d4
extern "C" ARM void func_ov023_021f65d4(void* arg0, int arg1, int arg2) {
    void* var0 = func_ov011_021849c8(arg0);
    Struct_ov023_021f65d4* var1 = (Struct_ov023_021f65d4*)func_ov023_021f6880(var0, arg1);
    if (var1 != 0) {
        var1->unknown_c_ |= arg2;
    }
}
