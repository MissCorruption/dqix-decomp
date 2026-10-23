#include <globaldefs.h>

#include "Filesystem/FileIO.h"
#include "std_library_functions.h"

extern "C" void *__clear(void *arg0, int arg1);
extern const char data_020f0049[24];
extern const char data_020f0061[24];

struct Struct_0204254c {
    int unknown_0_;
    char unknown_4_;
    signed char unknown_5_0_ : 6;
    signed char unknown_5_6_ : 2;
    char unknown_6_[2];
};

struct Struct_020425e4 {
    unsigned short unknown_0_;
    signed char unknown_2_;
    unsigned char unknown_3_;
};

struct Struct_02042804 {
    unsigned char unknown_0_[4];
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    Struct_020425e4 *unknown_c_;
    Struct_0204254c *unknown_10_;
    void *unknown_14_;
};

struct Struct_02042804_2 {
    unsigned char unknown_0_[12];
    void *unknown_c_;
};

// USA: func_02042804
extern "C" ARM void func_02042804(void *arg0, const char *arg1, int *arg2, int *arg3) {
    SafeAllocator *var0 = static_cast<SafeAllocator *>(arg0);
    char var1[64];
    __clear(var1, sizeof(var1));
    sprintf(var1, data_020f0049, arg1);
    unsigned int var2 = 0;
    LoadFileIntoMemory(var1, data_0211e33c, &var2);
    if (var2 != 0) {
        *arg2 = reinterpret_cast<int>(var0->Allocate(var2));
        memcpy(reinterpret_cast<void *>(*arg2), data_0211e33c, var2);
        Struct_02042804 *var3 = reinterpret_cast<Struct_02042804 *>(*arg2);
        char *var4               = reinterpret_cast<char *>(var3);
        var3->unknown_c_             = reinterpret_cast<Struct_020425e4 *>(var4 + reinterpret_cast<int>(var3->unknown_c_));
        var3->unknown_10_          = reinterpret_cast<Struct_0204254c *>(var4 + reinterpret_cast<int>(var3->unknown_10_));
        var3->unknown_14_        = var4 + reinterpret_cast<int>(var3->unknown_14_);
        for (unsigned int var5 = 0; var5 < var3->unknown_4_; ++var5) {
            var3->unknown_10_[var5].unknown_0_ = reinterpret_cast<int>(var4 + var3->unknown_10_[var5].unknown_0_);
        }
    }

    memset(var1, 0, sizeof(var1));
    sprintf(var1, data_020f0061, arg1);
    var2 = 0;
    LoadFileIntoMemory(var1, data_0211e33c, &var2);
    if (var2 != 0) {
        *arg3 = reinterpret_cast<int>(var0->Allocate(var2));
        memcpy(reinterpret_cast<void *>(*arg3), data_0211e33c, var2);
        Struct_02042804_2 *var6 = reinterpret_cast<Struct_02042804_2 *>(*arg3);
        var6->unknown_c_            = reinterpret_cast<char *>(var6) + reinterpret_cast<int>(var6->unknown_c_);
    }
}
