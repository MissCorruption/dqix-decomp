#include <globaldefs.h>

#include "Filesystem/BackgroundLoader.h"

extern "C" void* func_ov011_021849c8(void* arg0);

extern "C" {
    int func_ov023_021f6bb8(void* arg0);
    void func_ov023_021f6bb0(void* arg0, int arg1);
    void func_ov023_021fab48(void* arg0, void* arg1, const void* arg2, int arg3);
}

struct Struct_ov023_021fa9a4 {
    char unknown_0_[0x1c];
    int unknown_1c_;
};

// USA: func_ov023_021fa9a4
extern "C" ARM int func_ov023_021fa9a4(struct Struct_ov023_021fa9a4* arg0, void* arg1) {
    void* var0 = func_ov011_021849c8(arg1);
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    int var2 = func_ov023_021f6bb8(var0);
    if (var1->GetTaskStatus(var2)) {
        if (var1->GetDetailedTaskStatus(var2) == BackgroundLoader::TaskStatus_Complete) {
            void* var3;
            unsigned int var4;
            var1->GetLoadedFileByID(var2, &var3, &var4);
            func_ov023_021fab48(arg0, arg1, var3, var4);
        }

        var1->RemoveTask(var2);
        func_ov023_021f6bb0(var0, -1);
        return 2;
    }
    return arg0->unknown_1c_;
}
