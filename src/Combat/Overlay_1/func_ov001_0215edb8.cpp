#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" void func_ov017_021d6134(void*, unsigned int);

extern int data_ov001_021658e0[];
struct Struct_ov001_021658b8_11 { char unknown_0_[0x88]; int unknown_88_; };
extern Struct_ov001_021658b8_11 data_ov001_021658b8;

// USA: func_ov001_0215edb8
extern "C" ARM int func_ov001_0215edb8(void* arg0) {
    int var0 = (int)BackgroundLoader::GetInstance();
    int var1;
    for (var1 = 0; var1 < data_ov001_021658b8.unknown_88_; var1++) {
        if (((BackgroundLoader*)(var0))->GetTaskStatus((int)(data_ov001_021658e0[var1])) == 0) {
            func_ov017_021d6134(arg0, 1);
            return 1;
        }
    }
    func_ov017_021d6134(arg0, 0);
    return 1;
}
