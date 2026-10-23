#include <globaldefs.h>

struct Struct_0201f368 {
    char unknown_0_[0x18];
    void* unknown_18_[8];
    unsigned char unknown_38_;
};

// USA: func_0201f368
extern "C" ARM void* func_0201f368(struct Struct_0201f368* arg0, int arg1) {
    if (arg1 < 0 || arg0->unknown_38_ <= arg1) {
        return 0;
    }
    return arg0->unknown_18_[arg1];
}
