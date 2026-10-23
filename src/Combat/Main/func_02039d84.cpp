#include <globaldefs.h>
#include "Combat/ActorAction.h"
#include "World/Object3D.h"

struct Struct_02010604;

extern "C" int func_02033b88(struct Struct_02010604* arg0, int arg1);

struct Struct_02039d84 {
    unsigned char unknown_0_[0xe0];
    unsigned char unknown_e0_;
};

// USA: func_02039d84
extern "C" ARM void func_02039d84(struct Struct_02039d84* arg0) {
    arg0->unknown_e0_ &= ~1;
    ((Object3D*)((unsigned char*)arg0))->DisableFlag(0x1190);
#if defined(jpn)
    func_02038508((struct Struct_02037d10*)((char*)arg0 + 0x260));
#else
    func_02038508((struct Struct_02037d10*)((char*)arg0 + 0x26c));
#endif
    func_02033b88((struct Struct_02010604*)arg0, 0);
}
