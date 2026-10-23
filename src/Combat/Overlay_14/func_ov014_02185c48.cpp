#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern const char data_ov014_021896bc[];

struct Struct_ov014_02185c48 {
    char unknown_0_[0x70];
    int unknown_70_;
    char unknown_74_[0x7e - 0x74];
    unsigned char unknown_7e_;
    char unknown_7f_[0x81 - 0x7f];
    unsigned char unknown_81_;
};

// USA: func_ov014_02185c48
extern "C" ARM void func_ov014_02185c48(Struct_ov014_02185c48* arg0) {
    if (arg0->unknown_81_ & 0x10) {
        BackgroundLoader* var0 = BackgroundLoader::GetInstance();
        if (arg0->unknown_7e_ == 0) {
            arg0->unknown_70_ = var0->QueueLoadFile(data_ov014_021896bc, NULL);
            arg0->unknown_7e_++;
        }
    }
}
