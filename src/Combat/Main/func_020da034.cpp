#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


struct Struct_020da034 {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned char unknown_a_[2];
    int unknown_c_[1];
};

// USA: func_020da034
extern "C" ARM void func_020da034(Struct_020da034* arg0, int arg1) {
    ((BackgroundLoader*)((int)BackgroundLoader::GetInstance()))->RemoveTask((int)(arg0->unknown_c_[arg1]));
    arg0->unknown_c_[arg1] = -1;
    arg0->unknown_8_ &= ~(1 << arg1);
}
