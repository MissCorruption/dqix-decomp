#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "Filesystem/FileIO.h"

struct Struct_0201099c_14 {
    unsigned char unknown_0_[0xc];
    short unknown_c_;
    int unknown_10_;
};
extern "C" void func_020dfc40(Struct_0201099c_14* arg0);

struct Struct_02153694_2 {
    Struct_0201099c_14 unknown_0_;
    unsigned char unknown_14_[4];
};

extern Struct_02153694_2 data_02153694[2];
extern SafeAllocator data_02153680;


extern "C" void func_020dfec0(void* arg0, void* arg1, void* arg2, unsigned int arg3);

extern char data_020f2dd4;
extern char data_020f2de9;
extern char data_020f2dfa;
extern char data_020f2e0e;

// USA: func_020e5114
extern "C" ARM int func_020e5114(void) {
    data_02153680.Reset();
    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();
    for (int var0 = 0; var0 < 2; var0++) {
        Struct_02153694_2* var1 = &data_02153694[var0];
        func_020dfc40(&var1->unknown_0_);
        unsigned int var2;
        void* var3;
        if (var0 != 0) {
            var3 = ExtractFileFromGP2((const char*)&data_020f2dd4, (const char*)&data_020f2de9, &var2);
        } else {
            var3 = ExtractFileFromGP2((const char*)&data_020f2dfa, (const char*)&data_020f2e0e, &var2);
        }
        if (var3 != NULL) {
            func_020dfec0(var1, &data_02153680, var3, var2);
        }
    }
    BackgroundLoader::RemoveLockGlobal();
    return 0;
}
