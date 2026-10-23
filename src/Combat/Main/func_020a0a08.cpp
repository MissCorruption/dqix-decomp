#include <globaldefs.h>

struct S_a0af4;
extern "C" short func_020a0af4(struct S_a0af4* p, int key);
struct KeyMap020a0a60;
extern "C" void func_020a0a60(struct KeyMap020a0a60* map, short i);

struct KeyMap020a0a08 { short* keys; signed char* vals; short count; };

// USA: func_020a0a08
extern "C" ARM int func_020a0a08(struct KeyMap020a0a08* map, int key, int amount) {
    short* keys = map->keys;
    signed char* vals = map->vals;
    short idx = func_020a0af4((struct S_a0af4*)map, key);
    int ret = 0;
    if (idx >= 0) {
        vals[idx] -= amount;
        if (vals[idx] <= 0) {
            keys[idx] = ret - 1;
            vals[idx] = ret;
            func_020a0a60((struct KeyMap020a0a60*)map, idx);
        }
        ret = 1;
    }
    return ret;
}
