#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"

struct Struct_020534ac;
struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3*, int);
extern "C" char* func_020e046c(char* arg0, void* arg1, void* arg2, int arg3);
extern "C" void func_020df83c(void* arg0);
struct Struct_0201099c_14;
extern "C" void func_020dfc6c(struct Struct_0201099c_14* arg0);

extern "C" {
    void func_ov023_021ddf5c(void* arg0);
    void func_ov023_021df218(void* arg0);
    void func_ov023_021df558(void* arg0);
}

struct Struct_ov023_021ff9e0_14 {
    unsigned char unknown_0_[0x14];
    struct Struct_0201099c_3* unknown_14_;
};
extern struct Struct_ov023_021ff9e0_14 data_ov023_021ff9e0;

struct Struct_ov023_021e0690 {
    unsigned int unknown_0_0_ : 4;
};

#if defined(jpn)
extern char data_ov023_021fcf09[];
#endif
// USA: func_ov023_021e0690
extern "C" ARM int func_ov023_021e0690(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021e0690_1908=0x6f0, Enum_ov023_021e0690_1584=0x62c, Enum_ov023_021e0690_256=0x80, Enum_ov023_021e0690_1856=0x6bc, Enum_ov023_021e0690_1904=0x6ec};
#else
 enum {Enum_ov023_021e0690_1908=0x774, Enum_ov023_021e0690_1584=0x630, Enum_ov023_021e0690_256=0x100, Enum_ov023_021e0690_1856=0x740, Enum_ov023_021e0690_1904=0x770};
#endif
#if defined(jpn)
    int var1 = (int)BackgroundLoader::GetInstance();
    char* var0 = (char*)arg0;
#else
    char* var0 = (char*)arg0;
    int var1 = (int)BackgroundLoader::GetInstance();
#endif

    unsigned short var2 = *(unsigned short*)(var0 + Enum_ov023_021e0690_1908);
    if ((var2 & 0x1000) || ((BackgroundLoader*)(var1))->GetTaskStatus((int)(*(int*)(var0 + Enum_ov023_021e0690_1856)))) {
        memset(var0 + Enum_ov023_021e0690_1584, 0, Enum_ov023_021e0690_256);
        var2 = *(unsigned short*)(var0 + Enum_ov023_021e0690_1908);
        if (var2 & 0x1000) {
#if defined(jpn)
            strcpy(var0 + Enum_ov023_021e0690_1584, data_ov023_021fcf09);
#else
            char* var3 = (char*)func_020e0434(data_ov023_021ff9e0.unknown_14_, 0x29);
            strcpy(var0 + Enum_ov023_021e0690_1584, var3);
#endif

        } else {
            int var4, var5;
            ((BackgroundLoader*)((struct Struct_020534ac*)var1))->GetLoadedFileByID((int)(*(int*)(var0 + Enum_ov023_021e0690_1856)), (void**)(&var4), (unsigned int*)(&var5));
#if defined(jpn)
            {
#else
            if (var4 != 0 && var5 != 0) {
#endif

                int var6 = *(short*)(var0 + Enum_ov023_021e0690_1904);
                func_020e046c(var0 + Enum_ov023_021e0690_1584, (void*)var4, (void*)var5, var6);
            }
            ((BackgroundLoader*)(var1))->RemoveTask((int)(*(int*)(var0 + Enum_ov023_021e0690_1856)));
            *(int*)(var0 + Enum_ov023_021e0690_1856) = -1;
        }

        func_020df83c(var0 + 0x6c);
        func_020dfc6c((struct Struct_0201099c_14*)(var0 + 0x8c));
        func_020df83c(var0 + 0x7c);
        func_020dfc6c((struct Struct_0201099c_14*)(var0 + 0xa4));

        void* var7 = *(void**)(var0 + 0x4c);
        if (var7 == NULL) {
            return -1;
        }

        struct Struct_ov023_021e0690* var8 = (struct Struct_ov023_021e0690*)((char*)var7 + 8);
        int var9 = (var8->unknown_0_0_ <= 7) ? 1 : 0;
        if (var9) {
            func_ov023_021ddf5c(var0);
            func_ov023_021df218(var0);
            func_ov023_021df558(var0);
            return -1;
        }

        func_ov023_021df558(var0);
        var2 = *(unsigned short*)(var0 + Enum_ov023_021e0690_1908);
        return (var2 & 0x400) ? -1 : 9;
    }

    return (*(int*)(var0 + Enum_ov023_021e0690_1856) != -1) ? 7 : -1;
}
