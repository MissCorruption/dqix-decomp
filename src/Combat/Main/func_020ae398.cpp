#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_020ad61c {
    char unknown_0_[0x44];
    Vector3i unknown_44_;
    char unknown_50_[0x168 - 0x44 - 12];
    int unknown_168_;
    char unknown_16c_[0x178 - 0x168 - 4];
    int unknown_178_;
};

// USA: func_020ae398
extern "C" ARM void func_020ae398(struct Struct_020ad61c* arg0) {
    Vector3i var0;
    var0 = arg0->unknown_44_;
    var0.y -= 0x199;
    arg0->unknown_44_ = var0;
    arg0->unknown_168_ -= 0x199;
    arg0->unknown_178_ -= 0x199;
}
