#include <globaldefs.h>
#include "GameState/GameState.h"

struct Obj02086aec {
    char pad[0xf78];
    unsigned char ids[4];
    unsigned char count;
};

extern "C" int func_02053c6c(unsigned char* obj);

struct Slots02083994;
extern "C" int func_02083994(struct Slots02083994* s, int value);

struct Container02083554;
struct Entry02083554;
extern "C" struct Entry02083554* func_02083554(struct Container02083554* c, int id);

extern "C" short func_02086bf4(char* obj, int key);

// USA: func_02086aec
extern "C" ARM short func_02086aec(struct Obj02086aec* obj, int key) {
    short acc;
    GameState* bs;
    unsigned char i;
    GameObject* c;
    void* x;
    if (key < 0) {
        return 0;
    }
    acc = 0;
    bs = GameState::GetInstance();
    for (i = 0; i < obj->count; i++) {
        c = func_0200ff1c(bs, obj->ids[i]);
        if (c != NULL) {
            x = (void*)func_02053c6c((unsigned char*)c);
            if (x != NULL) {
                acc = acc + func_02083994((struct Slots02083994*)x, key);
                if (func_02083554((struct Container02083554*)x, key) != NULL) {
                    acc = acc + 1;
                }
            }
        }
    }
    return acc + func_02086bf4((char*)obj, key);
}
