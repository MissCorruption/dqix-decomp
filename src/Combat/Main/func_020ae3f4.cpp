#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_020ad61c_2 {
    char unknown_0_[0x44];
    Vector3i unknown_44_;
    char unknown_50_[0x140 - 0x50];
    int unknown_140_;
    char unknown_144_[0x168 - 0x144];
    int unknown_168_;
    char unknown_16c_[0x178 - 0x16c];
    int unknown_178_;
};

// USA: func_020ae3f4
extern "C" ARM void func_020ae3f4(struct Struct_020ad61c_2* arg0) {
    int var0 = arg0->unknown_140_ + 1;
    arg0->unknown_140_ = var0;
    int var1 = var0 * var0;
    Vector3i var2;
    var2 = arg0->unknown_44_;
    var2.y += (int)(((float)var1 * 0.005f) * 4096.0f);
    arg0->unknown_44_ = var2;
    arg0->unknown_168_ += (int)(((float)var1 * 0.005f) * 4096.0f);
    arg0->unknown_178_ += (int)(((float)var1 * 0.005f) * 4096.0f);
}
