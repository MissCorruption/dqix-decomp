#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_0201099c_14 {
    unsigned char unknown_0_[0xc];
    short unknown_c_;
    short unknown_e_;
    int unknown_10_;
    void* unknown_14_;
};

struct SafeAllocator;
struct Struct_020dfc40;
extern "C" int func_020dfe88(Struct_020dfc40*);
extern "C" void func_020dfec0(void* arg0, void* arg1, void* arg2, unsigned int arg3);
extern "C" void func_020e0028(void* arg0, void* arg1, void* arg2, unsigned int arg3, short* arg4, int arg5);
extern "C" int func_020dfd40(void* arg0, void* arg1, void* arg2);

// USA: func_020dfd40
extern "C" ARM int func_020dfd40(void* arg0, void* arg1, void* arg2) {
    Struct_0201099c_14* var0 = (Struct_0201099c_14*)arg0;
    void* var1 = BackgroundLoader::GetInstance();

    switch (var0->unknown_e_) {
    case 1:
        if (arg1 == 0) {
            func_020dfe88((Struct_020dfc40*)var0);
            return 1;
        }
        if (arg2 != 0) {
            var0->unknown_10_ = ((BackgroundLoader*)var1)->QueueLoadFileInGP2((const char*)arg1, (const char*)arg2, (SafeAllocator*)0);
        } else {
            var0->unknown_10_ = ((BackgroundLoader*)var1)->QueueLoadFile((const char*)arg1, (SafeAllocator*)0);
        }
        var0->unknown_e_ = 2;
        return func_020dfd40(var0, 0, 0);
    case 2:
        if (((BackgroundLoader*)var1)->GetTaskStatus(var0->unknown_10_) == 0) {
            return 0;
        }
        var0->unknown_e_ = 3;
        return func_020dfd40(var0, 0, 0);
    case 3: {
        void* var2 = 0;
        unsigned int var3 = 0;
        short var4;
        ((BackgroundLoader*)var1)->GetLoadedFileByID(var0->unknown_10_, &var2, &var3);
        if (var0->unknown_c_ < 0) {
            func_020dfec0(var0, var0->unknown_14_, var2, var3);
        } else {
            var4 = var0->unknown_c_;
            func_020e0028(var0, var0->unknown_14_, var2, var3, &var4, 1);
        }
        func_020dfe88((Struct_020dfc40*)var0);
        return 1;
    }
    default:
        return 1;
    }
}
