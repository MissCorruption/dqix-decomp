#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Resource/GameResources.h"
#include "Combat/CombatantRecovery.h"

struct Struct_0203d028 { unsigned char unknown_0_[0x70]; };
struct Struct_ov017_0218f064_6;
struct Struct_ov017_021bdc34 {
    unsigned char unknown_0_[4];
    SafeAllocator unknown_4_;
    unsigned char unknown_18_[0xcc - 0x18];
    Struct_0203d028 unknown_cc_;
    unsigned char unknown_13c_[0x1ac - 0x13c];
    Struct_0203d028 unknown_1ac_;
    unsigned char unknown_21c_[0x52c - 0x21c];
    SafeAllocator unknown_52c_;
};
struct Struct_ov017_021bdc34_2 {
#if defined(jpn)
    unsigned char unknown_0_[0x4114];
#else
    unsigned char unknown1_0_[0x4334];
#endif
    Object3D* unknown_4334_;
    Object3D* unknown_4338_;
    Object3D* unknown_433c_;
    Object3D* unknown_4340_;
};
struct Struct_ov017_021bdc34_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[6];
    short unknown_8_[4];
    unsigned char unknown_10_;
    unsigned char unknown_11_;
};
extern "C" Struct_ov017_021bdc34* func_ov017_021a11b4(Struct_ov017_0218f064_6*);
extern "C" void func_0207df50(Struct_0203d028*);
extern "C" void func_0207df90(char*);
extern "C" void func_0207dfac(char*);
extern "C" void func_ov017_021bdb78(int);
extern "C" void func_ov017_0218fcf8(int, int, int);
extern "C" void func_ov017_0218f5a4(void*, int, int, int, int);
#if defined(jpn)
extern const char data_ov017_021d85ec[], data_ov017_021d8606[], data_ov017_021d861e[];
extern const char data_ov017_021d8639[], data_ov017_021d8644[], data_ov017_021d864d[], data_ov017_021d8653[];
#else
extern const char data_ov017_021d7e14[], data_ov017_021d7e2e[], data_ov017_021d7e46[];
extern const char data_ov017_021d7e61[], data_ov017_021d7e6c[], data_ov017_021d7e75[], data_ov017_021d7e7b[];
#endif

