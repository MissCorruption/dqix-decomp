#include <globaldefs.h>

extern "C" void* func_020bd42c(void* value);
extern "C" int func_020bec98(void* obj);

// USA: func_0203adfc
extern "C" ARM int func_0203adfc(void* obj, void* target) {
    int result;
    if (*(int*)obj == 0) return 0;
    func_020bd42c((char*)obj + 4);
    if (target != NULL) {
        result = func_020bec98(target);
    } else {
        result = func_020bec98((char*)obj + 0x9c);
    }
    return result > 0 ? 1 : 0;
}
