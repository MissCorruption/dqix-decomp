#include <globaldefs.h>
#include "Util/Random.h"
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Obj0208e7d0 {
    char pad0[0xc];
    short* table;
};

extern "C" void* func_0205ec34(void);
extern "C" int func_0201079c(char* obj);

// USA: func_0208e7d0
extern "C" ARM int func_0208e7d0(struct Obj0208e7d0* obj) {
    if (obj->table == 0) {
        return 0;
    }
    int count = 8;
    GameState* bs = GameState::GetInstance();
    func_0205ec34();
    if (func_0201079c((char*)bs) >= 0x13) {
        count = 0x10;
    }
    struct Random* rng = GetBTRandom();
    int idx = NextRandomMax(rng, count);
    return obj->table[idx];
}
