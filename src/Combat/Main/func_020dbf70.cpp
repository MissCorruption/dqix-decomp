#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


struct Struct_020dbdc0 {
    char unknown_0_[0xc];
    int unknown_c_;
    int unknown_10_;
};

static inline void inline_020dbf70(int& arg0) {
    BackgroundLoader::GetInstance()->RemoveTask(arg0);
    arg0 = -1;
}

// USA: func_020dbf70
extern "C" ARM void func_020dbf70(struct Struct_020dbdc0* arg0) {
    if (arg0->unknown_c_ < 0) return;
    inline_020dbf70(arg0->unknown_c_);
    arg0->unknown_10_ = 0;
}
