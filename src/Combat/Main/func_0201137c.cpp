#include <globaldefs.h>

struct Struct_0201137c { int unknown_0_; unsigned int unknown_4_; };
extern "C" struct Struct_0201137c* func_0209a594(void* arg0, int arg1);

// USA: func_0201137c
extern "C" ARM int func_0201137c(char* arg0, int arg1) {
    struct Struct_0201137c* var0;
    unsigned int var1 = 0;
#if defined(jpn)
    var0 = func_0209a594(arg0 + 0x54cc, arg1);
#else
    var0 = func_0209a594(arg0 + 0x572c, arg1);
#endif
    if (var0 != NULL) {
#if defined(jpn)
        var1 = var0->unknown_4_ >> 24;
#else
        var1 = (var0->unknown_4_ << 12) >> 24;
#endif
    }
    return var1;
}
