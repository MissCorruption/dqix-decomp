#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


struct Struct_ov023_021f5410 {
    char unknown_0_[0xc];
    short unknown_c_;
    char unknown_e_[2];
    int unknown_10_;
    int unknown_14_;
};

// USA: func_ov023_021f5410
extern "C" ARM int func_ov023_021f5410(struct Struct_ov023_021f5410* arg0) {
    int var0 = (int)BackgroundLoader::GetInstance();
    if (arg0->unknown_10_ >= 0) {
        ((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_10_));
        arg0->unknown_10_ = -1;
    }
    arg0->unknown_c_ = 0;
    arg0->unknown_14_ = 0;
    return 1;
}
