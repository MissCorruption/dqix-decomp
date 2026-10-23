#include <globaldefs.h>

struct Struct_ov003_02173b4c {
    unsigned char unknown_0_[0x40];
    char* unknown_40_;
    unsigned char unknown_44_[0xa];
    unsigned short unknown_4e_;
};

// USA: func_ov003_02173bb0
extern "C" ARM void* func_ov003_02173bb0(Struct_ov003_02173b4c* arg0, unsigned int arg1) {
    char* var0 = arg0->unknown_40_;
    char* var1 = NULL;
    if (var0 != NULL) {
        if (arg1 < arg0->unknown_4e_) {
            var1 = var0 + arg1 * 0x28;
        }
    }
    return var1;
}
