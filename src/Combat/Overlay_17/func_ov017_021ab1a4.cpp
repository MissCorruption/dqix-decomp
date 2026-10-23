#include <globaldefs.h>
#include "Input/Input.h"

struct Obj2081;

struct Ctx021ab1a4 {
    char pad[0x18];
    struct Obj2081* obj18;
};

extern "C" int func_02080d54(struct Obj2081* obj, int key, int px, int py);

// USA: func_ov017_021ab1a4
extern "C" ARM int func_ov017_021ab1a4(struct Ctx021ab1a4* ctx) {
    int flag = 0;
    if (g_keyManager.TestKeysPressed(0x2)) {
        flag = 1;
    }
    if (g_touchInput.pressed_ != 0) {
        int a, b;
        g_touchInput.GetTouchPoint(&a, &b);
        if (!func_02080d54(ctx->obj18, 0, (short)a, (short)b)) {
            if (!func_02080d54(ctx->obj18, 1, (short)a, (short)b)) {
                flag = 1;
            }
        }
    }
    return flag;
}
