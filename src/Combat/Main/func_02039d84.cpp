#include <globaldefs.h>
#include "Combat/ActorAction.h"
#include "World/Object3D.h"

struct Bytes02033b88;

extern "C" int func_02033b88(struct Bytes02033b88* p, int val);

struct Obj02039d84 {
    unsigned char pad[0xe0];
    unsigned char flags_e0;
};

// USA: func_02039d84
extern "C" ARM void func_02039d84(struct Obj02039d84* obj) {
    obj->flags_e0 &= ~1;
    ((Object3D*)((unsigned char*)obj))->DisableFlag(0x1190);
#if defined(jpn)
    func_02038508((struct SubBlock02038508*)((char*)obj + 0x260));
#else
    func_02038508((struct SubBlock02038508*)((char*)obj + 0x26c));
#endif
    func_02033b88((struct Bytes02033b88*)obj, 0);
}
