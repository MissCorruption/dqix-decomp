#if defined(jpn)
enum { Enum_ov017_0219c598_108 = 0x8c };
#else
enum { Enum_ov017_0219c598_108 = 0x6c };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_02012fe4(void);
int fix32ReduceAngle0To2Pi(int angle);
extern "C" void func_020399b0(GameObject* arg0, unsigned short arg1, int* arg2, int arg3);

extern "C" void* func_0200fd0c(GameState* arg0);
extern "C" unsigned char func_02039d7c(char* arg0);
struct Vector3i;

struct Struct_0201e80c;
struct Struct_0201e820;
struct Struct_0201e80c_2 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern "C" Struct_0201e80c_2 func_0201e80c(Struct_0201e80c* arg0);
extern "C" int func_0201e820(Struct_0201e820* arg0);

// USA: func_ov017_0219c598
extern "C" ARM void func_ov017_0219c598(int* arg0, short* arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = (unsigned char*)func_0200fd0c(var0);
    void* var2 = func_02012fe4();
    ((int)GetGameResources());
    unsigned char* var3 = (unsigned char*)func_02010828(var0);
    GameObject* var4 = var0->GetUnknownGameObject();

    if (var1[0xa] != 0 && arg2 == 0) {
        return;
    }
    if (var1[0x67] != 0 && func_02039d7c((char*)var4) != 0) {
        return;
    }

    int var5[3];
    int var6;
    int var7;
    if (arg0 != 0) {
        *(Vector3i*)var5 = *(Vector3i const*)arg0;
        if (arg1 != 0) {
            var6 = *arg1;
        }
    } else if (var1[0x7] != 0) {
        *(Vector3i*)var5 = *(Vector3i const*)((int*)(var1 + 0x10));
        var6 = *(short*)(var1 + 0x1c);
    } else {
        *(Vector3i*)var5 = *(Vector3i const*)((int*)&func_0201e80c((Struct_0201e80c*)((char*)var2 + Enum_ov017_0219c598_108)));
        var6 = func_0201e820((Struct_0201e820*)((char*)var2 + Enum_ov017_0219c598_108));
    }

    int var8 = fix32ReduceAngle0To2Pi(var6);

    for (var7 = 0; var7 < var3[0xf7c]; var7++) {
        GameObject* var9 = var0->GetPartyMemberByIndex((var3 + var7)[0xf78]);
        if (var9 != 0) {
            func_020399b0(var9, *(unsigned short*)var2, var5, var8);
        }
    }

    if (var3[0xf7d] != 0) {
        GameObject* var10 = var0->GetPartyMemberByIndex(0xce);
        if (var10 != 0) {
            func_020399b0(var10, *(unsigned short*)var2, var5, var8);
        }
    }
}
