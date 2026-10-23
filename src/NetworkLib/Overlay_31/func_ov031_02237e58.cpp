#include <globaldefs.h>

extern "C" void func_ov031_0223e2c0(int, void*);
extern "C" ARM void *func_ov031_0223e218(void *arg0, void *arg1, void *arg2, int arg3);
extern "C" void func_ov031_022384bc(int arg0);

struct Struct_ov031_02237e58 { unsigned char unknown_0_[0x14]; void* unknown_14_; };
extern Struct_ov031_02237e58* data_ov031_02290d10;

// USA: func_ov031_02237e58
extern "C" ARM void func_ov031_02237e58(void) {
    func_ov031_0223e2c0(0, data_ov031_02290d10->unknown_14_);
    data_ov031_02290d10->unknown_14_ = func_ov031_0223e218((void*)1, (void*)func_ov031_022384bc, 0, 0x78);
}
