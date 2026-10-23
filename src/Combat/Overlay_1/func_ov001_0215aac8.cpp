#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern int data_ov001_021658e0[];
struct Struct_ov001_021658b8_4 { char unknown_0_[0x88]; int unknown_88_; };
extern Struct_ov001_021658b8_4 data_ov001_021658b8;

// USA: func_ov001_0215aac8
extern "C" ARM void func_ov001_0215aac8(void) {
    int var0 = (int)BackgroundLoader::GetInstance();
    int var1;
    for (var1 = 0; var1 < data_ov001_021658b8.unknown_88_; var1++) {
        ((BackgroundLoader*)(var0))->RemoveTask((int)(data_ov001_021658e0[var1]));
        data_ov001_021658e0[var1] = -1;
    }
    data_ov001_021658b8.unknown_88_ = 0;
}
