#include <globaldefs.h>

extern "C" void func_0204b04c(void*, int);
extern "C" void func_0204b088(void*, int);

struct Struct_02020cb8_2 {
    char unknown_0_[0x14];
    void* unknown_14_;
};

// USA: func_0204b0e8
extern "C" ARM void func_0204b0e8(struct Struct_02020cb8_2* arg0, void* arg1) {
    if (arg1 == NULL) arg1 = arg0->unknown_14_;
    if (arg1 == NULL) return;
    func_0204b04c(arg0, (int)arg1);
    func_0204b088(arg0, (int)arg1);
}
