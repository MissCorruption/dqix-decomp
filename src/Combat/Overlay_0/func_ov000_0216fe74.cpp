#include <globaldefs.h>

struct Struct_ov000_0216fe74 {
    char unknown_0_[0x40];
    char* unknown_40_;
    char unknown_44_[0xa];
    unsigned short unknown_4e_;
};

// USA: func_ov000_0216fe74
extern "C" ARM char* func_ov000_0216fe74(struct Struct_ov000_0216fe74* arg0, unsigned int arg1) {
    char* var0 = NULL;
    char* var1 = arg0->unknown_40_;
    if (var1 != NULL && arg1 < arg0->unknown_4e_) {
        var0 = var1 + arg1 * 0x28;
    }
    return var0;
}
