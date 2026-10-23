#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_ov000_0216fd38 {
    int unknown_0_;
    unsigned char unknown_4_[0xa0 - 0x4];
    unsigned char unknown_a0_;
};

// USA: func_ov000_0216fd38
extern "C" ARM int func_ov000_0216fd38(struct Struct_ov000_0216fd38* arg0) {
    if (arg0->unknown_a0_) return 1;
    if (arg0->unknown_0_ < 0) return 0;
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    if (var0->GetTaskStatus(arg0->unknown_0_) == 0) {
        return 0;
    }
    arg0->unknown_a0_ = 1;
    return 1;
}
