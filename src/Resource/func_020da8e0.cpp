#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_020da8e0_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};
struct Struct_020da8e0 {
    char unknown_0_[8];
    int unknown_8_;
    char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_;
    char unknown_f_[5];
    Struct_020da8e0_2 unknown_14_[4];
};
extern "C" {
void func_020daa58(void*, void*, int, int);
void func_020dab68(void*, void*, unsigned int);
void func_020da2e4(void*);
}

extern "C" ARM int func_020da8e0(void* arg0)
{
    Struct_020da8e0* var0 = (Struct_020da8e0*)arg0;
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    if (!var1)
        return 0;
    Struct_020da8e0_2* var2 = var0->unknown_14_;
    int var3 = 1;
    for (unsigned char var4 = 0; var4 < 4; ++var4, ++var2) {
        int var5 = var2->unknown_8_;
        if (var5 != -1) {
            if (var1->GetTaskStatus(var5) == 0) {
                var3 = 0;
            } else {
                unsigned int var6 = 0;
                void* var7 = NULL;
                var1->GetLoadedFileByID(var5, &var7, &var6);
                switch (var0->unknown_e_) {
                case 1:
                    func_020daa58(var0, var7, 3100, 3110);
                    break;
                case 2:
                    func_020daa58(var0, var7, 3200, 3210);
                    break;
                case 3:
                    func_020dab68(var0, var7, var6);
                    break;
                }
                var0->unknown_8_ = var2->unknown_0_;
                var0->unknown_d_ |= 4;
                var1->RemoveTask(var5);
                func_020da2e4(var2);
            }
        }
    }
    if (var3)
        var0->unknown_d_ &= ~1;
    return 1;
}
