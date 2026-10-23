#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "GameState/Field3b0.h"
#include "Input/Input.h"

extern "C" void func_020a20d8(void* actor);

struct Struct021931b4;
extern "C" void func_ov015_021931b4(struct Struct021931b4* s, int v);
struct Owner_021931cc;
extern "C" int func_ov015_021931cc(struct Owner_021931cc* o);
extern "C" void func_ov015_02192700(void* obj, int a1);
struct S0218f1c4;
extern "C" ARM void func_ov015_0218f1c4(struct S0218f1c4* obj);

struct ListNode02190d7c {
    int value;
    struct ListNode02190d7c* next;
};

struct S02190d7c {
    char pad0[0x2c];
    struct ListNode02190d7c* list;
    char pad1[0x38 - 0x2c - 4];
    signed char field38;
    char pad2[0x194 - 0x38 - 1];
    int field194;
    int field198;
    char pad3[0x1a4 - 0x198 - 4];
    int field1a4;
};

// USA: func_ov015_02190d7c
extern "C" ARM void func_ov015_02190d7c(struct S02190d7c* obj) {
    GameState* bs = GameState::GetInstance();
    if (bs == 0) {
        return;
    }
    void* f3b0 = func_020100bc(bs);
    if (f3b0 != 0) {
        func_020a20d8(f3b0);
    }

    struct ListNode02190d7c* node = obj->list;
    while (node != 0) {
        func_ov015_0218f1c4((struct S0218f1c4*)node->value);
        node = node->next;
    }

    if (!g_keyManager.TestKeysPressed(4)) {
        return;
    }

    int tmp = obj->field194;
    obj->field194 = obj->field198;
    obj->field198 = tmp;

    int v;
    if (obj->field194 == 2) {
        func_ov015_021931b4((struct Struct021931b4*)obj, obj->field1a4);
        obj->field1a4 = 0x23;
        goto cleanup;
    }

    do {
        v = func_ov015_021931cc((struct Owner_021931cc*)obj);
    } while (v >= 0x23);

    signed char state = obj->field38;
    if (state >= 0) {
        switch (state) {
        case 0:
        case 1:
            while (v >= 0xf) {
                v = func_ov015_021931cc((struct Owner_021931cc*)obj);
            }
            goto reset;
        case 2:
            while (v >= 0x21) {
                v = func_ov015_021931cc((struct Owner_021931cc*)obj);
            }
            goto reset;
        default:
        reset:
            obj->field38 = -1;
            if (obj->field194 == 1) {
                obj->field194 = 0;
            }
            break;
        }
    }

    obj->field1a4 = v;
cleanup:
    func_ov015_02192700(obj, 0);
}
