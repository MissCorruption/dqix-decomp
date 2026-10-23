#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Filesystem/NarcHandle.h"
#include "Filesystem/FileIO.h"
#include "NitroSDK/Filesystem/FileAccessor.h"
#include "NitroSDK/Filesystem/LowNitroHandle.h"
#include "World/Zone3D.h"
extern "C" char* strcpy(char*, const char*);
extern "C" int sprintf(char*, const char*, ...);
extern "C" char* strstr(const char*, const char*);

struct Struct_0203d028_6;
struct Struct_0203cfb4;
struct Struct_02013fb4;
struct Struct_0203dce4_2;
struct Struct_ov017_021a2c14 { int unknown_0_; Vector3i unknown_4_; };
struct Struct_ov017_021a2c14_2 { unsigned int unknown_0_; unsigned char unknown_4_[0x10]; Struct_ov017_021a2c14* unknown_14_; Object3D* unknown_18_; };
#if defined(jpn)
enum { Enum_ov017_021a2c14_1500 = 0x58c };
#define data_ov017_021d76a6 data_ov017_021d7ae6
#define data_ov017_021d76bb data_ov017_021d7afb
#define data_ov017_021d76bf data_ov017_021d7aff
#define data_ov017_021d76c9 data_ov017_021d7b09
#define data_ov017_021d76d1 data_ov017_021d7b11
#define data_ov017_021d76d4 data_ov017_021d7b14
#else
enum { Enum_ov017_021a2c14_1500 = 0x5dc };
#endif
extern "C" void* func_0203cf4c();
extern "C" int func_0201079c(char*);
extern "C" int func_020107d0(char*);
extern "C" int func_02010804(char*);
extern "C" void func_0203cfb4(Struct_0203cfb4*);
extern "C" Struct_0203d028_6* func_0203d004(void*);
extern "C" void func_020401fc(Struct_0203d028_6*, unsigned int, SafeAllocator*);
extern "C" void* func_0203cffc(void*);
extern "C" void* func_0203cff4(void*);
extern "C" void func_0206da74(int*);
extern "C" void func_02064e20(int*);
extern "C" void func_0206da80(void*, int, int, int, int, SafeAllocator*, const void*, int);
extern "C" void func_02064e2c(int, int, int, Struct_02013fb4*, int);
extern "C" void func_02064e88(void*, void*, SafeAllocator*);
extern "C" void func_0203d028(void*, int, SafeAllocator*, unsigned char*);
extern "C" void func_0203e2c4(void*, unsigned short);
extern "C" void* func_02012fe4();
extern "C" Struct_ov017_021a2c14_2* func_0203dce4(Struct_0203dce4_2*, int);
extern "C" int func_02018fbc(void*, Vector3i*);
extern char data_ov017_021d76a6[];
extern unsigned char data_0211e33c[];
extern char data_ov017_021d76bb[];
extern char data_ov017_021d76bf[];
extern char data_ov017_021d76c9[];
extern char data_ov017_021d76d1[];
extern char data_ov017_021d76d4[];

// USA: func_ov017_021a2c14
extern "C" ARM int func_ov017_021a2c14(GameResources* arg0, Zone3D_StructPtr_8* arg1) {
    GameState* var0 = GameState::GetInstance();
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    void* var2 = func_0203cf4c();
    SafeAllocator* var3 = &arg0->allocator_array_38[7];
    unsigned char* var4 = reinterpret_cast<unsigned char*>(arg0) + Enum_ov017_021a2c14_1500;
    int var5 = arg1->unknown_0_;
    int var6 = func_0201079c((char*)var0);
    int var7 = func_020107d0((char*)var0);
    int var8 = func_02010804((char*)var0);
    func_0203cfb4((Struct_0203cfb4*)var2);
    if (var1->GetNumQueuedTasks() > 0) return 0;
    char var9[0x50];
    NarcHandle var10;
    NitroVM var11;
    char var12[0x50];
    char var13[0x50];
    char var14[8];
    unsigned int var15;
    strcpy(var14, arg1->mapShortName_);
    var14[3] = 0;
    if (var14[0] == 'F') var14[1] = 0;
    BackgroundLoader::AddLockGlobal();
    sprintf(var9, data_ov017_021d76a6, var14);
    if (!LoadFileIntoMemory(var9, data_0211e33c, &var15)) {
        func_020401fc(func_0203d004(var2), 12, var3);
        BackgroundLoader::RemoveLockGlobal();
        return 0;
    }
    if (!var10.Initialize(data_ov017_021d76bb, data_0211e33c)) {
        BackgroundLoader::RemoveLockGlobal();
        return 0;
    }
    NitroVM_Initialize(&var11);
    unsigned int var16;
    unsigned int var17;
    int var18;
    void* var19 = func_0203cffc(var2);
    func_0206da74((int*)var19);
    var16 = 0;
    while (PrepareReadFileInNARCByID(&var11, &var10, var16)) {
        NitroVM_WriteOutFilePath(&var11, var12, 0x50);
        const void* var20 = var10.GetFileByIndex(var16);
        var18 = var11.fileInfo.unknown_8_ - var11.fileInfo.unknown_4_;
        if (strstr(var12, data_ov017_021d76bf)) {
            func_0206da80(var19, var6, var7, var8, var5, var3, var20, var18);
        }
        NitroVM_FinishRead(&var11);
        ++var16;
    }
    void* var21 = func_0203cff4(var2);
    func_02064e20((int*)var21);
    var17 = 0;
    while (PrepareReadFileInNARCByID(&var11, &var10, var17)) {
        NitroVM_WriteOutFilePath(&var11, var13, 0x50);
        const void* var22 = var10.GetFileByIndex(var17);
        var18 = var11.fileInfo.unknown_8_ - var11.fileInfo.unknown_4_;
        if (strstr(var13, data_ov017_021d76c9)) {
            func_02064e2c((int)var21, (int)var19, (int)var3, (Struct_02013fb4*)var22, var18);
            if (strstr(var13, data_ov017_021d76d1) && !strstr(var13, data_ov017_021d76d4)) {
                func_02064e88(var21, var19, var3);
            }
        }
        NitroVM_FinishRead(&var11);
        ++var17;
    }
    var10.Destroy();
    BackgroundLoader::RemoveLockGlobal();
    func_0203d028(var2, 0, var3, var4);
    func_0203e2c4(var2, var5);
    void* var23 = func_02012fe4();
    for (int var24 = 0; var24 < 32; ++var24) {
        Struct_ov017_021a2c14_2* var25 = func_0203dce4((Struct_0203dce4_2*)var2, var24);
        if (!var25 || (var25->unknown_0_ & 0x800) || (var25->unknown_0_ & 0x1000)) continue;
        if (var25->unknown_14_) {
            Vector3i var26 = var25->unknown_14_->unknown_4_;
            var26.y = func_02018fbc(var23, &var26);
            var25->unknown_14_->unknown_4_ = var26;
        } else if (var25->unknown_18_) {
            Vector3i var27 = var25->unknown_18_->position_;
            var27.y = func_02018fbc(var23, &var27);
            var25->unknown_18_->position_ = var27;
        }
    }
    return 1;
}
