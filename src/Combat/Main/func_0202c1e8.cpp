#include <globaldefs.h>

struct SearchStruct;
extern "C" signed char func_0202bcbc(struct SearchStruct* obj, int value);
extern "C" void func_0202c288(void* obj);

// USA: func_0202c1e8
extern "C" ARM void func_0202c1e8(struct SearchStruct* obj, int value) {
    int idx = func_0202bcbc(obj, value);
    if (idx < 0) return;
    *((unsigned char*)obj + 0x100c) |= (1 << idx);
    func_0202c288(obj);
}
