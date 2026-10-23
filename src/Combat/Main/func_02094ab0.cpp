#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


struct Struct_02094ab0 {
    unsigned char unknown_0_[0x14];
    int unknown_14_[8];
    int unknown_34_;
    int unknown_38_;
    unsigned char unknown_3c_[0x54 - 0x3c];
    unsigned char unknown_54_;
    unsigned char unknown_55_;
    unsigned char unknown_56_;
    unsigned char unknown_57_;
    unsigned char unknown_58_[0x61 - 0x58];
    unsigned char unknown_61_;
    unsigned char unknown_62_;
};

// USA: func_02094ab0
extern "C" ARM void func_02094ab0(struct Struct_02094ab0* arg0) {
    int var0 = (int)BackgroundLoader::GetInstance();
    unsigned char var1;
    for (var1 = 0; var1 < 8; var1++) {
        if (arg0->unknown_14_[var1] >= 0) {
            ((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_14_[var1]));
            arg0->unknown_14_[var1] = -1;
        }
    }
    arg0->unknown_34_ = arg0->unknown_38_ = -1;
    arg0->unknown_56_ = 1;
    arg0->unknown_54_ = arg0->unknown_55_ = arg0->unknown_61_ = arg0->unknown_62_ = arg0->unknown_57_ = 0;
}
