#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/TreasureMapMetadata.h"
#include "Resource/Brightness.h"

struct Struct_ov004_02164670;
extern "C" int func_020421a0(void);
struct Struct_02011930;
extern "C" unsigned char func_02011930(void* arg0, struct Struct_02011930* arg1, void* arg2, void* arg3);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);
extern "C" unsigned char func_020119f8(char* arg0, void* arg1);
extern "C" void func_02011a40(char* arg0);
extern "C" void func_ov017_0218d77c(int arg0, int arg1);

// USA: func_ov004_021650f8
extern "C" ARM int func_ov004_021650f8(void* arg0) {
#if defined(jpn)
 enum { Enum_ov004_021650f8_2456 = 0x868 };
#else
 enum { Enum_ov004_021650f8_2456 = 0x998 };
#endif
    GameState* var0 = GameState::GetInstance();
    struct Struct_ov004_02164670* var1 = ((struct Struct_ov004_02164670*)GetGameResources());
    if (IsBrightnessZero((GameResources*)var1, false) == 0) goto ret0;
    if (IsBrightnessZero((GameResources*)var1, true) != 0) goto mainlogic;
ret0:
    return 0;

mainlogic:
    if (*(void**)((char*)func_020421a0() + Enum_ov004_021650f8_2456) != NULL) return 0;

    if (func_02011930(var0, NULL, NULL, NULL) != 0) {
        func_ov011_021848a0(arg0, 0x6b);
        goto end;
    }

    if (func_020119f8((char*)var0, NULL) != 0) {
        func_02011a40((char*)GameState::GetInstance());
        func_ov017_0218d77c((int)((struct Struct_ov004_02164670*)GetGameResources()), 2);
        func_ov011_021848a0(arg0, 0x64);
        goto end;
    }

    func_ov011_021848a0(arg0, 0x64);

end:
    return 0;
}
