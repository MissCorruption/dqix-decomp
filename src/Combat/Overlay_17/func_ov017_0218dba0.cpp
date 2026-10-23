#if defined(jpn)
enum { Enum_ov017_0218dba0_14076 = 0x34ec, Enum_ov017_0218dba0_56 = 0x58, Enum_ov017_0218dba0_60 = 0x5c };
#else
enum { Enum_ov017_0218dba0_14076 = 0x36fc, Enum_ov017_0218dba0_56 = 0x38, Enum_ov017_0218dba0_60 = 0x3c };
#endif

#include <globaldefs.h>
#include "Combat/ActorAction.h"
#include "GameState/GameState.h"
#include "NitroSDK/NSBXX/RenderConfig.h"
#include "Resource/GameResources.h"

extern "C" void* func_02012fe4(void);

struct Struct_0203402c;
extern "C" int func_0203402c(struct Struct_0203402c* arg0);

extern "C" void* func_0200fd0c(GameState* arg0);

struct Struct_02015438;
extern "C" int func_02046b24(struct Struct_02015438** arg0);

struct Struct_ov017_0218dba0;

extern "C" void func_0208f87c(const void* arg0, int arg1, int arg2, int arg3, int arg4);

// USA: func_ov017_0218dba0
extern "C" ARM void func_ov017_0218dba0(int arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetPartyMemberByIndex(arg0);
    if (var1 == 0) {
        return;
    }
    if (func_0203402c((struct Struct_0203402c*)var1) != 0) {
        return;
    }

    unsigned short var2;
    int var3;
    void* var4;

    void* var5 = GetGameResources();
    var4 = *(void**)((char*)var5 + Enum_ov017_0218dba0_14076);
    void* var6 = func_02012fe4();
    var2 = *(unsigned short*)((char*)var6 + Enum_ov017_0218dba0_56);
    var3 = *(int*)((char*)var6 + Enum_ov017_0218dba0_60);

    Vector3fix var7 = var1->obj3D_.MaybeGetShadowSource();

    int var8 = ((Object3D*)((struct Struct_ov017_0218dba0*)var1))->GetCombinedAlpha();
    float var9 = (float)var3 / 31.0f;
    int var10 = (int)(var9 * (float)var8);

    if (var1 != 0) {
        Struct_02037d10* var11 = func_020399a8(var1);
        if (var11->unknown_0_ != 0) {
            var11 = func_020399a8(var1);
            unsigned char var12 = var11->unknown_1_;
            if (var12 == 1 || var12 == 4) {
                var10 = var11->unknown_50_;
            }
            if (var12 == 2 || var12 == 6) {
                var10 = var11->unknown_50_;
                var7.y = var11->unknown_4c_;
            }
        }
    }

    if (*(short*)((char*)func_0200fd0c(var0) + 0x6c) == 0x270f) {
        if (func_02046b24((struct Struct_02015438**)var4) == 3) {
            var10 = 0;
        }
    }

    if (var1->obj3D_.GetFlag(0x10) == 0) {
        int var13 = (int)(0.9f * (float)((Object3D*)((unsigned char*)var1))->GetRadius());
        func_0208f87c(&var7, var2, var13, var10, 8);
    } else {
        RenderConfig::SubmitToFifo();
    }
}
