#include <globaldefs.h>

struct SearchStruct {
    char pad[0x1038];
    signed char arr[16];
};

extern "C" int func_0202c540(struct SearchStruct* obj, int value);
extern "C" signed char func_0202bcbc(struct SearchStruct* obj, int value);

// USA: func_0202c69c
extern "C" ARM void func_0202c69c(struct SearchStruct* obj, int value) {
    if (func_0202c540(obj, value)) return;
    {
        int idx = func_0202bcbc(obj, value);
        *((unsigned char*)obj + 0x100f) &= ~(1 << idx);
    }
}
