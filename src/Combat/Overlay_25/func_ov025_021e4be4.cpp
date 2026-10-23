#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "World/Object3D.h"
#include "std_library_functions.h"

extern "C" SafeAllocator* func_ov025_021e8a54(char* arg0);
struct Struct_ov025_021e27c8;
extern "C" void func_ov025_021eb084(struct Struct_ov025_021e27c8* arg0, int arg1);
struct Struct_0203d028_11;
extern "C" void func_0203dafc(struct Struct_0203d028_11* arg0);
extern "C" void func_020100c4(GameState* arg0, int arg1);

struct Struct_0204a120;
extern "C" void func_0204a120(struct Struct_0204a120* arg0);
struct Struct_0204a3f0_2;
struct Struct_0204a3f0;
extern "C" void func_0204a3f0(struct Struct_0204a3f0_2* arg0, struct Struct_0204a3f0* arg1);
extern "C" void func_0204a440(char* arg0, const char* arg1);
extern "C" void func_0204a464(char* arg0, const char* arg1);

struct Struct_ov025_021e267c_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    struct Struct_ov025_021e267c_3* unknown_8_;
};
struct Struct_ov025_021e267c_2;
extern "C" void func_ov025_021e8bac(struct Struct_ov025_021e267c_2* arg0, struct Struct_ov025_021e267c_3* arg1);

struct Struct_ov025_021ef988_11 {
#if defined(jpn)
    char unknown_0_[4];
#else
    char unknown1_0_[0xc];
#endif

    char* unknown_c_;
};

struct Struct_ov025_021e4be4 {
    char unknown_0_[8];
    char* unknown_8_;
};

extern struct Struct_ov025_021ef988_11 data_ov025_021ef988;
extern char data_ov025_021eef78[];
extern const char data_ov025_021ef7f7[];
extern const char data_ov025_021ef7fb[];

// USA: func_ov025_021e4be4
extern "C" ARM int func_ov025_021e4be4(struct Struct_ov025_021e4be4* arg0) {
    GameState* var0 = GameState::GetInstance();
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    SafeAllocator* var2 = func_ov025_021e8a54(data_ov025_021ef988.unknown_c_);

    char var3[0x28];
    int var4 = 0x28;
    unsigned char* var5 = (unsigned char*)var3;
    unsigned char* var6 = (unsigned char*)data_ov025_021eef78;
    do {
        *var5 = *var6;
        var5++;
        var6++;
    } while (--var4);
    strcat(var3, arg0->unknown_8_);

    void* var7;
    unsigned int var8;
    int var9 = var1->GetLoadedFileByName(var3, &var7, &var8);
    if (var7 == NULL) {
        if (var9 >= 0) {
            var1->RemoveTask(var9);
            func_ov025_021eb084((struct Struct_ov025_021e27c8*)data_ov025_021ef988.unknown_c_, var9);
        }
        return 1;
    }

    Object3D* var10 = (Object3D*)var2->Allocate(sizeof(Object3D));
    if (var10 == NULL) {
        var1->RemoveTask(var9);
        func_ov025_021eb084((struct Struct_ov025_021e27c8*)data_ov025_021ef988.unknown_c_, var9);
        return 1;
    }

    Struct_ov025_021e267c_3* var11 = (Struct_ov025_021e267c_3*)var2->Allocate(sizeof(Struct_ov025_021e267c_3));
    if (var11 == NULL) {
        var1->RemoveTask(var9);
        func_ov025_021eb084((struct Struct_ov025_021e27c8*)data_ov025_021ef988.unknown_c_, var9);
        return 1;
    }

    var10->Initialize();
    ObjectArchiveLoadInfo var12;
    func_0203dafc((struct Struct_0203d028_11*)&var12);
    var12.fileData = var7;
    var12.unk_8 = var8;
    var12.allocator = var2;
    var12.unk_10 = 1;
    if (!var10->LoadFromCHRArchive(&var12)) {
        var1->RemoveTask(var9);
        func_ov025_021eb084((struct Struct_ov025_021e27c8*)data_ov025_021ef988.unknown_c_, var9);
        return 1;
    }
    var1->RemoveTask(var9);
    func_ov025_021eb084((struct Struct_ov025_021e27c8*)data_ov025_021ef988.unknown_c_, var9);

    char* var13 = (char*)var2->Allocate(0x268);
    if (var13 == NULL) {
        var1->RemoveTask(var9);
        func_ov025_021eb084((struct Struct_ov025_021e27c8*)data_ov025_021ef988.unknown_c_, var9);
        return 1;
    }

    func_0204a120((struct Struct_0204a120*)var13);
    func_0204a3f0((struct Struct_0204a3f0_2*)var13, (struct Struct_0204a3f0*)var10);
    func_0204a440(var13, data_ov025_021ef7f7);
    func_0204a464(var13, data_ov025_021ef7fb);
    func_020100c4(var0, (int)var13);
    var11->unknown_0_ = 3;
    func_ov025_021e8bac((struct Struct_ov025_021e267c_2*)data_ov025_021ef988.unknown_c_, var11);
    return 1;
}
