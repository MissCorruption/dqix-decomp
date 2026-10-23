#include <globaldefs.h>

struct Struct_02053dc0 {
#if defined(jpn)
    char unknown1_0_[0x190];
#else
    char unknown_0_[0x19c];
#endif
    void* unknown_19c_;
};

// USA: func_02053dc0
extern "C" ARM void* func_02053dc0(struct Struct_02053dc0* arg0) {
    void* var0 = arg0->unknown_19c_;
    return var0 != NULL ? var0 : NULL;
}
