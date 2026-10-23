#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"

#if defined(jpn)
struct Struct_02046574 { char unknown_0_[0x40]; };
struct Struct_02046574_2 {
    char unknown_0_[0x37c];
    Struct_02046574 unknown_37c_[16];
};
struct Struct_020943dc {
    char unknown_0_[0xc];
    short unknown_c_;
    char unknown_e_[0x100 - 0xe];
    int unknown_100_;
    int unknown_104_;
    char unknown_108_[0x30];
    unsigned char unknown_138_0_ : 7;
    unsigned char unknown_138_7_ : 1;
    char unknown_139_;
    unsigned char unknown_13a_;
    char unknown_13b_[2];
    unsigned char unknown_13d_;
};
extern "C" Struct_02046574_2* func_020421a0();
extern "C" void func_02046574(Struct_02046574_2*, int, char*);
extern "C" void func_020e046c(char*, void*, unsigned int, int);
extern "C" void func_020474a8(Struct_02046574_2*, int, char*, char*);
extern const char data_020f146e[];

extern "C" ARM int func_020943dc(Struct_020943dc* arg0) {
    if (!(arg0->unknown_13d_ & 1)) return 0;
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    if (arg0->unknown_138_0_ == 0) {
        if (arg0->unknown_100_ >= 0) {
            var0->RemoveTask(arg0->unknown_100_);
            arg0->unknown_100_ = -1;
        }
        arg0->unknown_100_ = var0->QueueLoadFile(data_020f146e, 0);
        ++arg0->unknown_138_0_;
    } else if (arg0->unknown_138_0_ == 1) {
        if (var0->GetTaskStatus(arg0->unknown_100_)) {
            void* var1;
            unsigned int var2;
            var0->GetLoadedFileByID(arg0->unknown_100_, &var1, &var2);
            if (var1) {
                char var3[0x40] = {};
                func_020e046c(var3, var1, var2, arg0->unknown_c_);
                Struct_02046574_2* var4 = func_020421a0();
                char* var5 = var4->unknown_37c_[0].unknown_0_;
                char var6[0x40] = {};
                if (var5) memcpy(var6, var5, strlen(var5));
                func_02046574(var4, 0, arg0->unknown_0_);
                memset(arg0->unknown_108_, 0, sizeof(arg0->unknown_108_));
                func_020474a8(var4, 10, var3, arg0->unknown_108_);
                arg0->unknown_108_[0x2f] = 0;
                arg0->unknown_104_ = 0;
                if (var5) func_02046574(var4, 0, var6);
            }
            var0->RemoveTask(arg0->unknown_100_);
            arg0->unknown_100_ = -1;
            arg0->unknown_13d_ &= ~1;
            arg0->unknown_138_0_ = 0;
            arg0->unknown_13a_ = 0;
        }
    }
    return 1;
}
#else
struct Struct_02046574 { char unknown_0_[0x40]; };
struct Struct_02046574_2 {
    char unknown_0_[0x4ac];
    Struct_02046574 unknown_4ac_[16];
};
struct Struct_020943dc {
    char unknown_0_[0x30];
    short unknown_30_;
    char unknown_32_[0x340 - 0x32];
    int unknown_340_;
    int unknown_344_;
    char unknown_348_[0x80];
    unsigned char unknown_3c8_0_ : 7;
    unsigned char unknown_3c8_7_ : 1;
    char unknown_3c9_;
    unsigned char unknown_3ca_;
    char unknown_3cb_[2];
    unsigned char unknown_3cd_;
};
extern "C" Struct_02046574_2* func_020421a0();
extern "C" void func_02046574(Struct_02046574_2*, int, char*);
extern "C" void func_020e046c(char*, void*, unsigned int, int);
extern "C" void func_02046608(Struct_02046574_2*, int, char*, char*, int, int, int);
extern const char data_020f13aa[];
extern const char data_020f13c5[];

// USA: func_020943dc
extern "C" ARM int func_020943dc(Struct_020943dc* arg0) {
    if (!(arg0->unknown_3cd_ & 1)) return 0;
    BackgroundLoader* var7 = BackgroundLoader::GetInstance();
    if (arg0->unknown_3c8_0_ == 0) {
        if (arg0->unknown_340_ >= 0) {
            var7->RemoveTask(arg0->unknown_340_);
            arg0->unknown_340_ = -1;
        }
        arg0->unknown_340_ = var7->QueueLoadFileInGP2(data_020f13aa, data_020f13c5, 0);
        ++arg0->unknown_3c8_0_;
    } else if (arg0->unknown_3c8_0_ == 1) {
        if (var7->GetTaskStatus(arg0->unknown_340_)) {
            void* var8;
            unsigned int var9;
            var7->GetLoadedFileByID(arg0->unknown_340_, &var8, &var9);
            if (var8) {
                char var10[0x40] = {};
                func_020e046c(var10, var8, var9, arg0->unknown_30_);
                Struct_02046574_2* var11 = func_020421a0();
                char* var12 = var11->unknown_4ac_[0].unknown_0_;
                char var13[0x40] = {};
                if (var12) memcpy(var13, var12, strlen(var12));
                func_02046574(var11, 0, arg0->unknown_0_);
                memset(arg0->unknown_348_, 0, sizeof(arg0->unknown_348_));
                func_02046608(var11, 10, var10, arg0->unknown_348_, 0x100, 0, 0);
                arg0->unknown_348_[0x7f] = 0;
                arg0->unknown_344_ = 0;
                if (var12) func_02046574(var11, 0, var13);
            }
            var7->RemoveTask(arg0->unknown_340_);
            arg0->unknown_340_ = -1;
            arg0->unknown_3cd_ &= ~1;
            arg0->unknown_3c8_0_ = 0;
            arg0->unknown_3ca_ = 0;
        }
    }
    return 1;
}
#endif
