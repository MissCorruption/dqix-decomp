#include <globaldefs.h>

struct Struct_ov031_0220528c;
struct Struct_ov031_022067f0_2 {
    char unknown_0_[0x10c];
    Struct_ov031_0220528c* unknown_10c_;
};
struct Struct_ov031_022067f0 {
    char unknown_0_[0x68];
    Struct_ov031_022067f0_2* unknown_68_;
    char unknown_6c_[4];
    volatile short unknown_70_;
    signed char unknown_72_;
};
extern "C" int func_ov031_02207180(void*);
extern "C" void* func_ov031_02205134(void*, void*, int);
extern "C" int func_ov031_0220528c(Struct_ov031_0220528c*, void*);
extern "C" int func_ov031_0220689c(void*);

// USA: func_ov031_022067f0
extern "C" ARM int func_ov031_022067f0(void* arg0) {
    Struct_ov031_022067f0* var0 = (Struct_ov031_022067f0*)arg0;
    if (func_ov031_02207180(arg0)) return -28;
    int var1 = 0;
    if (var0 != NULL) var1 = (var0->unknown_70_ & 1) != 0;
    if (!var1) return -39;
    if (!(var0->unknown_70_ & 4) || (var0->unknown_70_ & 8)) return -56;
    var0->unknown_70_ |= 8;
    Struct_ov031_022067f0_2* var2 = var0->unknown_68_;
    if (var2 != NULL && var2->unknown_10c_ != NULL) {
        void* var3 = func_ov031_02205134((void*)func_ov031_0220689c,
            var2->unknown_10c_, var0->unknown_72_);
        if (var3 == NULL) return -33;
        return func_ov031_0220528c(var2->unknown_10c_, var3);
    }
    return 0;
}
