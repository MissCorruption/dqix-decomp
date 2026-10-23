#include <globaldefs.h>
#include "std_library_functions.h"

extern char data_ov001_02164d10[];

struct Struct_ov001_02158828 {
    int unknown_0_;
    unsigned char unknown_4_[0xc];
    unsigned char unknown_10_[0xc];
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
    char unknown_28_[0x20];
    void* unknown_48_;
};

// USA: func_ov001_02158828
extern "C" ARM void func_ov001_02158828(struct Struct_ov001_02158828* arg0) {
    arg0->unknown_0_ = 0;
    memset(arg0->unknown_4_, 0, 0xc);
    memset(arg0->unknown_10_, 0, 0xc);
    arg0->unknown_1c_ = 0;
    arg0->unknown_20_ = 0;
    arg0->unknown_24_ = 0;
    strcpy(arg0->unknown_28_, data_ov001_02164d10);
    arg0->unknown_48_ = NULL;
}
