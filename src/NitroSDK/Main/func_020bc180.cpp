#include <globaldefs.h>

struct Tween020c0260;
extern "C" void func_020c0204(struct Tween020c0260*, int, int);

struct Node020bc180 { unsigned char pad[0x2c]; unsigned char state; };
struct Obj020bc180 { struct Node020bc180* node; };

static inline bool HasNode(const struct Obj020bc180* o) { return o->node != NULL; }

// USA: func_020bc180
extern "C" ARM void func_020bc180(struct Obj020bc180* obj, int value, int arg) {
    if (!HasNode(obj)) return;
    if (obj->node->state == 2) return;
    func_020c0204((struct Tween020c0260*)((char*)obj->node + 0x1c), value << 8, arg);
}
