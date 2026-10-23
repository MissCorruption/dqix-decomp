#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020bc0a4(int id);
struct Obj020bc180;
extern "C" void func_020bc180(struct Obj020bc180* obj, int value, int arg);
extern "C" void* func_020bc068(void* obj, int unused);
extern "C" void func_0203aa80(void* obj, int arg2);
extern "C" int func_0203aaf8(void* obj, void* arg1, int* out);
struct Obj0203aba8;
extern "C" int func_0203aba8(struct Obj0203aba8* obj, void* key, void* target);
extern "C" void func_0209c2e0(void* obj, int a, int b);
extern "C" void func_020bbd9c(void);
extern "C" void func_0203ac10(void* obj, void* a, int b);
extern "C" int func_0203ab6c(void* obj, void* arg1);

struct Actor0209c840 {
    char pad0[0xb0];
    int state;
    int field_b4;
    short field_b8;
    short field_ba;
    void* fieldBC;
    void* fieldC0;
    void* fieldC4;
    unsigned char fc8_bit0 : 1;
    unsigned char fc8_rest : 7;
    unsigned char field_c9;
    unsigned short field_ca;
    unsigned char field_cc;
    unsigned char field_cd;
    short field_ce;
};

// USA: func_0209c840
extern "C" ARM void func_0209c840(struct Actor0209c840* actor) {
    GameState* battle = GameState::GetInstance();

    if (actor->field_c9 == 1) {
        actor->field_ca = 0x320;
        if (actor->state == 1) {
            int count = func_020bc0a4(actor->field_b8);
            if (count <= 0) {
                actor->field_ca = 0;
            } else {
                actor->fc8_bit0 = 1;
                func_020bc180((struct Obj020bc180*)&actor->fieldBC, 0, 0x14);
            }
        } else if (actor->state == 2) {
            actor->field_ca = 0;
        }
        actor->field_c9 = 2;
        return;
    }

    if (actor->field_c9 == 2) {
        unsigned int elapsed = battle->GetEffectiveDeltaTime();
        if (elapsed < actor->field_ca) {
            actor->field_ca = actor->field_ca - elapsed;
            return;
        }
        func_020bc068(&actor->fieldBC, 1);
        if (actor->field_b4 > 0) {
            func_0203aa80(actor, actor->field_b4);
        }
        func_0203aaf8(actor, (void*)(int)actor->field_ce, 0);
        func_0203aba8((struct Obj0203aba8*)actor, (void*)(int)actor->field_ce, &actor->fieldC4);
        func_0209c2e0(actor, actor->field_cd, 0);
        func_020bbd9c();
        actor->field_ca = 0x1f4;
        actor->field_c9 = 3;
        return;
    }

    if (actor->field_c9 != 3) {
        return;
    }

    if (actor->field_ce > -1 && func_020bc0a4(actor->field_ce) > 0) {
        return;
    }

    {
        unsigned int elapsed = battle->GetEffectiveDeltaTime();
        if (elapsed < actor->field_ca) {
            actor->field_ca = actor->field_ca - elapsed;
            return;
        }
    }

    func_0203ac10(actor, &actor->fieldC4, 0);
    actor->field_ce = -1;
    if (actor->state == 1) {
        if (actor->field_b4 > 0) {
            func_0203aa80(actor, actor->field_b4);
        }
        func_0203ab6c(actor, (void*)(int)actor->field_b8);
        if (actor->fc8_bit0) {
            func_020bc068(&actor->fieldBC, 0);
            func_020bc180((struct Obj020bc180*)&actor->fieldBC, 0, 0);
            func_0209c2e0(actor, actor->field_cd, 0x1e);
        } else {
            func_0209c2e0(actor, actor->field_cd, 0);
        }
    }
    actor->field_c9 = 0;
}
