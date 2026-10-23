#include <globaldefs.h>

extern "C" int func_020d1e88(int, int);

struct Node020bc1ac { unsigned char pad[0x3c]; unsigned char field3c; };
struct Obj020bc1ac { struct Node020bc1ac* node; };

static inline bool HasNode(const struct Obj020bc1ac* o) { return o->node != NULL; }

// USA: func_020bc1ac
extern "C" ARM void func_020bc1ac(struct Obj020bc1ac* obj, int arg) {
    if (!HasNode(obj)) return;
    func_020d1e88(obj->node->field3c, arg);
}
