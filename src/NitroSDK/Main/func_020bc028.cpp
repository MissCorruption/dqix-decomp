#include <globaldefs.h>

struct Struct_0210f3e4 {
    char unknown_0_[0x2c];
    unsigned char unknown_2c_;   // +0x2c
    char unknown_2d_[0x17];        // up to 0x44
};
extern Struct_0210f3e4 data_0210f3e4[16];

extern "C" void func_020bc548(Struct_0210f3e4* arg0, int arg1);

// USA: func_020bc028
extern "C" ARM void func_020bc028(int arg0) {
    int var0 = 0;
    Struct_0210f3e4* var1 = data_0210f3e4;
    do {
        if (var1->unknown_2c_ != 0) {
            func_020bc548(var1, arg0);
        }
        var0++;
        var1++;
    } while (var0 < 16);
}
