#include <globaldefs.h>

struct SearchStruct;
extern "C" signed char func_0202bcbc(struct SearchStruct* obj, int value);

// USA: func_0202c1c0
extern "C" ARM int func_0202c1c0(struct SearchStruct* obj, int value) {
    int idx = func_0202bcbc(obj, value);
    if (idx < 0) return 0;
    return *(unsigned char*)((char*)obj + 0x1000 + 0xc) & (1 << idx);
}
