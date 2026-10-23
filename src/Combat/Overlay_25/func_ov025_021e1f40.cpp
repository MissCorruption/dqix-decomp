#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02049ee8(unsigned char*);
extern "C" int func_02048bd0(unsigned char*);
extern "C" int func_020493a4(unsigned char*);
extern "C" int func_02048c68(unsigned char*);

// USA: func_ov025_021e1f40
extern "C" ARM int func_ov025_021e1f40(GameObject* arg0, int arg1) {
#if defined(jpn)
 enum {Enum_ov025_021e1f40_396=0x180};
#else
 enum {Enum_ov025_021e1f40_396=0x18c};
#endif
    if (func_02049ee8((unsigned char*)arg0) == 0) {
        return 0;
    }
    if (arg1 == arg0->obj3D_.unknown_4_) {
        return 0;
    }
    if (func_02048bd0((unsigned char*)arg0)) {
        return 0;
    }
    if (func_020493a4((unsigned char*)arg0) == 0xff) {
        return 0;
    }
    if (func_02048c68((unsigned char*)arg0)) {
        return 0;
    }
    int var0 = 0;
    if (arg0->obj3D_.unknown_4_ >= 0 && arg0->obj3D_.unknown_4_ <= 3) {
        var0 = 1;
    }
    if (var0) {
        GameState* var1 = GameState::GetInstance();
        GameObject* var2 = func_0200ff1c(var1, arg0->obj3D_.unknown_4_);
        if (var2 != NULL && (*(unsigned int*)((char*)var2 + Enum_ov025_021e1f40_396) & 1)) {
            return 0;
        }
    }
    return 1;
}
