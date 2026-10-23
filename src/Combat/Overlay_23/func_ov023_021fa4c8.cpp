#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" int func_ov023_021f6bb8(void* arg0);
extern "C" void func_ov023_021f6bb0(void* arg0, int arg1);
struct Struct_020534ac_2;
struct Struct_020534ac;
extern "C" void func_ov023_021fa644(void* arg0, void* arg1, char* arg2, void* arg3);

struct Struct_ov023_021fa4c8 {
    char unknown_0_[0x1c];
    int unknown_1c_;
};

// USA: func_ov023_021fa4c8
extern "C" ARM int func_ov023_021fa4c8(struct Struct_ov023_021fa4c8* arg0, void* arg1) {
    void* var0 = func_ov011_021849c8(arg1);
    int var1 = (int)BackgroundLoader::GetInstance();
    int var2 = func_ov023_021f6bb8(var0);
    if (((BackgroundLoader*)(var1))->GetTaskStatus((int)(var2))) {
        if (((BackgroundLoader*)((struct Struct_020534ac_2*)var1))->GetDetailedTaskStatus((int)(var2)) == 2) {
            int var3, var4;
            ((BackgroundLoader*)((struct Struct_020534ac*)var1))->GetLoadedFileByID((int)(var2), (void**)(&var3), (unsigned int*)(&var4));
            if (var3 != 0 && var4 != 0) {
                func_ov023_021fa644(arg0, arg1, (char*)var3, (void*)var4);
            }
        }
        ((BackgroundLoader*)(var1))->RemoveTask((int)(var2));
        func_ov023_021f6bb0(var0, -1);
        return 2;
    }
    return arg0->unknown_1c_;
}
