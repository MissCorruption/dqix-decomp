#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/TreasureMapMetadata.h"
#include "Resource/Brightness.h"

struct AxisFloats0203b5f8;
extern "C" int func_020421a0(void);
struct Info02011930;
extern "C" unsigned char func_02011930(void* obj, struct Info02011930* info, void* name1, void* name2);
extern "C" void func_ov011_021848a0(void* obj, int val);
extern "C" unsigned char func_020119f8(char* obj, void* dst);
extern "C" void func_02011a40(char* obj);
extern "C" void func_ov017_0218d77c(int obj, int a);

// USA: func_ov004_021650f8
extern "C" ARM int func_ov004_021650f8(void* a1) {
#if defined(jpn)
 enum { fieldOffset = 0x868 };
#else
 enum { fieldOffset = 0x998 };
#endif
    GameState* battle = GameState::GetInstance();
    struct AxisFloats0203b5f8* axis = ((struct AxisFloats0203b5f8*)GetGameResources());
    if (IsBrightnessZero((GameResources*)axis, false) == 0) goto ret0;
    if (IsBrightnessZero((GameResources*)axis, true) != 0) goto mainlogic;
ret0:
    return 0;

mainlogic:
    if (*(void**)((char*)func_020421a0() + fieldOffset) != NULL) return 0;

    if (func_02011930(battle, NULL, NULL, NULL) != 0) {
        func_ov011_021848a0(a1, 0x6b);
        goto end;
    }

    if (func_020119f8((char*)battle, NULL) != 0) {
        func_02011a40((char*)GameState::GetInstance());
        func_ov017_0218d77c((int)((struct AxisFloats0203b5f8*)GetGameResources()), 2);
        func_ov011_021848a0(a1, 0x64);
        goto end;
    }

    func_ov011_021848a0(a1, 0x64);

end:
    return 0;
}
