#include <globaldefs.h>
#if defined(jpn)
enum { kRegion1012 = 0xf8e };
#else
enum { kRegion1012 = 0x1012 };
#endif
#include "GameState/GameState.h"

extern "C" unsigned char func_0207ca94(int index);
extern "C" short func_0207c638(void* base, unsigned int index);

// USA: func_ov003_02175f90
extern "C" ARM short func_ov003_02175f90(void* obj) {
    GameState* bs = GameState::GetInstance();
    void* p = func_02010828(bs);
    short v = *(short*)((char*)obj + kRegion1012);
    int idx = (short)(v - 286);
    unsigned char cnt = func_0207ca94(idx);
    return func_0207c638((char*)p + 0x1d4, cnt);
}
