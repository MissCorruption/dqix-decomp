#include <globaldefs.h>

struct Struct_020b1938 {
    char* unknown_0_;
    int unknown_4_;
    int unknown_8_;
    unsigned char unknown_c_;
    int unknown_10_;
};

extern "C" void func_020ca458(unsigned int value, void* dest, int count);

// USA: func_020b1938
extern "C" ARM void func_020b1938(struct Struct_020b1938* arg0, unsigned int arg1) {
    int var0 = arg0->unknown_c_;
    if (var0 == 4) {
        arg1 = arg1 | (arg1 << 4);
        arg1 = arg1 | (arg1 << 8);
        arg1 = arg1 | (arg1 << 16);
    } else {
        arg1 = arg1 | (arg1 << 8);
        arg1 = arg1 | (arg1 << 16);
    }
    {
        int var1;
        char* var2 = arg0->unknown_0_;
        int var3 = (var0 << 6) / 8;
        int var4 = var3 * arg0->unknown_10_;
        var3 = var3 * arg0->unknown_4_;
        var1 = 0;
        if (arg0->unknown_8_ <= 0) {
            return;
        }
        do {
            func_020ca458(arg1, var2, var3);
            var2 += var4;
            var1++;
        } while (var1 < arg0->unknown_8_);
    }
}
