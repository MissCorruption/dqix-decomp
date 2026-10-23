#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Brightness.h"

extern "C" void func_ov017_021a2fa0(int arg0);

struct Struct_ov017_021b2b14 {
    unsigned char unknown_0_[8];
    int unknown_8_;
    unsigned char unknown_c_[0x38 - 0xc];
    int unknown_38_;
};

// USA: func_ov017_021b2b14
extern "C" ARM int func_ov017_021b2b14(Struct_ov017_021b2b14* arg0) {
    if (((BackgroundLoader*)((void*)(int)BackgroundLoader::GetInstance()))->GetNumQueuedTasks() > 0) {
        return arg0->unknown_8_;
    }
    int var0 = (int)GetGameResources();
    func_ov017_021a2fa0(var0);
    ClearFlags04((GameResources*)var0, 8);
    ClearFlags04((GameResources*)var0, 0x10);
    arg0->unknown_38_ &= ~2;
    return 3;
}
