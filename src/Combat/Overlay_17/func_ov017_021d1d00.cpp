#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" int func_02046b08(void** arg0);
struct Struct_02039df4;
struct Struct_02028460_3 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern "C" void func_ov017_021a6b9c(void* arg0, int arg1);

// USA: func_ov017_021d1d00
extern "C" ARM void func_ov017_021d1d00(int arg0, int arg1, GameState* arg2, unsigned char* arg3, struct Struct_0202c1a4* arg4) {
#if defined(jpn)
 enum {Enum_ov017_021d1d00_1788=0x4ec};
#else
 enum {Enum_ov017_021d1d00_1788=0x6fc};
#endif
    if (!func_0202c1a4(arg4)) return;
    void** var0 = *(void***)(arg3 + 0x3000 + Enum_ov017_021d1d00_1788);
    if (!func_02046b08(var0)) return;

    GameObject* var1 = arg2->GetPartyMemberByIndex(0);
    GameObject* var2 = arg2->GetUnknownGameObject();
    if (!var1 || !var2) return;
    if (((Object3D*)((struct Struct_02039df4*)var1))->GetField06() != ((Object3D*)((struct Struct_02039df4*)var2))->GetField06()) return;

    struct Struct_02028460_3 var3 = *(struct Struct_02028460_3*)((char*)var1 + 0x44);
    struct Struct_02028460_3 var4 = *(struct Struct_02028460_3*)((char*)var2 + 0x44);
    if (Vector3fix_Distance((const Vector3fix*)&var3, (const Vector3fix*)&var4) >= 0x7800) return;
    func_ov017_021a6b9c(arg3, 0);
}
