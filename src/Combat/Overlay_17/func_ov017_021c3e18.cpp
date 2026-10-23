#if defined(jpn)
enum { Enum_ov017_021c3e18_32608 = 0x7c8c };
#else
enum { Enum_ov017_021c3e18_32608 = 0x7f60 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_ov017_021c3e18 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_ov017_021c3e18_2 {
    unsigned char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
    unsigned char unknown_f7c_;
};

struct Struct_ov017_021c3e18_3 {
    unsigned char unknown_0_[3];
    unsigned char unknown_3_;
};

extern "C" unsigned short* func_02012fe4(void);
extern "C" void* func_0202ae18(void);
extern "C" unsigned char func_020100b0(GameState* arg0);
extern "C" void func_ov017_021c3f68(struct Struct_ov017_021c3e18* arg0, int arg1, int arg2, int arg3);
extern "C" void* func_ov017_021b8468(void* arg0);
extern "C" void* func_ov000_021677d8(void* arg0, int arg1);
extern "C" void func_ov017_021d2ad0(short, int, int, int, unsigned char);
extern "C" int func_0202c508(void* arg0);

// USA: func_ov017_021c3e18
extern "C" ARM void func_ov017_021c3e18(unsigned char arg0) {
    unsigned short* var0 = func_02012fe4();
    GameState* var1 = GameState::GetInstance();
    GameResources* var2 = GetGameResources();
    Struct_ov017_021c3e18_2* var3 = (Struct_ov017_021c3e18_2*)func_02010828(var1);
    Struct_ov017_021c3e18_3* var4 = (Struct_ov017_021c3e18_3*)var2->unknown_ptr_3718;
    void* var5 = func_0202ae18();
    unsigned char var6 = func_020100b0(var1);
    for (int var7 = 0; var7 < var3->unknown_f7c_; var7++) {
        unsigned char var8 = var3->unknown_f78_[var7];
        if (var8 == var6) {
            continue;
        }
        GameObject* var9 = var1->GetPartyMemberByIndex(var8);
        if (var9 == NULL) {
            continue;
        }
        Vector3i var10 = var9->obj3D_.position_;
        if (*var0 == 10000) {
            func_ov017_021c3f68((Struct_ov017_021c3e18*)&var10, 0xff000, 0, 0xff000);
        }
        if (var4->unknown_3_ != 0) {
            void* var11 = func_ov017_021b8468(var4);
            if (var11 != NULL) {
                var10 = *(Vector3i*)func_ov000_021677d8(var11, var8);
            }
        }
        func_ov017_021d2ad0(var9->obj3D_.unknown_4_, var10.x, var10.y, var10.z, arg0);
    }
    if (func_0202c508(var5)) {
        Vector3i var12 = *(Vector3i*)((char*)var1 + Enum_ov017_021c3e18_32608);
        func_ov017_021d2ad0(0xce, var12.x, var12.y, var12.z, arg0);
    }
}
