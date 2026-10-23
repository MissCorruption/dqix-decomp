#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/LightingManager.h"
#include "World/Object3D.h"
#include "Resource/GameResources.h"

struct Struct_020a72ac {
    Object3D unknown_0_;
    unsigned char unknown_ac_[0x144 - 0xac];
    Vector3i unknown_144_;
};
struct Struct_020a72ac_2 {
    unsigned char unknown_0_[8];
    Vector3i unknown_8_;
    unsigned char unknown_14_[0x20 - 0x14];
    short unknown_20_;
};
struct Struct_02017a94;
struct Struct_02013380;
struct Struct_02033834;
struct Struct_0200ffc0;

struct Struct_020a72ac_3 {
    unsigned short unknown_0_;
#if defined(jpn)
    char unknown_2_[0x27c4 - 2];
#else
    char unknown1_2_[0x2784 - 2];
#endif
    short unknown_2784_;
    unsigned short unknown_2786_;
    unsigned char unknown_2788_;
};

extern "C" void* func_0202ae18();
extern "C" int func_0202c540(void* arg0);
extern "C" void func_020a6aa4(Vector3i* arg0, int arg1, int arg2, int arg3);
extern "C" void* func_0200ffc0(struct Struct_0200ffc0* arg0);
extern "C" struct Struct_02017a94* func_0201b600(Struct_02017a94* arg0, int arg1, unsigned short arg2);
extern "C" void func_02013380(struct Struct_02013380* arg0, int arg1, int arg2);
extern "C" void func_0201b8c8(struct Struct_02017a94* arg0, int arg1, int arg2, int arg3);
extern "C" void* func_0201b754(void* arg0, int arg1);
extern "C" void func_02033874(struct Struct_02033834* arg0, int arg1);

// USA: func_020a72ac
extern "C" ARM void func_020a72ac(struct Struct_020a72ac_3* arg0) {
    GameState* var0 = GameState::GetInstance();
    GetGameResources();
    void* var1 = func_0202ae18();
    LightingManager::GetInstance();
    Object3D* var2 = static_cast<Object3D*>(func_0200ffc0((struct Struct_0200ffc0*)var0));
    GameObject* var3 = var0->GetUnknownGameObject();
    var0->GetPartyMemberByIndex(0);

    if (arg0->unknown_2788_ == 0) {
        if (arg0->unknown_2786_ == arg0->unknown_0_) {
            if (arg0->unknown_0_ == 0x76c) {
                struct Struct_02017a94* var4 = func_0201b600((struct Struct_02017a94*)arg0, 0, 4);
                if (var4) func_02013380((struct Struct_02013380*)var4, 0, 1);
                var4 = func_0201b600((struct Struct_02017a94*)arg0, 0, 0x28);
                if (var4) func_02013380((struct Struct_02013380*)var4, 0, 1);
            } else if (var2) {
                var2->MakeVisible();
                Struct_020a72ac_2* var5 = static_cast<Struct_020a72ac_2*>(func_0201b754(arg0, arg0->unknown_2784_));
                if (var5) {
                    var2->position_ = var5->unknown_8_;
                    reinterpret_cast<Struct_020a72ac*>(var2)->unknown_144_ = var5->unknown_8_;
                    func_02033874((struct Struct_02033834*)var2, var5->unknown_20_);
                }
            }
        } else {
            if (arg0->unknown_0_ == 0x170c) {
                func_0201b8c8((struct Struct_02017a94*)arg0, 0, 1, 0);
            } else if (arg0->unknown_0_ == 0x2774 || arg0->unknown_0_ == 0x2710) {
                if (var2) var2->MakeVisible();
            } else if (var2) {
                var2->MakeHidden();
            }
        }
    } else {
        if (arg0->unknown_2786_ == arg0->unknown_0_) {
            if (var2) var2->MakeHidden();
        } else if (arg0->unknown_0_ == 0x170c) {
            func_0201b8c8((struct Struct_02017a94*)arg0, 1, 0, 1);
            Vector3i var6 = var3->obj3D_.position_;
            if (var6.z >= 0x6000 && var6.x >= -0x8333 && var6.x <= -0x5ccc) {
                func_020a6aa4(&var6, -0x7000, 0x2e1, 0x5e66);
                var3->obj3D_.position_ = var6;
            }
        } else if (arg0->unknown_0_ == 0x76c) {
            struct Struct_02017a94* var7 = func_0201b600((struct Struct_02017a94*)arg0, 0, 4);
            if (var7) func_02013380((struct Struct_02013380*)var7, 0, 0);
            var7 = func_0201b600((struct Struct_02017a94*)arg0, 0, 0x28);
            if (var7) func_02013380((struct Struct_02013380*)var7, 0, 0);
        } else if (arg0->unknown_0_ == 0x2774) {
            if (var2) var2->MakeVisible();
        } else if (func_0202c540(var1) && arg0->unknown_0_ == 0x2710) {
            if (var2) var2->MakeVisible();
        } else if (var2) {
            var2->MakeHidden();
        }
    }
}
