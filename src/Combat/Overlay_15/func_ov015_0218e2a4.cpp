#if defined(jpn)
#define R(j,u) (j)
#define data_ov008_0218b490 data_ov008_0218c0f1
#define data_ov014_021896d4 data_ov014_0218a4e4
#define data_ov014_0218981c data_ov014_0218a5fc
#define data_ov015_02193d20 data_ov015_02194850
#define data_ov015_02193fe0 data_ov015_02194b20
#define data_ov015_02194052 data_ov015_02194b92
#define data_ov015_02194078 data_ov015_02194bb8
#define data_ov015_0219415c data_ov015_02194c9c
#define data_ov015_02194160 data_ov015_02194ca0
#define data_ov015_02194167 data_ov015_02194ca7
#define func_ov008_021895a8 func_ov008_0218a2b0
#define func_ov008_02189c70 func_ov008_0218a930
#define func_ov008_0218aee4 func_ov008_0218bb50
#define func_ov014_021886f8 func_ov014_021895c8
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "World/Object3D.h"
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "NitroSDK/NSBXX/Animation.h"

extern "C" void __clear(void*, unsigned long);
struct Struct_0203d028;
extern "C" void func_0207df50(Struct_0203d028*);
extern "C" void func_0207df90(char*);
extern "C" void func_0207dfac(char*);
struct Struct_0203d028_11;
extern "C" void func_0203dafc(Struct_0203d028_11*);
struct Struct_0204a120_2;
struct Struct_020a3568;
extern "C" Struct_0204a120_2* func_020100cc(char*);
extern "C" void func_020a2cf0(Struct_0204a120_2*);
extern "C" void func_020a3568(Struct_020a3568*, int);
ModelRenderContext* GetModel3DContext(Model3D*);
extern "C" void func_ov015_0218bb3c(RenderCommandHandler*);
extern char data_ov015_02194078[];
extern char data_ov015_02194052[];
extern char data_ov015_0219415c[];
extern char data_ov015_02194160[];
extern char data_ov015_02194167[];
extern Vector3i data_ov015_02193d20;
#if defined(jpn)
struct Struct_ov015_02193fe0 { unsigned char unknown_2_; unsigned char unknown_1_; unsigned char unknown_0_; };
#else
struct Struct_ov015_02193fe0 { unsigned char unknown_0_; unsigned char unknown_1_; unsigned char unknown_2_; };
#endif
extern Struct_ov015_02193fe0 data_ov015_02193fe0;
struct Struct_ov015_0218e2a4 { Struct_0203d028* unknown_0_; };
struct Struct_ov015_0218e2a4_2 {
    int unknown_0_;
    Struct_ov015_0218e2a4* unknown_4_;
    SafeAllocator* unknown_8_;
    int unknown_c_;
    char unknown_10_[0xc];
    unsigned char unknown_1c_;
    char unknown_1d_[7];
    Object3D* unknown_24_;
    char unknown_28_[0x1c];
    int unknown_44_;
};
struct Struct_ov015_0218e2a4_3 { int unknown_0_; int unknown_4_; };

// USA: func_ov015_0218e2a4
extern "C" ARM int func_ov015_0218e2a4(Struct_ov015_0218e2a4_2* arg0, Struct_ov015_0218e2a4_3* arg1) {
    if (!arg1->unknown_4_) return 0;
    char var0[0x20];
    __clear(var0, 0x20);
    arg0->unknown_8_->Reset();
    int var1 = 1;
    Struct_0203d028* var2 = arg0->unknown_4_->unknown_0_;
    func_0207df50(var2);
    func_0207df90((char*)var2);
    if (arg0->unknown_1c_ == 5) sprintf(var0, data_ov015_02194078, arg1->unknown_4_);
    else sprintf(var0, data_ov015_02194052, arg1->unknown_4_);
    BackgroundLoader::AddLockGlobal();
    unsigned int var3 = 0;
    if (!LoadFileIntoMemory(var0, data_0211e33c, &var3)) var1 = 0;
    else {
        ObjectArchiveLoadInfo var4;
        func_0203dafc((Struct_0203d028_11*)&var4);
        SafeAllocator* var5 = arg0->unknown_8_;
        unsigned int var6 = var3;
        const void* var7 = data_0211e33c;
        int var8 = 1;
        var4.allocator = var5;
        var4.fileData = var7;
        var4.unk_8 = var6;
        var4.unk_10 = var8;
        arg0->unknown_24_->LoadFromCHRArchive(&var4);
        Model3D* var9 = arg0->unknown_24_->pModel_;
        data_ov015_02193fe0.unknown_1_ = var9->GetBoneIndex(data_ov015_0219415c);
        data_ov015_02193fe0.unknown_2_ = var9->GetBoneIndex(data_ov015_02194160);
        data_ov015_02193fe0.unknown_0_ = var9->GetBoneIndex(data_ov015_02194167);
        ModelRenderContext* var10 = GetModel3DContext(var9);
        SetModelRenderContextRenderCommandHook(var10, func_ov015_0218bb3c, 0, 6, 3);
        var10->flags_ |= 4;
        Vector3i var11 = data_ov015_02193d20;
        arg0->unknown_24_->SetScale(&var11);
        arg0->unknown_24_->MaybeSetBCFGAnimation(0, arg0->unknown_44_);
    }
    BackgroundLoader::RemoveLockGlobal();
    func_0207dfac((char*)var2);
    if (!var1) return 0;
    GameState* var12 = GameState::GetInstance();
    if (!var12) return 0;
    Struct_0204a120_2* var13 = func_020100cc((char*)var12);
    if (!var13) return 0;
    func_020a2cf0(var13);
    func_020a3568((Struct_020a3568*)var13, 0);
    arg0->unknown_c_ = arg1->unknown_0_;
    return 1;
}
