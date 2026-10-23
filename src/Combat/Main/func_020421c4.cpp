#include <globaldefs.h>
extern unsigned char data_0211e33c[0x30000] __attribute__((aligned(4)));
#include "Memory/SafeAllocator.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/GPC.h"
#include "Filesystem/FileIO.h"
#include "std_library_functions.h"

struct Struct_020421c4 {
    int unknown_0_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    char unknown_a_;
};

struct Struct_020421c4_2 {
    char* unknown_0_;
    short unknown_4_;
    char unknown_6_[4];
    unsigned char unknown_a_;
};

struct Struct_020421c4_3 {
    char unknown_0_[8];
    char* unknown_8_;
    char* unknown_c_;
};

struct Struct_020421c4_4;

struct Struct_020421c4_5 {
    char unknown_0_[0x34];
    void* unknown_34_;
    char unknown_38_[0x10];
    void* unknown_48_;
    void* unknown_4c_;
    void* unknown_50_;
    char unknown_54_[8];
    void* unknown_5c_;
    void* unknown_60_;
    void* unknown_64_;
    char unknown_68_[0x26c];
    void* unknown_2d4_;
};

struct Struct_02107800 {
    void* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
    void* unknown_10_;
    void* unknown_14_;
    void* unknown_18_;
    struct Struct_020421c4_5* unknown_1c_;
    char unknown_20_[4];
    void* unknown_24_;
    void* unknown_28_;
};

extern struct Struct_02107800 data_02107800;
extern SafeAllocator data_0210783c;
extern char data_020f000b;
extern char data_020f0023;
extern char data_020f003f;

extern "C" void func_02042944(void*);
extern "C" void func_0204a82c(struct Struct_020421c4*);
extern "C" int func_0204aa48(struct Struct_020421c4_2*);
extern "C" void func_02094a24(struct Struct_020421c4_4*);
extern "C" void func_02094a20(void*, SafeAllocator*);
extern "C" void func_02094a10(int);
extern "C" void func_02042998(struct Struct_020421c4_3*);

// USA: func_020421c4
extern "C" ARM void func_020421c4(SafeAllocator* arg0) {
    unsigned int var0;
    struct Struct_020421c4 var1;
    GPCReadPair var2;
    unsigned int var3;
    unsigned int var4;
    unsigned int var5;
    unsigned int var6;
    void* var7;
    void* var8;
    struct Struct_020421c4_5* var9;
    unsigned int var10;
    unsigned char* var11;
    unsigned int var12;

    var8 = arg0->Allocate(0x400);
    data_0210783c.CreateTypeA(var8, 0x400);
    data_02107800.unknown_1c_ = (struct Struct_020421c4_5*)arg0->Allocate(0x1e2c);
    data_02107800.unknown_0_ = arg0->Allocate(0xf99);
    data_02107800.unknown_1c_->unknown_34_ = arg0->Allocate(0xe0);
    data_02107800.unknown_14_ = arg0->Allocate(0x960);
    data_02107800.unknown_8_ = arg0->Allocate(0x280);
    data_02107800.unknown_28_ = arg0->Allocate(0x280);
    data_02107800.unknown_24_ = arg0->Allocate(0x960);
    data_02107800.unknown_18_ = arg0->Allocate(0x960);
    data_02107800.unknown_c_ = arg0->Allocate(0x960);
    func_02042944(arg0);
    BackgroundLoader::AddLockGlobal();

    var0 = 0;
    var7 = LoadFileIntoMemory(&data_020f000b, data_0211e33c, &var0);
    func_0204a82c(&var1);
    if (var7 != 0) {
        memcpy(&var1, var7, 0xc);
    }
    var6 = func_0204aa48((struct Struct_020421c4_2*)&var1);
    var8 = arg0->Allocate(var6);
    data_02107800.unknown_4_ = var8;
    memcpy(var8, (void*)((int)data_0211e33c + 0x10), var6);

    GPCReadPair* var13 = &var2;
    var10 = 0;
    var3 = var10;
    var11 = data_0211e33c;
    var12 = 0x30000;
    ZeroInitGPCPointer(&var13->pGPCFile);
    var13->ZeroInitializeMachine();
    if (LoadAndDecompressGPCHeaderAndInnerFileInfo(&var2.pGPCFile, var2.machine, &data_020f0023,
            var11, var3, var12, 0, 0)) {
        var5 = var3;
        DecompressFileFromGPCByName(var2.pGPCFile, var2.machine, var11 + var5, var3,
            var12 - var5, &data_020f003f);
        var12 = (var3 + 3) & ~3;
        var2.Reset();
        var12 = var10 + (var10 + (var10 + var12));
        var3 = var12;
        memcpy((void*)0x01ff9740, var11 + var5, var12);
    }

    BackgroundLoader::RemoveLockGlobal();
    data_0210783c.Reset();
    var9 = data_02107800.unknown_1c_;
    var9->unknown_2d4_ = &data_0210783c;
    var8 = arg0->Allocate(0x68);
    func_02094a24((struct Struct_020421c4_4*)var8);
    func_02094a20(var8, arg0);
    func_02094a10((int)var8);
    func_02042998((struct Struct_020421c4_3*)((char*)0x01ff9740 + var10));
    if ((char*)0x01ff9740 + var10 != 0) {
        data_02107800.unknown_10_ = (void*)((char*)0x01ff9740 + var10);
    }
    data_02107800.unknown_1c_->unknown_48_ = data_02107800.unknown_14_;
    data_02107800.unknown_1c_->unknown_4c_ = data_02107800.unknown_8_;
    data_02107800.unknown_1c_->unknown_50_ = data_02107800.unknown_28_;
    data_02107800.unknown_1c_->unknown_5c_ = data_02107800.unknown_24_;
    data_02107800.unknown_1c_->unknown_60_ = data_02107800.unknown_18_;
    data_02107800.unknown_1c_->unknown_64_ = data_02107800.unknown_c_;
    var2.Reset();
    ZeroDestroyGPCPointer(&var2.pGPCFile);
}
