#include <globaldefs.h>
#include <GameState/GameState.h>
#include "GameState/Field3b0.h"
#include <Filesystem/BackgroundLoader.h>
extern unsigned char data_0211e33c[0x30000] __attribute__((aligned(4)));
void* LoadFileIntoMemory(const char* path, void* buffer, unsigned int* outLength);
#include <Filesystem/GPC.h>
#include <Memory/SafeAllocator.h>
#include <NitroSDK/Matrix.h>
#include <World/Object3D.h>
#include <std_library_functions.h>
#include "Resource/GameResources.h"

#if defined(jpn)
struct Struct_ov000_02160da0 { char unknown_0_[0x7902]; signed char unknown_7712_; };
#else
struct Struct_ov000_02160da0 { char unknown_0_[0x7712]; signed char unknown_7712_; };
#endif

void ZeroInitGPCPointer(GPCFile**);
void ZeroDestroyGPCPointer(GPCFile**);
struct Struct_0203d028_11;
extern "C" void func_0203dafc(struct Struct_0203d028_11* arg0);
struct Struct_0204a120;
extern "C" void func_0204a120(struct Struct_0204a120* arg0);
struct Struct_0204a3f0_2;
struct Struct_0204a3f0;
extern "C" void func_0204a3f0(struct Struct_0204a3f0_2* arg0, struct Struct_0204a3f0* arg1);
extern "C" void func_0204a440(char* arg0, const char* arg1);
extern "C" void func_0204a464(char* arg0, const char* arg1);
extern "C" void func_020100c4(GameState*, int);
extern "C" void func_0200fd38(GameState*, int, GameObject*);
extern "C" int func_020a35e0(unsigned char*, unsigned char);
extern "C" int func_020a35f8(unsigned char*);
extern "C" void func_02072c9c(int, char*);
struct Struct_02040774_2;
extern "C" void func_020407b4(struct Struct_02040774_2*, int, int, int);
struct GameResources;
void SetBrightness(struct GameResources*, int, int);
void SetMainBrightness(struct GameResources*, int, int);
extern "C" {
void func_ov000_021626a0(Struct_ov000_02160da0*, int, int);
void func_ov000_021637fc(Struct_ov000_02160da0*, int);
void func_ov000_02167e6c(Struct_ov000_02160da0*);
int func_02032370(int);
}

#if defined(jpn)
#define data_ov026_021dee5c data_ov026_021df50a
#define data_ov026_021dee77 data_ov026_021df525
#define data_ov026_021dee84 data_ov026_021df532
#define data_ov026_021dee88 data_ov026_021df536
#define data_ov026_021de6e8 data_ov026_021ded04
#define data_ov026_021dee8f data_ov026_021df53d
#define data_ov026_021dee9c data_ov026_021df54a
#define data_ov026_021deeb5 data_ov026_021df563
#endif
extern const char data_ov026_021dee5c[];
extern const char data_ov026_021dee77[];
extern const char data_ov026_021dee84[];
extern const char data_ov026_021dee88[];
#if defined(jpn)
struct Struct_ov026_021de6a0_3 { unsigned char unknown_0_[2]; unsigned char unknown_4_; unsigned char unknown_5_; };
#else
struct Struct_ov026_021de6a0_3 { unsigned char unknown_0_[4]; unsigned char unknown_4_; unsigned char unknown_5_; };
#endif
extern const Struct_ov026_021de6a0_3 data_ov026_021de6a0;
struct Struct_ov026_021de6e8 { int unknown_0_[4]; };
struct Struct_ov026_021dc440 { signed char unknown_0_[2]; };
extern const Struct_ov026_021de6e8 data_ov026_021de6e8;
extern const char data_ov026_021dee8f[];
struct Struct_ov026_021d8ba0_3 {
    char unknown_0_[8][3];
    int unknown_18_;
    const char* unknown_1c_[8];
};
#if defined(jpn)
struct Struct_ov026_021dedac { const char* unknown_1c_[8]; };
#define _ZZ23inline_ov026_021d8ba0_2vE1s data_ov026_021dedac
extern "C" Struct_ov026_021dedac _ZZ23inline_ov026_021d8ba0_2vE1s;
#else
extern "C" Struct_ov026_021d8ba0_3 _ZZ23inline_ov026_021d8ba0_2vE1s;
#endif
extern const char data_ov026_021dee9c[];
extern const char data_ov026_021deeb5[];

