#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

struct Struct_02020fc4;
struct Struct_02020fc4_2;
struct Struct_02020fc4_3;

extern "C" void func_0203bb1c(struct Struct_02020fc4* arg0);
extern "C" void func_0203bb3c(struct Struct_02020fc4_2* arg0, char* arg1, SafeAllocator* arg2, int arg3, unsigned short arg4);
extern "C" void func_0203bcb8(struct Struct_02020fc4_3* arg0, int arg1, int arg2);
extern "C" int func_0203b784(int* arg0, int arg1, int arg2, int arg3, unsigned int arg4, unsigned int arg5);
extern "C" void* func_0203b628(void);

struct Struct_02020fc4_4 {
    char unknown_0_[0x14];
    int unknown_14_;
    char unknown_18_[0x5c];
    int unknown_74_;
    unsigned char unknown_78_;
    unsigned char unknown_79_;
    char unknown_7a_[0x12];
    unsigned short unknown_8c_;
};

#if defined(jpn)
typedef int Type_02020fc4;
#else
typedef int* Type_02020fc4;
#endif
// USA: func_02020fc4
extern "C" ARM void func_02020fc4(struct Struct_02020fc4_4* arg0, Type_02020fc4 arg1, SafeAllocator* arg2) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    int* var1 = (int*)func_0203b628();

    if (arg0->unknown_14_ == 3) {
        arg0->unknown_74_ = 0;
    } else {
        void* var2 = 0;
        unsigned int var3 = 0;
        var0->GetLoadedFileByID((IS_JPN ? (int)arg1 : *(int*)arg1), &var2, &var3);
        func_0203bb1c((struct Struct_02020fc4*)((char*)arg0 + 0x78));
        func_0203bb3c((struct Struct_02020fc4_2*)((char*)arg0 + 0x78), (char*)var2, arg2, 1, 1);

        int var4;
        for (var4 = 0; var4 < 0x20 / arg0->unknown_79_; var4++) {
            int var5;
            for (var5 = 0; var5 < 0x20 / arg0->unknown_78_; var5++) {
                func_0203bcb8((struct Struct_02020fc4_3*)((char*)arg0 + 0x78),
                                    var5 * arg0->unknown_78_, var4 * arg0->unknown_79_);
            }
        }

        int var6[8];
        arg0->unknown_74_ = arg0->unknown_78_ * arg0->unknown_79_ + arg0->unknown_8c_;
        memset(var6, 0, 0x20);
        func_0203b784(var1, 1, 0, (int)var6, 0x20, 1);
    }

    BackgroundLoader::GetInstance()->RemoveTask(IS_JPN ? (int)arg1 : *(int*)arg1);
#if !defined(jpn)
    *arg1 = -1;
#endif
}
