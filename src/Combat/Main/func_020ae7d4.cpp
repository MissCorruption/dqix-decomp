#include <globaldefs.h>

extern "C" bool func_020ae4c8();
extern "C" void* func_02012fe4(void);
extern "C" void func_020ae4ec(int arg0, int arg1);

struct Struct_02017a94;
struct Struct_0201b600 { unsigned short unknown_0_; unsigned short unknown_2_; };
extern "C" struct Struct_0201b600* func_0201b600(Struct_02017a94*, int, unsigned short);

// USA: func_020ae7d4
extern "C" ARM void func_020ae7d4(int arg0) {
    struct Struct_02017a94* var0 = (struct Struct_02017a94*)func_02012fe4();
    if (*(unsigned short*)var0 != 0x1bbd) return;

    struct Struct_0201b600* var1 = func_0201b600(var0, 0, 0xd);
    struct Struct_0201b600* var2 = func_0201b600(var0, 0, 0xf);
    if (var1 == 0 || var2 == 0) return;

    if (!func_020ae4c8()) {
        if (arg0 == 0) {
            var1->unknown_2_ &= ~0x4;
            var2->unknown_2_ |= 0x4;
        } else {
            var1->unknown_2_ |= 0x4;
            var2->unknown_2_ &= ~0x4;
        }
    }
    func_020ae4ec(9, arg0 != 0 ? 1 : 0);
}
