#include <globaldefs.h>
#include "Util/Random.h"
#include "Input/Input.h"

struct BattleMenu0217b380 {
#if defined(jpn)
    char pad0[0x1faa];
#else
    char pad0[0x1d72];
#endif
    unsigned short flags;
};

struct Data0217b380 {
#if defined(jpn)
    struct BattleMenu0217b380* menu;
    int field0;
    int field4;
#else
    int field0;
    int field4;
    struct BattleMenu0217b380* menu;
#endif
};
extern struct Data0217b380 data_ov000_02184294;

struct Struct_0205c570;
extern "C" int func_0205d794(struct Struct_0205c570* s);
struct Obj_0205da38;
extern "C" int func_0205da38(struct Obj_0205da38* obj, int key);
extern "C" int func_ov000_021761c8(char* base, int index);
extern "C" int func_ov000_02175348(void* obj, int value);
struct Obj0205eaa0;
extern "C" void func_0205eaa0(struct Obj0205eaa0* obj, int a, int b);
extern "C" int func_ov000_0217ab48(void* obj);
extern "C" void func_ov000_02170db0(void* obj);
extern "C" void func_ov000_0217629c(void* obj);
extern "C" void func_ov000_0217ab8c(void* obj, int a, int b);
extern "C" void func_ov000_02176e3c(void* menu, void* obj, int state, int arg1, int arg2, int flag);

extern struct Obj0205eaa0 data_02108760;

struct MenuState0217b380 {
    char pad0[0x10];
    signed char stack[8];
    signed char stackTop;
    char pad19[4];
    signed char selection;
    char pad1e[0x1a];
    struct Struct_0205c570* window;
};

// USA: func_ov000_0217b380
extern "C" ARM int func_ov000_0217b380(struct MenuState0217b380* self, int arg1, int arg2) {
    data_ov000_02184294.menu->flags |= 0x100;
    int base = func_0205d794(self->window);
    self->selection = base;
    int pressed = g_keyManager.TestKeysPressed(0x601);
    int confirm = (pressed | func_0205da38((struct Obj_0205da38*)self->window, 0x14)) != 0;
    if (confirm) {
        if (func_0205da38((struct Obj_0205da38*)self->window, 0x14)) {
            int value = func_ov000_021761c8((char*)data_ov000_02184294.menu, base);
            int matches = func_ov000_02175348(data_ov000_02184294.menu, value);
            self->selection = NextRandomMax(GetBTRandom(), matches * 100) / 100 + (signed char)base;
        }
        func_0205eaa0(&data_02108760, 1, 0);
        self->stackTop++;
        self->stack[self->stackTop] = 100;
        func_ov000_02170db0(self);
    } else if (func_ov000_0217ab48(self)) {
        func_ov000_0217629c(self);
        self->stack[self->stackTop] = 0;
        self->stackTop--;
        self->selection = -1;
        func_ov000_0217ab8c(self, arg1, arg2);
        func_ov000_02176e3c(data_ov000_02184294.menu, self, self->stack[self->stackTop],
                            data_ov000_02184294.field4, data_ov000_02184294.field0, 0);
    }
    return -1;
}
