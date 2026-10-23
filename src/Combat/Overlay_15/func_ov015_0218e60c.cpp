#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "World/Object3D.h"
#include "Input/Input.h"

extern "C" void func_02055774(int* obj);

struct SubP_0218e60c {
    char pad0xc[0xc];
    int field0xc;
};

struct S0218e60c {
    char pad0x24[0x24];
    void* field0x24;
    struct SubP_0218e60c* field0x28;
    char pad0x3a[0xe];
    unsigned char field0x3a;
};

// USA: func_ov015_0218e60c
extern "C" ARM void func_ov015_0218e60c(struct S0218e60c* obj) {
    int ok = 0;
    if (obj->field0x3a != 0) {
        if (g_keyManager.TestKeysPressed(0x100) != 0) {
            ok = 1;
        }
    } else {
        ok = 1;
    }
    if (ok == 0) {
        return;
    }
    struct SubP_0218e60c* p = obj->field0x28;
    if (p->field0xc != 0) {
        func_02055774((int*)p);
    } else {
        ((Object3D*)obj->field0x24)->AdvanceEffects();
    }
}
