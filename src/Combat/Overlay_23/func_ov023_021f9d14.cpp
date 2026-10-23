#include <globaldefs.h>

struct Struct_ov023_021f9d14 {
    char unknown_0_[0x20];
    unsigned short* unknown_20_;
    unsigned short unknown_24_;
    unsigned short unknown_26_;
    unsigned short unknown_28_;
    unsigned short unknown_2a_;
};

struct Struct_ov004_021549e4_5;
extern "C" void func_ov023_021f9bdc(struct Struct_ov004_021549e4_5* arg0, int arg1);
extern "C" int func_ov023_021f98e0(void* arg0, void* arg1);

// USA: func_ov023_021f9d14
extern "C" ARM int func_ov023_021f9d14(struct Struct_ov023_021f9d14* arg0, void* arg1) {
    int var0 = arg0->unknown_2a_;
    int var1 = arg0->unknown_28_;
    int var2 = arg0->unknown_26_;
    int var3 = var1 * var2 + var0;
    while (arg0->unknown_20_[var3] == 0) {
        if (var0 == 0) {
            if (var1 == 0) break;
            var0 = var2 - 1;
            var1--;
        } else if (var0 > 0) {
            var0--;
        }
        var3 = var1 * var2 + var0;
    }
    var3 = var1 * var2 + var0;
    if (arg0->unknown_20_[var3] == 0) var3 = 0;
    func_ov023_021f9bdc((struct Struct_ov004_021549e4_5*)arg0, (unsigned short)var3);
    return func_ov023_021f98e0(arg0, arg1);
}
