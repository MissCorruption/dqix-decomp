#include <globaldefs.h>

struct KeyMap020a0b3c;
extern "C" signed char func_020a0b3c(struct KeyMap020a0b3c* map, int key);
extern "C" int func_0207c7a0(void* p, int key, int n);

// USA: func_02086bf4
extern "C" ARM short func_02086bf4(char* obj, int key) {
    short acc = 0;
    if (key < 0) {
        return 0;
    }
    acc = acc + func_020a0b3c((struct KeyMap020a0b3c*)obj, key);
    acc = acc + func_0207c7a0(obj + 0x1d4, key, 9);
    acc = acc + func_020a0b3c((struct KeyMap020a0b3c*)(obj + 0xe04), key);
    return acc;
}
