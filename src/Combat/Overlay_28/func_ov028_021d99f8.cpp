#include <globaldefs.h>

struct Struct_ov028_021d9208_3 {
    char unknown_0_[4];
    void* unknown_4_;
    unsigned short unknown_8_;
};

// USA: func_ov028_021d99f8
extern "C" ARM void* func_ov028_021d99f8(struct Struct_ov028_021d9208_3* arg0, unsigned int arg1) {
    void* var0 = 0;
    if (arg1 < arg0->unknown_8_) {
        var0 = (char*)arg0->unknown_4_ + arg1 * 0xc;
    }
    return var0;
}
