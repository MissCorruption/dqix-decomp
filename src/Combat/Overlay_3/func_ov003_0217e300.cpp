#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020421a0(void);
struct Obj0217e334;
extern "C" void func_ov003_0217e334(struct Obj0217e334* self);
struct TailNode020469b4;
struct TailList020469b4;
extern "C" void func_020469b4(struct TailList020469b4* list, struct TailNode020469b4* node);

// USA: func_ov003_0217e300
extern "C" ARM void func_ov003_0217e300(char* obj) {
    GameState::GetInstance()->GetProtagonist();
    func_020421a0();
#if defined(jpn)
    enum { nodeOffset = 0x3520, listOffset = 0x34ec };
#else
    enum { nodeOffset = 0x3730, listOffset = 0x36fc };
#endif
    func_ov003_0217e334(*(struct Obj0217e334**)(obj + nodeOffset));
    func_020469b4(*(struct TailList020469b4**)(obj + listOffset), *(struct TailNode020469b4**)(obj + nodeOffset));
}
