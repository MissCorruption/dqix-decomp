#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_02038598_5;
extern "C" int func_02046b60(struct Struct_02038598_5* arg0, int arg1);

struct Struct_02039df4;

struct Struct_0201bdac;
struct Struct_0201bdac_2;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

extern "C" void func_ov017_021c2b28(void* arg0, unsigned char arg1, unsigned char arg2);

struct Struct_ov017_021d24f0 {
    char unknown_0_[4];
    unsigned char unknown_4_;
    char unknown_5_[3];
    int unknown_8_;
};

// USA: func_ov017_021d24f0
extern "C" ARM void func_ov017_021d24f0(void* arg0, Struct_ov017_021d24f0* arg1, GameState* arg2) {
#if defined(jpn)
 enum {Enum_ov017_021d24f0_1788=0x4ec, Enum_ov017_021d24f0_2992=0x990};
#else
 enum {Enum_ov017_021d24f0_1788=0x6fc, Enum_ov017_021d24f0_2992=0xbb0};
#endif
    int var0 = ((int)GetGameResources());
    struct Struct_0201bdac_2* var1 = *(struct Struct_0201bdac_2**)((char*)var0 + 0x3000 + Enum_ov017_021d24f0_1788);
    if (func_02046b60((struct Struct_02038598_5*)var1, 0xa)) return;
    GameObject* var2 = arg2->GetUnknownGameObject();
    unsigned short var3 = ((Object3D*)((struct Struct_02039df4*)var2))->GetField06();
    if (arg1->unknown_8_ != var3) return;
    if (func_02046b60((struct Struct_02038598_5*)var1, 0x1a)) return;
    struct Struct_0201bdac* var4 = *(struct Struct_0201bdac**)((char*)var0 + 0x3000 + Enum_ov017_021d24f0_2992);
    if (*((unsigned char*)var4 + 2) != 0) return;
    func_ov017_021c2b28((void*)var4, 1, arg1->unknown_4_);
    func_020469b4(var1, var4);
}
