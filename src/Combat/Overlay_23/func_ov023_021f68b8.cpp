#include <globaldefs.h>

struct Struct_ov023_021f68b8 { void* unknown_0_; };

// USA: func_ov023_021f68b8
extern "C" ARM void* func_ov023_021f68b8(struct Struct_ov023_021f68b8* arg0, int arg1) {
    void* var0 = arg0->unknown_0_;
    while (var0 != NULL && arg1 > 0) {
        var0 = *(void**)((char*)var0 + 0x18);
        arg1--;
    }
    return var0;
}
