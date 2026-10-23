#include <globaldefs.h>

struct Obj2081;

extern "C" unsigned char* func_02081da8(struct Obj2081* obj, int key);
extern "C" int func_0204c7e0(unsigned char* obj);

// USA: func_020811e8
extern "C" ARM int func_020811e8(struct Obj2081* obj, int key) {
    unsigned char* elem = func_02081da8(obj, key);
    if (elem != NULL) {
        return func_0204c7e0(elem) != 0;
    }
    return 0;
}
