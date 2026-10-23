#include <globaldefs.h>

struct Struct_0203fc5c {
    char unknown_0_[0x40];
    float unknown_40_;
};

// USA: func_0203fc5c
extern "C" ARM int func_0203fc5c(struct Struct_0203fc5c* arg0, float arg1) {
    if (arg1 <= 0.0f) {
        return 0;
    }
    arg0->unknown_40_ = arg1;
    return 1;
}