// USA: func_ov017_021bdc34
// JPN: func_ov017_021be22c
extern "C" ARM void func_ov017_021bdc34(Struct_ov017_021bdc34_3* arg0) {
    GameState* var0 = GameState::GetInstance();
    Struct_ov017_021bdc34_2* var1 = (Struct_ov017_021bdc34_2*)GetGameResources();
    BackgroundLoader* var2 = BackgroundLoader::GetInstance();
    Struct_020236dc_2* var3 = (Struct_020236dc_2*)func_0200ff1c(var0, 0);
    if (var3 == 0) return;
    Struct_ov017_021bdc34* var4 = func_ov017_021a11b4((Struct_ov017_0218f064_6*)var1);
    if (var4 == 0) {
        arg0->unknown_1_ = 1;
        return;
    }
    SafeAllocator* var5[4] = {&var4->unknown_4_, &var4->unknown_4_, &var4->unknown_52c_, &var4->unknown_4_};
    Struct_0203d028* var6[4] = {&var4->unknown_cc_, &var4->unknown_cc_, &var4->unknown_1ac_, &var4->unknown_cc_};
    if (arg0->unknown_10_ == 0) {
        if (arg0->unknown_11_ == 1 && var1->unknown_4334_ != 0 && var1->unknown_4338_ != 0) {
            if (var3->unknown_18c_ & 0x40) { arg0->unknown_1_ = 1; return; }
        }
        if (arg0->unknown_11_ == 2 && var1->unknown_4334_ != 0 && var1->unknown_4338_ != 0) {
            if (!(var3->unknown_18c_ & 0x40)) { arg0->unknown_1_ = 1; return; }
        }
        if (arg0->unknown_11_ == 0 && var1->unknown_4334_ == 0 && var1->unknown_4338_ == 0) {
            if (!(var3->unknown_18c_ & 0x40)) { arg0->unknown_1_ = 1; return; }
        }
        if (arg0->unknown_11_ == 1 || arg0->unknown_11_ == 2) {
            if (var1->unknown_4334_ == 0) {
#if defined(jpn)
                arg0->unknown_8_[0] = var2->QueueLoadFile(data_ov017_021d85ec, 0);
                arg0->unknown_8_[1] = var2->QueueLoadFile(data_ov017_021d8606, 0);
                arg0->unknown_8_[2] = var2->QueueLoadFileInGP2(data_ov017_021d861e, data_ov017_021d8639, 0);
                arg0->unknown_8_[3] = var2->QueueLoadFileInGP2(data_ov017_021d861e, data_ov017_021d8644, 0);
#else
                arg0->unknown_8_[0] = var2->QueueLoadFile(data_ov017_021d7e14, 0);
                arg0->unknown_8_[1] = var2->QueueLoadFile(data_ov017_021d7e2e, 0);
                arg0->unknown_8_[2] = var2->QueueLoadFileInGP2(data_ov017_021d7e46, data_ov017_021d7e61, 0);
                arg0->unknown_8_[3] = var2->QueueLoadFileInGP2(data_ov017_021d7e46, data_ov017_021d7e6c, 0);
#endif
                for (int var7 = 0; var7 < 4; var7++) {
                    var5[var7]->Reset();
                    func_0207df50(var6[var7]);
                }
            } else {
                for (int var8 = 0; var8 < 4; var8++) arg0->unknown_8_[var8] = -1;
            }
            if (arg0->unknown_11_ == 1) var3->unknown_18c_ |= 0x40;
            else var3->unknown_18c_ &= ~0x40;
            func_ov017_0218f5a4(var1, 0, 1, 0, 0);
            arg0->unknown_10_ = 1;
        } else {
            var1->unknown_4334_ = 0;
            var1->unknown_4338_ = 0;
            var1->unknown_433c_ = 0;
            var1->unknown_4340_ = 0;
            if (var3 != 0) var3->unknown_18c_ &= ~0x40;
            func_ov017_0218f5a4(var1, 0, 1, 0, 0);
            arg0->unknown_10_ = 2;
        }
    } else if (arg0->unknown_10_ == 1) {
        int var9 = 0;
        for (int var10 = 0; var10 < 4; var10++) {
            if (arg0->unknown_8_[var10] < 0) continue;
            if (var2->GetTaskStatus(arg0->unknown_8_[var10]) != 0 && var2->GetDetailedTaskStatus(arg0->unknown_8_[var10]) == 2) {
                void* var11;
                unsigned int var12;
                var2->GetLoadedFileByID(arg0->unknown_8_[var10], &var11, &var12);
                SafeAllocator* var13 = var5[var10];
                Object3D* var14 = (Object3D*)var13->Allocate(0xac);
                if (var11 != 0 && var14 != 0) {
                    ObjectArchiveLoadInfo var15;
                    var15.fileData = var11;
                    var15.unk_0 = 0;
                    var15.unk_14 = 0;
                    var15.unk_18 = 0;
                    var15.packageID = 0;
                    var15.unk_10 = 1;
                    var15.allocator = var13;
                    var15.unk_8 = var12;
                    Struct_0203d028* var16 = var6[var10];
                    func_0207df90((char*)var16);
                    var14->Initialize();
                    var14->LoadFromCCHROrCMOTArchive(&var15, 0);
                    func_0207dfac((char*)var16);
                    switch (var10) {
                    case 0: var1->unknown_4334_ = var14; break;
                    case 1: var1->unknown_4338_ = var14; break;
                    case 2: var1->unknown_433c_ = var14; break;
                    case 3: var1->unknown_4340_ = var14; break;
                    }
                }
                var2->RemoveTask(arg0->unknown_8_[var10]);
                arg0->unknown_8_[var10] = -1;
            } else var9 = 1;
        }
        if (!var9) arg0->unknown_10_ = 2;
    } else if (arg0->unknown_10_ == 2) {
        if (arg0->unknown_11_ == 1) func_ov017_021bdb78(0);
        else {
            var3->obj3D_.unknown_9c_ = 0;
            func_ov017_0218fcf8((int)var1, 0, 0);
        }
        if (var1->unknown_4334_ != 0) {
#if defined(jpn)
            if (arg0->unknown_11_ == 1) var1->unknown_4334_->MaybeSetRegularAnimation(data_ov017_021d864d, 0);
            else var1->unknown_4334_->MaybeSetRegularAnimation(data_ov017_021d8653, 0);
#else
            if (arg0->unknown_11_ == 1) var1->unknown_4334_->MaybeSetRegularAnimation(data_ov017_021d7e75, 0);
            else var1->unknown_4334_->MaybeSetRegularAnimation(data_ov017_021d7e7b, 0);
#endif
        }
        arg0->unknown_1_ = 1;
    }
}
