#include <globaldefs.h>

extern "C" void* func_020bd42c(void* arg0);
extern "C" void* func_020bc018(void* arg0, int arg1);

// USA: func_0203acc8
extern "C" ARM void func_0203acc8(void* arg0, void* arg1, int arg2) {
    if (*(int*)arg0 == 0) return;
    func_020bd42c((char*)arg0 + 4);
    if (arg1 != NULL) {
        func_020bc018(arg1, arg2);
    } else {
        func_020bc018((char*)arg0 + 0x98, arg2);
    }
}