// USA: func_ov026_021dc440
extern "C" ARM void func_ov026_021dc440(SafeAllocator* arg0, Struct_ov000_02160da0* arg1, void* arg2, unsigned char* arg3, const char* arg4) {
    GPCReadPair var0;
    unsigned int var1;
    char var2[0x50];
    GameState* var3 = GameState::GetInstance();
    GameResources* var4 = GetGameResources();
    int var5 = arg1->unknown_7712_;
    func_ov000_021626a0(arg1, 0x26, 1);
    func_ov000_021626a0(arg1, 0x27, 0);
    func_ov000_02167e6c(arg1);
    if (var5 != 5) arg0->Reset();
    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();

    GPCReadPair* var6 = &var0;
    unsigned char* var7 = data_0211e33c;
    unsigned int var8 = 0x30000;
    ZeroInitGPCPointer(&var6->pGPCFile);
    var6->ZeroInitializeMachine();
    if (LoadAndDecompressGPCHeaderAndInnerFileInfo(&var0.pGPCFile, var0.machine, data_ov026_021dee5c, var7, var1, var8, false, 0)) {
        var7 += var1;
        var8 -= var1;
        if (DecompressFileFromGPCByName(var0.pGPCFile, var0.machine, var7, var1, var8, data_ov026_021dee77)) {
            Object3D* var9 = (Object3D*)arg0->Allocate(0xac);
            if (var9) {
                var9->Initialize();
                ObjectArchiveLoadInfo var10;
                func_0203dafc((Struct_0203d028_11*)&var10);
                var10.unk_8 = var1;
                var10.unk_10 = 1;
                var10.allocator = arg0;
                var10.fileData = var7;
                var9->LoadFromCHRArchive(&var10);
                char* var11 = (char*)arg0->Allocate(0x268);
                if (var11) {
                    func_0204a120((Struct_0204a120*)var11);
                    func_0204a3f0((Struct_0204a3f0_2*)var11, (Struct_0204a3f0*)var9);
                    func_0204a440(var11, data_ov026_021dee84);
                    func_0204a464(var11, data_ov026_021dee88);
                    func_020100c4(var3, (int)var11);
                    Struct_ov026_021dc440 var12;
                    var12.unknown_0_[0] = data_ov026_021de6a0.unknown_4_;
                    var12.unknown_0_[1] = data_ov026_021de6a0.unknown_5_;
                    if (!arg4) {
                        var12.unknown_0_[0] += func_02032370(3);
                        arg4 = (const char*)var12.unknown_0_;
                    }
                    var9->MaybeSetRegularAnimation(arg4, 1);
                    Struct_ov026_021de6e8 var13 = data_ov026_021de6e8;
                    int var14 = 0x10a;
                    int var15 = var13.unknown_0_[func_020a35f8(arg3) - 1];
                    int var16 = FIX32_MULTIPLY(var14, var15);
                    var9->SetScale(var16, var14, var16);
                    int var17 = FIX32_MULTIPLY(var15, var15);
                    int var18 = FIX32_MULTIPLY(var17, var15);
                    func_020407b4((Struct_02040774_2*)var9, 0, 0xcc, -var18);
                }
            }
        }
        if (DecompressFileFromGPCByName(var0.pGPCFile, var0.machine, var7, var1, var8, data_ov026_021dee8f)) {
            Object3D* var19 = (Object3D*)arg0->Allocate(0xac);
            if (var19) {
                var19->Initialize();
                ObjectArchiveLoadInfo var20;
                func_0203dafc((Struct_0203d028_11*)&var20);
                var20.unk_8 = var1;
                var20.unk_10 = 1;
                var20.allocator = arg0;
                var20.fileData = var7;
                var19->LoadFromCHRArchive(&var20);
                func_020407b4((Struct_02040774_2*)var19, 0, 0xcc, 0);
                var19->SetScale(0x10a, 0x10a, 0x10a);
                Model3D* var21 = var19->pModel_;
                Object3D::TrackedBoneMatrix* var22 = (Object3D::TrackedBoneMatrix*)arg0->Allocate(0x1c0);
                if (var22 && var21) {
                    for (int var23 = 0; var23 < 8; ++var23) {
                        int var24 = var21->GetBoneIndex(_ZZ23inline_ov026_021d8ba0_2vE1s.unknown_1c_[var23]);
                        var22[var23].boneIndex = var24;
                        var19->TrackBone(&var22[var23]);
                    }
                }
                var19->EnableBoneTracking();
                func_0200fd38(var3, 0xcf, (GameObject*)var19);
            }
        }
        for (int var25 = 0; var25 < 4; ++var25) {
            if (func_020a35e0(arg3, var25)) {
                GameObject* var26 = func_0200ff1c(var3, var25);
                if (var26) {
                    char var27[0x14];
                    func_02072c9c(var25, var27);
#if defined(jpn)
                    enum { Enum_ov026_021dc440_452 = 0x1b8 };
#else
                    enum { Enum_ov026_021dc440_452 = 0x1c4 };
#endif
                    if (*(int*)((char*)var26 + Enum_ov026_021dc440_452)) {
                        sprintf(var2, data_ov026_021dee9c);
                        LoadFileIntoMemory(var2, data_0211e33c, &var1);
                        var7 = data_0211e33c;
                    } else {
                        sprintf(var2, data_ov026_021deeb5, var27);
                        DecompressFileFromGPCByName(var0.pGPCFile, var0.machine, var7, var1, var8, var2);
                    }
                    if (var1) {
                        ObjectArchiveLoadInfo var28;
                        func_0203dafc((Struct_0203d028_11*)&var28);
                        var28.unk_10 = 1;
                        var28.packageID = 3;
                        var28.unk_8 = var1;
                        var28.allocator = arg0;
                        var28.fileData = var7;
                        var26->obj3D_.LoadFromCCHROrCMOTArchive(&var28, 0);
                        func_ov000_021637fc(arg1, var25);
                    }
                }
            }
        }
        var0.Reset();
    }
    BackgroundLoader::RemoveLockGlobal();
    if (var5 == 5) SetBrightness(var4, 0, 0xf);
    else SetMainBrightness(var4, 0, 0xf);
    var0.Reset();
    ZeroDestroyGPCPointer(&var0.pGPCFile);
}
