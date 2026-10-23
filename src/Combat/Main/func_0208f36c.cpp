#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_0208f36c {
    char unknown_0_[8];
    Object3D* unknown_8_;
};

// USA: func_0208f36c
extern "C" ARM void func_0208f36c(Struct_0208f36c* arg0, Object3D* arg1) {
    arg0->unknown_8_ = arg1;
    if (!arg0->unknown_8_) return;
    arg0->unknown_8_->SetScale(0x10a, 0x10a, 0x10a);
    arg0->unknown_8_->MaybeSetBCFGAnimation(0, 0);
}
