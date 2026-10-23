#include <globaldefs.h>

struct Struct_ov000_0215feb4 {
    char unknown_0_[0x20];
    struct Struct_ov000_0215feb4* unknown_20_;
};

// USA: func_ov000_0215feb4
extern "C" ARM struct Struct_ov000_0215feb4* func_ov000_0215feb4(char* arg0, int arg1, int arg2) {
    struct Struct_ov000_0215feb4* var0;
    int var1;
    if (*(unsigned char*)(arg0 + arg2 + 0x26) <= arg1) return 0;
    var0 = *(struct Struct_ov000_0215feb4**)(arg0 + arg2 * 4);
    var1 = 0;
    while (var1 < arg1 && var0 != 0) {
        var0 = var0->unknown_20_;
        var1++;
    }
    return var0;
}
