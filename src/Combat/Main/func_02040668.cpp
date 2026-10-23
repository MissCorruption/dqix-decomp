#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_02040668 {
    char unknown_0_[0x14];
    void* unknown_14_;
    void* unknown_18_;
    void* unknown_1c_;
};

// USA: func_02040668
extern "C" ARM void func_02040668(struct Struct_02040668* arg0) {
    if (arg0->unknown_14_ != NULL) {
        *(unsigned int*)((char*)arg0->unknown_14_ + 0x50) &= ~1;
        return;
    }
    if (arg0->unknown_18_ != NULL) {
        ((Object3D*)((unsigned char*)arg0->unknown_18_))->MakeVisible();
        return;
    }
    if (arg0->unknown_1c_ != NULL) {
        ((Object3D*)((unsigned char*)arg0->unknown_1c_))->MakeVisible();
    }
}
