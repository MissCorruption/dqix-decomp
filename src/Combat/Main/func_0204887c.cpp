#include <globaldefs.h>

extern int data_020ef078;
extern "C" void sprintf(void* arg0, void* arg1, void* arg2);

struct Struct_0204887c {
    char unknown_0_[0x148];
    char* unknown_148_;
};

// USA: func_0204887c
extern "C" ARM void func_0204887c(struct Struct_0204887c* arg0, char* arg1) {
    char* var0 = arg0->unknown_148_;
    arg0->unknown_148_ = arg1;
    if (var0 == NULL) return;
    sprintf(arg0->unknown_148_ + 0x2c, &data_020ef078, var0 + 0x2c);
}
