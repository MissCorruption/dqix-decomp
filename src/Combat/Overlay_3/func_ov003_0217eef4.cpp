// KEEP-NAME
// USA: func_ov003_0217eef4
#include <globaldefs.h>

struct Obj0217eef4 {
    unsigned char unknown[0x1c];
    void* child;
};

extern "C" void func_ov009_02184ca4(void*);

extern "C" ARM void func_ov003_0217eef4(Obj0217eef4* owner) {
    if (owner->child) {
        func_ov009_02184ca4(owner->child);
    }
}
