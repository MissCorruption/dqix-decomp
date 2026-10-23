#include <globaldefs.h>

struct Struct_ov001_02158ab8 {
    char unknown_0_[0x8];
    void* unknown_8_;   // 0x8
    void* unknown_c_; // 0xc
    void* unknown_10_;   // 0x10
    void* unknown_14_; // 0x14
    void* unknown_18_;   // 0x18
    void* unknown_1c_; // 0x1c
    void* unknown_20_;   // 0x20
};

// USA: func_ov001_02158ab8
extern "C" ARM int func_ov001_02158ab8(struct Struct_ov001_02158ab8* arg0) {
    return arg0->unknown_8_ == NULL && arg0->unknown_10_ == NULL && arg0->unknown_18_ == NULL && arg0->unknown_20_ == NULL;
}
