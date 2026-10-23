#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Resource/GameResources.h"

struct Struct_ov025_021e63b0_2 { unsigned char unknown_0_[0x20]; unsigned short unknown_20_; };
struct Struct_ov025_021e63b0_3 { unsigned char unknown_0_[0x10]; Struct_ov025_021e63b0_2* unknown_10_; };
struct Struct_ov025_021ef988_23 {
#if defined(jpn)
    unsigned char unknown_0_[4];
    char* unknown_c_;
    unsigned char unknown_8_[4];
    unsigned int unknown_1c_;
    unsigned char unknown_10_[0x10];
#else
    unsigned char unknown1_0_[0xc];
    char* unknown_c_;
    unsigned char unknown1_10_[0xc];
    unsigned int unknown_1c_;
#endif
    int unknown_20_;
    int unknown_24_;
    int unknown_28_;
};
struct Struct_ov025_021ef9a8;
struct Struct_02054000;
struct Struct_ov025_021e267c_2;
struct Struct_ov025_021e267c_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned int unknown_4_;
    Struct_ov025_021e267c_3* unknown_8_;
};
#if defined(jpn)
struct Struct_ov025_021e63b0_4 { unsigned char unknown_0_[0x71c6]; unsigned short unknown_6fd6_; };
#else
struct Struct_ov025_021e63b0_4 { unsigned char unknown_0_[0x6fd6]; unsigned short unknown_6fd6_; };
#endif
struct Struct_ov025_021e63b0 { unsigned char unknown_0_[0x14]; unsigned int unknown_14_; };
extern Struct_ov025_021ef988_23 data_ov025_021ef988;
extern Struct_ov025_021ef9a8 data_ov025_021ef9a8;
extern char data_ov025_021ef809[];
extern char data_ov025_021ef791[];
extern "C" void func_ov025_021e3158(Struct_ov025_021ef9a8*);
extern "C" void* func_02054000(Struct_02054000*);
extern "C" void func_02072e94(char*, int, int, void*, int);
extern "C" int func_ov025_021e2628(int, int);
extern "C" SafeAllocator* func_ov025_021e8a54(char*);
extern "C" char* func_ov025_021e8a64(char*);
extern "C" void func_ov025_021e8bac(Struct_ov025_021e267c_2*, Struct_ov025_021e267c_3*);
extern "C" void func_0207df90(char*);
extern "C" void func_0207dfac(char*);
extern "C" void func_0200fd38(GameState*, int, GameObject*);
extern "C" Struct_ov025_021e63b0_4* func_ov000_02160130();
extern "C" void func_ov017_02191aac(GameResources*, int, int, int);

// USA: func_ov025_021e63b0
extern "C" ARM int func_ov025_021e63b0(void* arg0, Struct_ov025_021e63b0_3* arg1) {
    GameState* var0 = GameState::GetInstance();
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    if (data_ov025_021ef988.unknown_20_ == 0) {
        if (!arg1->unknown_10_) return 1;
        int var2 = arg1->unknown_10_->unknown_20_;
        GameObject* var3 = func_0200ff1c(var0, var2);
        if (!var3) {
            func_ov025_021e3158(&data_ov025_021ef9a8);
            return 1;
        }
        void* var4 = func_02054000((Struct_02054000*)var3);
        if (!var4) {
            func_ov025_021e3158(&data_ov025_021ef9a8);
            return 1;
        }
        char var5[0x50];
        func_02072e94(var5, var2, 8, var4, 0);
        char* var6 = strrchr(var5, '.');
        if (var6) sprintf(var6, data_ov025_021ef809);
        if (!(data_ov025_021ef988.unknown_1c_ & 0x2000)) {
            var1->AddFence();
            data_ov025_021ef988.unknown_1c_ |= 0x2000;
        }
        data_ov025_021ef988.unknown_28_ = func_ov025_021e2628((int)data_ov025_021ef791, (int)var5);
        data_ov025_021ef988.unknown_20_++;
    } else if (data_ov025_021ef988.unknown_20_ == 1) {
        int var7 = data_ov025_021ef988.unknown_28_;
        if (!var1->GetTaskStatus(var7)) return 0;
        if (var1->GetDetailedTaskStatus(var7) != 2) {
            var1->RemoveTask(var7);
            func_ov025_021e3158(&data_ov025_021ef9a8);
            return 1;
        }
        unsigned int var8;
        void* var9;
        var1->GetLoadedFileByID(var7, &var9, &var8);
        SafeAllocator* var10 = func_ov025_021e8a54(data_ov025_021ef988.unknown_c_);
        char* var11 = func_ov025_021e8a64(data_ov025_021ef988.unknown_c_);
        Object3D* var12 = (Object3D*)var10->Allocate(sizeof(Object3D));
        if (!var12) {
            var1->RemoveTask(var7);
            func_ov025_021e3158(&data_ov025_021ef9a8);
            return 1;
        }
        Struct_ov025_021e267c_3* var13 = (Struct_ov025_021e267c_3*)var10->Allocate(sizeof(Struct_ov025_021e267c_3));
        if (!var13) {
            var1->RemoveTask(var7);
            func_ov025_021e3158(&data_ov025_021ef9a8);
            return 1;
        }
        var13->unknown_0_ = 4;
        var13->unknown_2_ = 0xc8;
        func_ov025_021e8bac((Struct_ov025_021e267c_2*)data_ov025_021ef988.unknown_c_, var13);
        var12->Initialize();
        func_0207df90(var11);
        var12->SetModelFromFileCopy(var10, var9, var8, Model3D::TextureStagingMode_Normal);
        func_0207dfac(var11);
        func_0200fd38(var0, 0xc8, (GameObject*)var12);
        var12->MakeHidden();
        int var14 = arg1->unknown_10_->unknown_20_;
        Struct_ov025_021e63b0_4* var15 = func_ov000_02160130();
        if (var15) var15->unknown_6fd6_ = var14;
        GameObject* var16 = func_0200ff1c(var0, var14);
        if (var16) {
            var12->position_ = var16->obj3D_.position_;
            var12->rotation_ = var16->obj3D_.rotation_;
            var12->SetScale(&var16->obj3D_.GetScale());
            var12->unknown_2_ = var14;
            if (((Struct_ov025_021e63b0*)var16->currentStats_)->unknown_14_ & 0x8000000) {
                GameResources* var17 = GetGameResources();
                var12->SetAlphaScaleFactor(0);
                func_ov017_02191aac(var17, 1, var14, 2);
            }
        }
        var1->RemoveTask(var7);
        func_ov025_021e3158(&data_ov025_021ef9a8);
        return 1;
    }
    return 0;
}
