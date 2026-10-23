#include <globaldefs.h>

extern "C" bool func_020ae4c8();
extern "C" void* func_02012fe4(void);

struct Struct_02017a94;
struct Struct_0201b600 { unsigned short unknown_0_; unsigned short unknown_2_; };
extern "C" struct Struct_0201b600* func_0201b600(Struct_02017a94*, int, unsigned short);

// USA: func_020ae694
extern "C" ARM void func_020ae694(int arg0, int arg1, unsigned short arg2) {
    struct Struct_0201b600* var0;
    if (arg2 == 0) return;
    if (func_020ae4c8()) return;
    var0 = func_0201b600((struct Struct_02017a94*)func_02012fe4(), arg1, arg2);
    if (var0 == 0) return;
    if (arg0 == 0) {
        var0->unknown_2_ |= 0x4;
    } else {
        var0->unknown_2_ &= ~0x4;
    }
}
