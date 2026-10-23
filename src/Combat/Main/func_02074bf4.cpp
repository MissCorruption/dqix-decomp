#include <globaldefs.h>

struct Struct_02074bf4 {
    char unknown_0_[0x11];
    unsigned char unknown_11_;
};

extern "C" void func_02074e54(struct Struct_02074bf4*);

// USA: func_02074bf4
extern "C" ARM void func_02074bf4(struct Struct_02074bf4* arg0) {
    if (arg0->unknown_11_) {
        func_02074e54(arg0);
        arg0->unknown_11_ = 0;
    }
}
