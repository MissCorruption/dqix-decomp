#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" int func_ov023_021f6bb8(void* arg0);
extern "C" void func_ov023_021f6bb0(void* arg0, int arg1);

struct Struct_020534ac_2;

struct Struct_020534ac;

extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" ARM void func_ov023_021e133c(void* arg0, void* arg1, int arg2, int arg3, int arg4, short arg5);

struct Struct_ov023_021fc30c {
    char unknown_0_[0x8];
    unsigned short unknown_8_;
    char unknown_a_[0x1c - 0xa];
    int unknown_1c_;
};

// USA: func_ov023_021fc30c
extern "C" ARM int func_ov023_021fc30c(struct Struct_ov023_021fc30c* arg0, void* arg1) {
    void* var0 = func_ov011_021849c8(arg1);
    int var1 = (int)BackgroundLoader::GetInstance();
    int var2 = func_ov023_021f6bb8(var0);
    if (((BackgroundLoader*)(var1))->GetTaskStatus((int)(var2))) {
        if (((BackgroundLoader*)((struct Struct_020534ac_2*)var1))->GetDetailedTaskStatus((int)(var2)) == 2) {
            int var3, var4;
            ((BackgroundLoader*)((struct Struct_020534ac*)var1))->GetLoadedFileByID((int)(var2), (void**)(&var3), (unsigned int*)(&var4));
            void* var5 = func_ov011_021845f8(arg1, arg0->unknown_8_);
            if (var5 == 0) {
                ((BackgroundLoader*)(var1))->RemoveTask((int)(var2));
                func_ov023_021f6bb0(var0, -1);
                return 2;
            }
            func_ov023_021e133c((char*)arg0 + 0x20, (char*)var5 + 4, var3, var4, 0, 0);
        }
        ((BackgroundLoader*)(var1))->RemoveTask((int)(var2));
        func_ov023_021f6bb0(var0, -1);
        return 2;
    }
    return arg0->unknown_1c_;
}
