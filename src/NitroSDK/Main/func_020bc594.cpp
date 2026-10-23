#include <globaldefs.h>

extern "C" void func_020d1e50(int, int);

struct Struct_020bc594 {
    unsigned char unknown_0_[0x2e];
    unsigned char unknown_2e_;
    unsigned char unknown_2f_[0x3c - 0x2e - 1];
    unsigned char unknown_3c_;
};

// USA: func_020bc594
extern "C" ARM void func_020bc594(Struct_020bc594* arg0, int arg1) {
    if (arg0 != 0 && arg1 != arg0->unknown_2e_) {
        func_020d1e50(arg0->unknown_3c_, arg1);
        arg0->unknown_2e_ = (unsigned char)arg1;
    }
}
