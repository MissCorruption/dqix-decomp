#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


struct Struct_020dfc40 {
    char unknown_0_[0xe];
    short unknown_e_;
    int unknown_10_;
    int unknown_14_;
};

// USA: func_020dfe88
extern "C" ARM int func_020dfe88(struct Struct_020dfc40* arg0) {
    int var0 = (int)BackgroundLoader::GetInstance();
    if (arg0->unknown_10_ >= 0) {
        ((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_10_));
        arg0->unknown_10_ = -1;
    }
    arg0->unknown_e_ = 0;
    arg0->unknown_14_ = 0;
    return 1;
}
