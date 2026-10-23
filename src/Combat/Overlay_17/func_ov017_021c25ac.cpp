#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae18(void);
extern "C" int func_0202c508(void* p);
extern "C" void func_ov017_021c2380(int a, int b);
extern "C" unsigned char func_02039820(void* obj);
extern "C" int func_020535c8(signed char* obj);
extern "C" unsigned char func_020100b0(GameState* battleStruct);

// USA: func_ov017_021c25ac
extern "C" ARM void func_ov017_021c25ac() {
    GameState* bs = GameState::GetInstance();
    void* search = func_0202ae18();
    GameObject* c = bs->GetUnknownGameObject();
    if (c != 0 && func_02039820(c) != 0 && func_020535c8((signed char*)c) == 0) {
        for (int i = 0; i < 4; i++) {
            func_ov017_021c2380(i, func_020100b0(bs));
        }
    }
    if (func_0202c508(search) != 0) {
        for (int a = 0; a < 4; a++) {
            for (int b = 0; b < 0x30; b++) {
                func_ov017_021c2380(a, b + 0x70);
            }
        }
    } else {
        for (int i = 0; i < 0x30; i++) {
            func_ov017_021c2380(func_020100b0(bs), i + 0x70);
        }
    }
}
