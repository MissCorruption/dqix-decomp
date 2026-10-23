#include <globaldefs.h>

struct Element02079f20;
struct Container02079f20;
struct S020797f8;
typedef int (*KeyFunc02079f20)(struct Element02079f20*);

extern "C" struct Element02079f20* func_02079f20(struct Container02079f20* c, int key, KeyFunc02079f20 fn);
extern "C" int func_020797f8(struct S020797f8* p);

// USA: func_02079ee0
extern "C" ARM struct Element02079f20* func_02079ee0(void* obj, int key) {
    struct Element02079f20* r;
    if (key == 0) return NULL;
    r = func_02079f20((struct Container02079f20*)((char*)obj + 0x18), key, (KeyFunc02079f20)func_020797f8);
    if (r != NULL) return r;
    return func_02079f20((struct Container02079f20*)((char*)obj + 0x24), key, (KeyFunc02079f20)func_020797f8);
}
