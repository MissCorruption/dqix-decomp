#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Input/Input.h"

#if defined(jpn)
enum { kRegionValue324_20C = 0x20c };
enum { kRegionValue390_278 = 0x278 };
enum { kRegionValue328_210 = 0x210 };
enum { kRegionValue488_2B0 = 0x2b0 };
enum { kRegionValue394_27C = 0x27c };
#else
enum { kRegionValue324_20C = 0x324 };
enum { kRegionValue390_278 = 0x390 };
enum { kRegionValue328_210 = 0x328 };
enum { kRegionValue488_2B0 = 0x488 };
enum { kRegionValue394_27C = 0x394 };
#endif

extern "C" int func_0200fb8c(int* obj);
extern "C" int func_ov017_021a4e70(unsigned char* base);

struct Outer020e28dc;
extern "C" int func_020e28dc(struct Outer020e28dc* o);
extern "C" int func_020e2984(struct Outer020e28dc* window);

struct Obj2081;
extern "C" int func_02080d54(struct Obj2081* obj, int key, int px, int py);

struct Ctx02160a68 {
    char pad0[kRegionValue324_20C];
    struct Obj2081* field324;
    char pad1[kRegionValue390_278 - kRegionValue328_210];
    struct Outer020e28dc* ptr390;
    char pad2[kRegionValue488_2B0 - kRegionValue394_27C];
    short key488;
};

// USA: func_ov003_02160a68
extern "C" ARM int func_ov003_02160a68(struct Ctx02160a68* self) {
    int flag = 0;
    unsigned char* battleWord = (unsigned char*)func_0200fb8c((int*)GameState::GetInstance());
    if (g_keyManager.TestKeysPressed(2)) {
        if (func_ov017_021a4e70(battleWord)) {
            flag = 1;
        }
    }

    if (func_020e28dc(self->ptr390)) {
        if (func_020e2984(self->ptr390)) {
            flag = 1;
        }
    } else if (g_touchInput.pressed_ != 0) {
        int a, b;
        g_touchInput.GetTouchPoint(&a, &b);
        if (!func_02080d54(self->field324, self->key488, (short)a, (short)b)) {
            flag = 1;
        }
    }
    return flag;
}
