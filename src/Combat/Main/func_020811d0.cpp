#include <globaldefs.h>

struct Obj2081;
struct Elem2081;

extern "C" struct Elem2081* func_02081da8(struct Obj2081* obj, int key);

// USA: func_020811d0
extern "C" ARM int func_020811d0(struct Obj2081* obj, int key) {
    return func_02081da8(obj, key) != NULL;
}
