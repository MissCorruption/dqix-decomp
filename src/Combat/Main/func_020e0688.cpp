#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_020e0688_2 {
    unsigned char unknown_0_[0x55c];
    unsigned char unknown_55c_;
#if defined(jpn)
    unsigned char unknown_55d_[0x6bc - 0x55d];
#else
    unsigned char unknown1_55d_[0x768 - 0x55d];
#endif
    unsigned char unknown_768_;
    unsigned char unknown_769_[0x9c5 - 0x769];
    unsigned char unknown_9c5_;
    unsigned char unknown_9c6_[0xa0c - 0x9c6];
    int unknown_a0c_;
};

struct Struct_02012de8;
extern "C" int func_02046708(struct Struct_02012de8* arg0, unsigned int arg1);
extern "C" void* func_020d6c00(void);
extern "C" void func_02022b90(void* arg0, int* arg1);
extern "C" void func_020c9820(void);

struct Struct_02020cb8_4;
extern "C" int func_02046900(struct Struct_02020cb8_4* arg0);

struct Struct_02020aec;
extern "C" void* func_020467f0(struct Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);

struct Struct_02020cb8;
extern "C" void func_0204af64(struct Struct_02020cb8* arg0);

extern "C" void func_0204b11c(unsigned char* arg0, int arg1);

extern "C" void func_0204b5b4(void*, int);

struct Struct_02020cb8_5;
extern "C" int func_0204b5e8(struct Struct_02020cb8_5* arg0, int arg1, int arg2);

extern "C" void func_0204b2e0(void* arg0, char* arg1);

struct Struct_02020cb8_6;
extern "C" void func_0204b3a0(struct Struct_02020cb8_6* arg0, char* arg1);

struct Struct_02020cb8_2;
extern "C" void func_0204b0e8(struct Struct_02020cb8_2* arg0, void* arg1);

struct Struct_02020cb8_3;
extern "C" void func_0204afb4(struct Struct_02020cb8_3* arg0);

struct Struct_020e0688 {
    unsigned char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_[3];
};

// USA: func_020e0688
extern "C" ARM void func_020e0688(struct Struct_020e0688_2* arg0) {
    if (arg0->unknown_9c5_ == 0) {
        return;
    }

    if (func_02046708((struct Struct_02012de8*)func_020d6c00(), 0x41)) {
        return;
    }

    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    int var1 = var0->GetTaskStatus(arg0->unknown_a0c_);
    if (var1 == 0) {
        return;
    }

    if (var1 == -1) {
        *(volatile unsigned int*)0x04001000 = (*(volatile unsigned int*)0x04001000 & ~0x1f00) | 0x200;
        arg0->unknown_768_ = 0;
    } else {
        int var2 = 0;
        int var3 = 0;
        void* var4;
        void* var5[3];
        int var6[3];
        Struct_020e0688 var7;

        var0->GetLoadedFileByID(arg0->unknown_a0c_, (void**)(&var2), (unsigned int*)(&var3));
        int var8 = func_02046900((struct Struct_02020cb8_4*)var2);
        for (int var9 = 0; var9 < var8; var9++) {
            var5[var9] = func_020467f0((struct Struct_02020aec*)var2, var9, &var4, &var6[var9]);
        }

        func_020c9820();
        func_0204af64((struct Struct_02020cb8*)&var7);
        var7.unknown_1c_0_ = 1;
        var7.unknown_1c_4_ = 0;
        func_0204b5b4(&var7, 2);
        func_0204b11c((unsigned char*)&var7, 0);
        func_0204b5e8((struct Struct_02020cb8_5*)&var7, 0, 0);

        for (int var10 = 0; var10 < var8; var10++) {
            func_0204b2e0(&var7, (char*)var5[var10]);
            func_0204b3a0((struct Struct_02020cb8_6*)&var7, (char*)var5[var10]);
        }

        func_0204b0e8((struct Struct_02020cb8_2*)&var7, 0);
        func_0204afb4((struct Struct_02020cb8_3*)&var7);
    }

    func_02022b90(arg0, &arg0->unknown_a0c_);
    arg0->unknown_55c_ = 1;
    arg0->unknown_9c5_ = 0;
}
