#include <globaldefs.h>

extern "C" void func_02033ce8(void*);

struct Struct_02033b68 {
    char unknown_0_[0xbe];
    unsigned char unknown_be_;
    unsigned char unknown_bf_;
};

// USA: func_02033b68
extern "C" ARM void func_02033b68(struct Struct_02033b68* arg0, int arg1) {
    if (arg0->unknown_be_ == arg1) return;
    arg0->unknown_bf_ = arg0->unknown_be_;
    arg0->unknown_be_ = arg1;
    func_02033ce8(arg0);
}
