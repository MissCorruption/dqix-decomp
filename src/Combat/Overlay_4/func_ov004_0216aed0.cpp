#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" unsigned short func_ov023_021f6f10(void*);

struct Struct_ov004_0216aed0 {
    char unknown_0_[0x38];
    short unknown_38_;
    char unknown_3a_[8];
    short unknown_42_;
    char unknown_44_[1];
    unsigned char unknown_45_;
};

// USA: func_ov004_0216aed0
extern "C" ARM int func_ov004_0216aed0(void* arg0, int arg1, int arg2, int arg3) {
    Struct_ov004_0216aed0* var0 = (Struct_ov004_0216aed0*)func_ov023_021f6880(func_ov011_021849c8(arg0), arg1);
    if (!var0) return (int)var0;
    int var1 = func_ov023_021f6f10(var0);
    if (var1 == 8 && (var0->unknown_38_ = (short)arg2, arg3 == 1)) {
    } else {
        return var1;
    }
    var0->unknown_45_ = (var0->unknown_45_ & ~0x7e) | 4;
    var0->unknown_42_ = 0;
    return 0;
}
