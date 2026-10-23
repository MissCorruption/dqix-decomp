#include <globaldefs.h>
#include "std_library_functions.h"
#include "Filesystem/BackgroundLoader.h"

struct Struct_ov025_021eb204 {
    int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
};

struct Struct_ov025_021e9778_2 {
    char unknown_0_[0x10];
    SafeAllocator* unknown_10_[4];
    int unknown_20_[4];
    unsigned char unknown_30_;
};

struct Struct_ov025_021eeff0 {
    unsigned char unknown_0_[4];
};

struct Struct_ov025_021eeff4 {
    const char* unknown_0_[4];
};

extern "C" void func_ov025_021eb3c0(struct Struct_ov025_021eb204* arg0);
extern "C" void* func_02057924(void);
extern "C" int func_02057e6c(void* arg0, int arg1, SafeAllocator* arg2, void* arg3, unsigned int arg4, int arg5);

extern struct Struct_ov025_021eeff4 data_ov025_021eeff4;
extern struct Struct_ov025_021eeff0 data_ov025_021eeff0;
extern char data_ov025_021ef8e0[];
extern char data_ov025_021ef8e9[];

// USA: func_ov025_021eb204
extern "C" ARM int func_ov025_021eb204(struct Struct_ov025_021e9778_2* arg0) {
    int var0;
    struct Struct_ov025_021eb204* var1 = (struct Struct_ov025_021eb204*)((char*)arg0 + 0x194 + 0x400);
    var0 = 0;
    BackgroundLoader* var2 = BackgroundLoader::GetInstance();
    void* var3 = func_02057924();
    SafeAllocator* var4 = arg0->unknown_10_[arg0->unknown_30_];
    int var5 = arg0->unknown_20_[arg0->unknown_30_];
    for (unsigned char var6 = 0; var6 < 4; var6++, var1++) {
        if (var1->unknown_9_ == 0) {
            continue;
        }
        var0 = 1;
        switch (var1->unknown_9_) {
        case 1: {
            struct Struct_ov025_021eeff4 var7 = data_ov025_021eeff4;
            struct Struct_ov025_021eeff0 var8 = data_ov025_021eeff0;
            char var9[0x40];
            char var10[0x40];
            sprintf(var9, data_ov025_021ef8e0, var7.unknown_0_[var1->unknown_8_], var8.unknown_0_[var1->unknown_8_]);
            sprintf(var10, var9, var1->unknown_6_);
            sprintf(var9, data_ov025_021ef8e9, var10);
            var1->unknown_0_ = var2->QueueLoadFile(var9, var4);
            if (var1->unknown_0_ != -1) {
                var1->unknown_9_ = 2;
            } else {
                func_ov025_021eb3c0(var1);
            }
            break;
        }
        case 2:
            if (var2->GetTaskStatus(var1->unknown_0_) != 0) {
                var1->unknown_9_ = 3;
            }
            break;
        case 3: {
            void* var11 = NULL;
            unsigned int var12 = 0;
            var2->GetLoadedFileByID(var1->unknown_0_, &var11, &var12);
            if (var11 != NULL) {
                func_02057e6c(var3, var1->unknown_4_, var4, var11, var12, var5);
            }
            var2->RemoveTask(var1->unknown_0_);
            func_ov025_021eb3c0(var1);
            break;
        }
        default:
            func_ov025_021eb3c0(var1);
            break;
        }
    }
    return var0;
}
