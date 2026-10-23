#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Input/Input.h"
#include "Resource/Brightness.h"

struct Struct_0202b2f0;
struct Struct_ov017_0218e674;
struct Struct_02037d88_11;

struct Struct_ov017_0218e674_2 {
    char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
    unsigned char unknown_f7c_;
};

extern "C" struct Struct_0202b2f0* func_0202ae18(void);
extern "C" int func_0202c540(struct Struct_0202b2f0* arg0);
extern "C" void __clear(void* arg0, int arg1);
extern "C" void func_02037d88(GameObject* arg0);
extern "C" void func_ov017_0218e210(int arg0, int arg1);
extern "C" int func_ov017_021bd3a4(struct Struct_ov017_0218e674* arg0);
extern "C" void func_020d9834(int arg0);
extern "C" int func_02039860(void* arg0);
extern "C" int func_02039874(void* arg0);
extern "C" void func_ov017_02193428(void* arg0, void* arg1);
extern "C" void func_02052ae8(struct Struct_02037d88_11* arg0);
extern "C" Object3D* func_ov017_021bdbc0(unsigned char* arg0);

// USA: func_ov017_0218e674
extern "C" ARM void func_ov017_0218e674(unsigned char* arg0) {
#if defined(jpn)
 enum {Enum_ov017_0218e674_1844=0x524, Enum_ov017_0218e674_396=0x180};
#else
 enum {Enum_ov017_0218e674_1844=0x734, Enum_ov017_0218e674_396=0x18c};
#endif
    GameState* var0 = GameState::GetInstance();
    func_0202ae18();
    if (func_020100bc(var0) == 0) return;

    struct Struct_ov017_0218e674_2* var1 = (struct Struct_ov017_0218e674_2*)func_02010828(var0);
    int var2[4];
    __clear(var2, sizeof(var2));
    var0->GetEffectiveDeltaTime();

    int var3 = 1;
    if ((TestFlags00((GameResources*)arg0, 0x20) != 0 && g_keyManager.TestKeysHeld(var3) != 0) ||
        TestFlags00((GameResources*)arg0, 0x2000) != 0) {
        var3 = 0;
    }
    if (func_ov017_021bd3a4(*(struct Struct_ov017_0218e674**)(arg0 + 0x3000 + Enum_ov017_0218e674_1844)) != 0) {
        var3 = 0;
    }
    int var4 = 0;
    if (TestFlags00((GameResources*)arg0, 0x4000) != 0) var4 = 1;

    int var5 = 0;
    for (int var6 = 0; var6 < var1->unknown_f7c_; var6++) {
        if (var5 != 0 && var4 != 0) func_020d9834(1);
        int var7 = var1->unknown_f78_[var6];
        var5++;
        var2[var7] = 1;
        func_ov017_0218e210(var7, var3);
    }

    for (int var8 = 0; var8 < 4; var8++) {
        if (var2[var8] != 0) continue;
        GameObject* var9 = var0->GetPartyMemberByIndex(var8);
        if (var9 == NULL) continue;
        if (var5 != 0 && var4 != 0) func_020d9834(1);
        var5++;
        if (func_0202c540(func_0202ae18()) != 0 &&
            var9->obj3D_.GetField06() == var0->GetUnknownGameObject()->obj3D_.GetField06() &&
            ((var9->obj3D_.unknown_0_ & 0x1000) != 0 ||
             (var9->obj3D_.unknown_4_ == 0 && (*(unsigned int*)((char*)var9 + Enum_ov017_0218e674_396) & 1) != 0)) &&
            func_02039860(var9) >= 0) {
            var2[var8] = 1;
            func_02037d88(var9);
            func_ov017_02193428(var9, NULL);
        } else if (func_02039874(var9) != 0) {
            func_02037d88(var9);
        } else {
            func_02052ae8((struct Struct_02037d88_11*)var9);
        }
    }

    Object3D* var10 = func_ov017_021bdbc0(arg0);
    if (var10 != NULL) var10->AdvanceEffects();

    if (var0->GetPartyMemberByIndex(0xce) == NULL) return;
    if (var5 != 0 && var4 != 0) func_020d9834(1);
    func_ov017_0218e210(0xce, var3);
}
