#include <globaldefs.h>
#include "std_library_functions.h"
#include "Filesystem/BackgroundLoader.h"

extern int data_ov001_021658b8;
extern int data_ov001_021658e0[];
extern const char data_ov001_02165745[];
extern "C" void* func_ov017_021d612c(void*);
extern "C" void func_ov001_0215ec94(void*, int);
extern "C" int func_ov001_0215ad3c(char*, char*, char*);

struct Struct_ov001_0215ed2c {
    int unknown_0_;
    char* unknown_4_;
};

// USA: func_ov001_0215ed2c
extern "C" ARM int func_ov001_0215ed2c(void* arg0, int arg1) {
#if defined(jpn)
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    char var1[0x50];
    char var2[0x50];
    *(int*)((char*)&data_ov001_021658b8 + 0x88) = 0;
    Struct_ov001_0215ed2c* var3 = (Struct_ov001_0215ed2c*)arg0;
    for (int var4 = 0; var4 < arg1; var4++) {
        char* var5 = (char*)func_ov017_021d612c(var3++);
        if (func_ov001_0215ad3c(var5, var1, var2) != 0) {
            data_ov001_021658e0[var4] = var0->QueueLoadFileInGP2(var2, var1, NULL);
        } else {
            sprintf(var1, data_ov001_02165745, var5);
            data_ov001_021658e0[var4] = var0->QueueLoadFile(var1, NULL);
        }
        *(int*)((char*)&data_ov001_021658b8 + 0x88) += 1;
    }
#else
    *(int*)((char*)&data_ov001_021658b8 + 0x88) = 0;
    int var6;
    for (var6 = 0; var6 < arg1; var6++) {
        void* var7 = func_ov017_021d612c(arg0);
        arg0 = (char*)arg0 + 8;
        func_ov001_0215ec94(var7, var6);
    }
#endif
    return 1;
}
