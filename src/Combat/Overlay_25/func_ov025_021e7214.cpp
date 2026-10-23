#include <globaldefs.h>

#if defined(jpn)
enum { kWorkFlagBase = 0x7000, kWorkFlagOffset = 0x1c5 };
#else
enum { kWorkFlagBase = 0x6000, kWorkFlagOffset = 0xfd5 };
#endif

#include "GameState/GameState.h"
#include "GameState/Field3b0.h"

extern "C" void* func_ov000_02160130(void);
extern "C" void func_0202e874(unsigned char* obj, short val);

struct Param021e7214 { char pad[8]; short field8; };

// USA: func_ov025_021e7214
extern "C" ARM int func_ov025_021e7214(struct Param021e7214* p) {
    void* w = func_ov000_02160130();
    if (w != 0) {
        *(unsigned char*)((char*)w + kWorkFlagBase + kWorkFlagOffset) = 1;
    }
    GameState* bs = GameState::GetInstance();
    unsigned char* f = (unsigned char*)func_020100bc(bs);
    func_0202e874(f, p->field8);
    return 1;
}
