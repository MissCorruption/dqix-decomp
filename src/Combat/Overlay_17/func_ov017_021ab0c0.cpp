#if defined(jpn)
enum { RegionOffset36 = 0x2a };
#else
enum { RegionOffset36 = 0x36 };
#endif

#include <globaldefs.h>
#include "Input/Input.h"

struct Ctx021ab0c0 {
    char pad0[0x18];
    void* p18;
    char pad1[0x44 - 0x1c];
    short* p44;
    char pad2[0x48 - 0x48];
    short s48;
    char pad3[0x4e - 0x4a];
    short s4e;
};

extern "C" int func_02080dd4(void* obj, int p1, int unused2, int unused3, unsigned char* outFlag, unsigned char extra);
extern "C" void func_020813ec(void* obj, int key);

// USA: func_ov017_021ab0c0
extern "C" ARM int func_ov017_021ab0c0(struct Ctx021ab0c0* ctx) {
    unsigned char flag = 0;
    if (g_keyManager.TestKeysPressed(0x401)) {
        flag = 1;
    }
    if (g_touchInput.pressed_ != 0 && ctx->p44 != NULL) {
        void* obj = ctx->p18;
        int a, b;
        g_touchInput.GetTouchPoint(&a, &b);
        ctx->s4e = *ctx->p44;
        int result = func_02080dd4(obj, ctx->s48, (short)a, (short)b, &flag, 1);
        if (result < 0) {
            return 0;
        }
        *ctx->p44 = (short)result;
        short cur = *ctx->p44;
        if (ctx->s4e != cur) {
            *(short*)((char*)obj + RegionOffset36) = cur;
            func_020813ec(obj, ctx->s48);
        }
    }
    return flag;
}
