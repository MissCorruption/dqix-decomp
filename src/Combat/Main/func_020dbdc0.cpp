#include <globaldefs.h>
#include <std_library_functions.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

struct Struct_02057de0 {
    unsigned char unknown_0_[0x1ec];
    struct Struct_02057de0* unknown_1ec_;
};

struct Struct_02057de0_2 {
    struct Struct_02057de0* unknown_0_;
    int unknown_4_;
};

extern "C" int func_02057de0(Struct_02057de0_2* arg0, int arg1, SafeAllocator* arg2, int arg3, int arg4);
extern "C" int func_02058680(char* arg0, int arg1, void** arg2, int arg3);
extern "C" void func_0207df90(char* arg0);
extern "C" void func_0207dfac(char* arg0);

struct Struct_020dbdc0;
extern "C" void func_020dbf70(struct Struct_020dbdc0* arg0);

extern "C" int func_02057924(void);

struct Struct_020dbd9c {
    SafeAllocator* unknown_0_;
    char* unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    unsigned char unknown_14_;
};

// USA: func_020dbdc0
extern "C" ARM void func_020dbdc0(Struct_020dbd9c* arg0) {
    if (arg0->unknown_c_ >= 0) {
        BackgroundLoader* var0 = BackgroundLoader::GetInstance();
        if (var0->GetTaskStatus(arg0->unknown_c_) != 0) {
            Struct_02057de0_2* var1 = (Struct_02057de0_2*)func_02057924();
            void* var2 = NULL;
            unsigned int var3 = 0;
            var0->GetLoadedFileByID(arg0->unknown_c_, &var2, &var3);
            void* var4 = arg0->unknown_0_->Allocate(var3);
            if (var4 == NULL) {
                func_020dbf70((struct Struct_020dbdc0*)arg0);
                return;
            }
            memcpy(var4, var2, var3);
            func_0207df90(arg0->unknown_4_);
            func_02057de0(var1, arg0->unknown_8_, arg0->unknown_0_, (int)var4, (int)var3);
            func_0207dfac(arg0->unknown_4_);
            func_020dbf70((struct Struct_020dbdc0*)arg0);
            arg0->unknown_10_ = 2;
        }
    }
    if (arg0->unknown_14_ != 0) {
        char* var5 = (char*)func_02057924();
        if (var5 != NULL) {
            int var6 = func_02058680(var5, arg0->unknown_8_, NULL, 0);
            if (var6 <= 0) {
                arg0->unknown_14_ = 0;
            }
        }
    }
}
