#include <globaldefs.h>

struct Struct_ov016_0218f330 {
    char unknown_0_[0x88];
    int unknown_88_[2];
    int unknown_90_;
};

// USA: func_ov016_0218f330
extern "C" ARM int func_ov016_0218f330(void* arg0) {
    Struct_ov016_0218f330* var0 = (Struct_ov016_0218f330*)arg0;
    return var0->unknown_88_[var0->unknown_90_];
}
