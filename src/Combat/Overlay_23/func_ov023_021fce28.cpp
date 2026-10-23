#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_ov023_021fce28 {
    char unknown_0_[0x20];
    Object3D unknown_20_;
};

// USA: func_ov023_021fce28
extern "C" ARM void func_ov023_021fce28(void *arg0, int arg1, int arg2, int arg3) {
    ((Struct_ov023_021fce28 *)arg0)->unknown_20_.Initialize();
}
