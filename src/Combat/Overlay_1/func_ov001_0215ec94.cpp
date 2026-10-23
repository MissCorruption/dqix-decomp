#include <globaldefs.h>
#include "std_library_functions.h"
#include "Filesystem/BackgroundLoader.h"

extern "C" int func_ov001_0215ad3c(char* arg0, char* arg1, char* arg2);
extern const char data_ov001_02165745[];

extern int data_ov001_021658e0[];

struct Struct_ov001_021658b8_9 {
    char unknown_0_[0x88];
    int unknown_88_;
};
extern Struct_ov001_021658b8_9 data_ov001_021658b8;

// USA: func_ov001_0215ec94
extern "C" ARM void func_ov001_0215ec94(char* arg0, int arg1) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    char var1[0x50];
    char var2[0x50];
    if (func_ov001_0215ad3c(arg0, var1, var2) != 0) {
        data_ov001_021658e0[arg1] = var0->QueueLoadFileInGP2(var2, var1, NULL);
    } else {
        sprintf(var1, data_ov001_02165745, arg0);
        data_ov001_021658e0[arg1] = var0->QueueLoadFile(var1, NULL);
    }
    data_ov001_021658b8.unknown_88_ += 1;
}
