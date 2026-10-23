#include <globaldefs.h>

extern "C" int func_0207964c(void* arg0);

struct Struct_02033b68 {
    char unknown_0_[0xbe];
    unsigned char unknown_be_;
    unsigned char unknown_bf_;
};
extern "C" void func_02033b68(struct Struct_02033b68* arg0, int arg1);

// USA: func_0207872c
extern "C" ARM int func_0207872c(struct Struct_02033b68* arg0) {
    if (arg0->unknown_be_ != 2) {
        func_02033b68(arg0, 2);
    }
    return func_0207964c(arg0);
}
