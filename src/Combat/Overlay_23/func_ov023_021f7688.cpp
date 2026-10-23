#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_ov023_021f7688_3;
extern "C" void func_ov023_021f7ca0(struct Struct_ov023_021f7688_3* arg0, void* arg1);

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" int func_ov023_021f6bb8(void* arg0);
extern "C" void func_ov023_021f6bb0(void* arg0, int arg1);

struct Struct_020534ac_2;

struct Struct_020534ac;

struct Struct_ov023_021f7688;
struct Struct_02020aec;
extern "C" void func_ov023_021f7aac(struct Struct_ov023_021f7688* arg0, void* arg1, struct Struct_02020aec* arg2, unsigned int arg3);
extern "C" void func_ov023_021f7b98(struct Struct_ov023_021f7688* arg0, void* arg1, int arg2, struct Struct_02020aec* arg3, unsigned int arg4);

struct Struct_ov023_021f7688_2 {
    char unknown_0_[0xc];
    unsigned char unknown_c_;
    char unknown_d_[0x10 - 0xd];
    int unknown_10_;
    char unknown_14_[0x1c - 0x14];
    int unknown_1c_;
};

// USA: func_ov023_021f7688
extern "C" ARM int func_ov023_021f7688(struct Struct_ov023_021f7688_2* arg0, void* arg1) {
    if (arg0->unknown_10_ == 0) {
        func_ov023_021f7ca0((struct Struct_ov023_021f7688_3*)arg0, arg1);
        return 2;
    }

    void* var0 = func_ov011_021849c8(arg1);
    int var1 = (int)BackgroundLoader::GetInstance();
    int var2 = func_ov023_021f6bb8(var0);
    int var3;
    if (((BackgroundLoader*)(var1))->GetTaskStatus((int)(var2))) {
        if (((BackgroundLoader*)((struct Struct_020534ac_2*)var1))->GetDetailedTaskStatus((int)(var2)) == 2) {
            int var4, var5;
            ((BackgroundLoader*)((struct Struct_020534ac*)var1))->GetLoadedFileByID((int)(var2), (void**)(&var4), (unsigned int*)(&var5));
            if (var4 != 0 && var5 != 0) {
                if (arg0->unknown_c_ & 0x2) {
                    func_ov023_021f7b98((struct Struct_ov023_021f7688*)arg0, arg1, 1, (struct Struct_02020aec*)var4, var5);
                } else {
                    func_ov023_021f7aac((struct Struct_ov023_021f7688*)arg0, arg1, (struct Struct_02020aec*)var4, var5);
                }
            }
        }

        ((BackgroundLoader*)(var1))->RemoveTask((int)(var2));
        func_ov023_021f6bb0(var0, -1);
        var3 = 2;
    } else {
        var3 = arg0->unknown_1c_;
    }
    return var3;
}
