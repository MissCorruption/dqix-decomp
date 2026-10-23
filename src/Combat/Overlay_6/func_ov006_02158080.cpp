#include <globaldefs.h>

struct Obj2081;
struct Elem2081;
extern "C" struct Elem2081* func_02081da8(struct Obj2081* obj, int key);
extern "C" int func_02080c3c(struct Obj2081* obj, int key);

// USA: func_ov006_02158080
extern "C" ARM int func_ov006_02158080(struct Obj2081* obj, int key) {
    if (func_02081da8(obj, key) != NULL) {
        if (func_02080c3c(obj, key) != 0) {
            return 1;
        }
    }
    return 0;
}
