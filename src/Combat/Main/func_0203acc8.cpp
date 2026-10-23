#include <globaldefs.h>

extern "C" void* func_020bd42c(void* value);
extern "C" void* func_020bc018(void* obj, int arg);

// USA: func_0203acc8
extern "C" ARM void func_0203acc8(void* obj, void* target, int arg) {
    if (*(int*)obj == 0) return;
    func_020bd42c((char*)obj + 4);
    if (target != NULL) {
        func_020bc018(target, arg);
    } else {
        func_020bc018((char*)obj + 0x98, arg);
    }
}
