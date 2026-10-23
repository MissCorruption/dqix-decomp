#include <globaldefs.h>

extern "C" void func_ov031_022033e8(void);

struct Struct_ov031_0220689c { char unknown_0_[0x73]; signed char unknown_73_; };

// USA: func_ov031_0220689c
extern "C" ARM int func_ov031_0220689c(void* arg0) {
    struct Struct_ov031_0220689c* var0 = *(struct Struct_ov031_0220689c**)((char*)arg0 + 4);
    int var1 = 1;
    signed char var2 = var0->unknown_73_;
    if (var2 != 0 && var2 != 4) {
        var1 = 0;
    }
    if (var1) {
        func_ov031_022033e8();
    }
    return 0;
}
