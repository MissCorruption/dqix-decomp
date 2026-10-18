#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Brightness.h"

extern "C" void func_ov017_021a2fa0(int h);

struct Obj021b2b14 {
    unsigned char pad0[8];
    int f8;
    unsigned char pad1[0x38 - 0xc];
    int f38;
};

// USA: func_ov017_021b2b14
ARM int CheckFieldOrClearBits_021b2b14(Obj021b2b14* p) {
    if (((BackgroundLoader*)((void*)(int)BackgroundLoader::GetInstance()))->GetNumQueuedTasks() > 0) {
        return p->f8;
    }
    int h = (int)GetGameResources();
    func_ov017_021a2fa0(h);
    ClearFlags04((GameResources*)h, 8);
    ClearFlags04((GameResources*)h, 0x10);
    p->f38 &= ~2;
    return 3;
}
