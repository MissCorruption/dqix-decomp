#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
enum { kRegionValue1E6_1E2 = 0x1e2 };
#else
enum { kRegionValue1E6_1E2 = 0x1e6 };
#endif

struct Outer020e28dc;
struct Obj2081;

extern "C" int func_020e28dc(struct Outer020e28dc* o);
extern "C" int func_020e2984(struct Outer020e28dc* window);
extern "C" int func_02080d54(struct Obj2081* obj, int key, int px, int py);

struct Ctx02155208 {
    char pad0[0x18];
    struct Obj2081* field18;
    struct Outer020e28dc* ptr1c;
    char pad1[kRegionValue1E6_1E2 - 0x20];
    short key1e6;
};

// USA: func_ov003_02155208
extern "C" ARM int func_ov003_02155208(struct Ctx02155208* self) {
    int flag = 0;
    if (g_keyManager.TestKeysPressed(2)) flag = 1;

    if (self->ptr1c != NULL && func_020e28dc(self->ptr1c)) {
        if (func_020e2984(self->ptr1c)) {
            flag = 1;
        }
    } else if (g_touchInput.pressed_ != 0) {
        int a, b;
        g_touchInput.GetTouchPoint(&a, &b);
        if (!func_02080d54(self->field18, self->key1e6, (short)a, (short)b)) {
            flag = 1;
        }
    }
    return flag;
}
