#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_021592d8_2384 = 0x8b8 };
extern "C" void func_020474a8(void*, int, const char*, char*);
#else
enum { Enum_ov003_021592d8_2384 = 0x950 };
#endif
#include "std_library_functions.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"

struct Struct_ov003_021592d8 {
    char unknown_0_[0x138];
    int unknown_138_[0xd];
    unsigned short unknown_16c_[0xd];
    char unknown_186_[Enum_ov003_021592d8_2384 - 0x186];
    int unknown_950_;
};

struct Struct_ov003_021592d8_2 {
    char unknown_0_[4];
    short unknown_4_;
#if defined(jpn)
    char unknown_6_[0x134 - 6];
    char* unknown_134_;
#endif
};

struct Struct_ov003_021592d8_3 {
    char unknown_0_[0x10];
    void* unknown_10_;
};

struct Struct_ov003_021592d8_4 {
    int unknown_0_;
    char unknown_4_[0x54 - 4];
};

struct Struct_ov003_021592d8_5 {
    char unknown_0_[0xc];
};

struct Struct_0201099c_3;
struct Struct_02046574_2;
struct Struct_020465c0;

struct Struct_ov003_021592d8_6 {
    char unknown_0_[0x64];
    char unknown_64_[0x18];
};

extern "C" struct Struct_ov003_021592d8_3* func_020421a0();
extern "C" struct Struct_ov003_021592d8* func_02053c6c(unsigned char* arg0);
extern "C" void func_02046380(void* arg0);
extern "C" void func_020e4bf4(void* arg0, int arg1);
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" void func_02046574(struct Struct_02046574_2* arg0, int arg1, char* arg2);
extern "C" void* func_0208247c(void* arg0);
extern "C" int func_02082490(void* arg0, void* arg1, unsigned int arg2, int arg3, int arg4);
extern "C" void func_020465c0(struct Struct_020465c0* arg0, int arg1, int arg2);
extern "C" void func_020465f0(unsigned char* arg0, int arg1, unsigned char arg2);
extern "C" void func_02046608(void* arg0, int arg1, const char* arg2, char* arg3, int arg4, int arg5, int arg6);

extern char data_ov003_0217fe18[];
extern unsigned char data_0211e33c[0x30000];

// USA: func_ov003_021592d8
extern "C" ARM void func_ov003_021592d8(struct Struct_ov003_021592d8_6* arg0, struct Struct_ov003_021592d8_2* arg1,
                                        char* arg2) {
    if (arg2 == NULL || arg1 == NULL) {
        return;
    }
    struct Struct_ov003_021592d8_3* var0 = func_020421a0();
    struct Struct_ov003_021592d8* var1 = func_02053c6c((unsigned char*)arg1);
    int var2 = var1->unknown_950_;
    func_02046380(var0);
#if defined(jpn)
    func_02046574((struct Struct_02046574_2*)var0, 0, arg1->unknown_134_);
#else
    struct Struct_ov003_021592d8_5 var3;
    func_020e4bf4(&var3, arg1->unknown_4_);
    var0->unknown_10_ = &var3;
#endif
    int var4;
    if (var1->unknown_16c_[var2] == 99) {
        func_02046574((struct Struct_02046574_2*)var0, 1,
                               (char*)func_020e0434((struct Struct_0201099c_3*)arg0->unknown_64_,
                                                            (short)(var1->unknown_950_ + 0x1e)));
        var4 = 0x3fe;
    } else {
        char var5[0x28];
        unsigned int var6;
        sprintf(var5, data_ov003_0217fe18, var1->unknown_950_);
        BackgroundLoader::AddLockGlobal();
        void* var7 = LoadFileIntoMemory(var5, data_0211e33c, &var6);
        struct Struct_ov003_021592d8_4 var8;
        func_0208247c(&var8);
        if (var7 != NULL) {
            func_02082490(&var8, var7, var6, var1->unknown_16c_[var2] + 1, 0);
        }
        struct Struct_ov003_021592d8_4* var9 = &var8;
        int var10 = 0;
        if (var9 != NULL) {
            var10 = var9->unknown_0_ - var1->unknown_138_[var2];
        }
        if (var10 > 0) {
            func_020465c0((struct Struct_020465c0*)var0, 0, var10);
            func_020465f0((unsigned char*)var0, 0, 0);
            var4 = 0x3fd;
        } else {
            var4 = 0x3ff;
        }
        BackgroundLoader::RemoveLockGlobal();
    }
#if defined(jpn)
    func_020474a8(var0, 0xc, (const char*)func_020e0434((struct Struct_0201099c_3*)arg0->unknown_64_, var4), arg2);
#else
    func_02046608(var0, 0xc, (const char*)func_020e0434((struct Struct_0201099c_3*)arg0->unknown_64_, var4), arg2,
                  0xe3, 0, 1);
#endif
}
