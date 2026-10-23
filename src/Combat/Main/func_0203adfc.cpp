#include <globaldefs.h>

extern "C" void* func_020bd42c(void* arg0);
extern "C" int func_020bec98(void* arg0);

// USA: func_0203adfc
extern "C" ARM int func_0203adfc(void* arg0, void* arg1) {
    int var0;
    if (*(int*)arg0 == 0) return 0;
    func_020bd42c((char*)arg0 + 4);
    if (arg1 != NULL) {
        var0 = func_020bec98(arg1);
    } else {
        var0 = func_020bec98((char*)arg0 + 0x9c);
    }
    return var0 > 0 ? 1 : 0;
}
