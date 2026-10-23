#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void func_ov017_021b5a30(unsigned char* obj);
extern "C" void func_ov017_021b6090(unsigned char* obj);
extern "C" void func_02094ab0(int a);
extern "C" int func_02094a00(void);
extern "C" int func_020421a0(void);
extern "C" int func_ov017_0218d75c(void* obj);
extern "C" void func_020397c0(void* obj);

// USA: func_ov017_021b5fc0
extern "C" ARM int func_ov017_021b5fc0(unsigned char* obj) {
#if defined(jpn)
 enum {regionalOffset0=0x228};
#else
 enum {regionalOffset0=0x2d8};
#endif
    GameState* battleStruct = GameState::GetInstance();
    int scale = battleStruct->GetTickCount();
    GetGameResources();

    if (obj[0x54] != 0) {
        void* p = GetGameResources();
        if (func_ov017_0218d75c(p) != 0) {
            return 5;
        }
        obj[0x16] = 0;
        func_02094ab0(func_02094a00());
        func_ov017_021b5a30(obj);
        obj[0x1] = 1;
        char* g = (char*)func_020421a0();
        *(int*)(g + regionalOffset0) = 0;
        return 6;
    }

    func_ov017_021b6090(obj);
    char* g = (char*)func_020421a0();
    unsigned char f16 = obj[0x16];
    if (scale < f16) {
        obj[0x16] = f16 - scale;
        goto returnFive021b5fc0;
    }
    obj[0x16] = 0;
    func_02094ab0(func_02094a00());
    func_020397c0(*(void**)(obj + 0x1c));
    func_ov017_021b5a30(obj);
    obj[0x1] = 1;
    *(int*)(g + regionalOffset0) = 0;
    return 6;
returnFive021b5fc0:
    return 5;
}
