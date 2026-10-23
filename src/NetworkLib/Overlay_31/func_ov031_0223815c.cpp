#include <globaldefs.h>

extern "C" void func_ov031_0223e2c0(int arg0, void* arg1);
extern "C" ARM void* func_ov031_0223e218(void* arg0, void* arg1, void* arg2, int arg3);
extern "C" ARM void func_ov031_022384bc(int arg0);

struct Struct_ov031_0223815c {
    unsigned char unknown_0_[0x14];
    void* unknown_14_;
    unsigned short unknown_18_;
    unsigned char unknown_1a_;
    char unknown_1b_;
};
extern Struct_ov031_0223815c* data_ov031_02290d10;

// USA: func_ov031_0223815c
extern "C" ARM void func_ov031_0223815c(void* arg0) {
    data_ov031_02290d10->unknown_1b_ = -1;
    data_ov031_02290d10->unknown_18_++;
    if (data_ov031_02290d10->unknown_18_ >= 0x78) {
        func_ov031_0223e2c0(0, arg0);
        data_ov031_02290d10->unknown_14_ = func_ov031_0223e218((void*)1, (void*)func_ov031_022384bc, (void*)0, 0x78);
    }
}
