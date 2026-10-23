#include <globaldefs.h>

struct Struct_0208fa8c { unsigned short unknown_0_; unsigned short unknown_2_; };
struct Struct_02017a94;
struct Struct_02097ec8_2 {
    char unknown_0_[0x1b3c];
    int unknown_1b3c_;
};

extern "C" Struct_0208fa8c* func_02012fe4();
extern "C" int _s32_div_f(int a, int b);
extern "C" int func_020981e4(int arg0, int arg1);
extern "C" int func_02098240(int arg0, int arg1);
extern "C" int func_0201bd74(Struct_02017a94* arg0, unsigned int arg1, int arg2);

// USA: func_02098080
extern "C" ARM int func_02098080(Struct_02097ec8_2* arg0) {
    Struct_0208fa8c* var0 = func_02012fe4();
    int var1 = var0->unknown_0_;
    int var2, var3;
    var3 = arg0->unknown_1b3c_;
    var2 = _s32_div_f(var0->unknown_0_, 100) - 500;

    if (!func_020981e4((int)arg0, var1)) return 0;
    if (func_02098240((int)arg0, var1)) return 0;
    if (var1 == 0xc3bb) return 0;
    if ((unsigned int)(var1 - 0xc3bc) <= 2) return 0;

    switch (var3) {
    case 0:
        break;
    case 1:
        if (var2 == 1) break;
        return 1;
    case 2:
        if (var2 != 1) return 1;
        if (var1 != 0xc3b5) break;
        if (func_0201bd74((Struct_02017a94*)var0, 9, 0) == 0) break;
        return 1;
    case 3:
        if (var2 == 2) break;
        return 1;
    case 4:
        if (var2 != 2) return 1;
        if (var1 != 0xc41b) break;
        if (func_0201bd74((Struct_02017a94*)var0, 20, 0) == 0) break;
        return 1;
    case 5:
        if (var2 == 3) break;
        return 1;
    case 6:
        if (var2 != 4) return 1;
        break;
    }
    return 0;
}
