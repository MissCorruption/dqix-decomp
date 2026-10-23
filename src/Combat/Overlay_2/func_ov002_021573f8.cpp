#include <globaldefs.h>

extern "C" void func_ov002_02157424(void* arg0, int* arg1);

// USA: func_ov002_021573f8
extern "C" ARM int func_ov002_021573f8(void* arg0, int arg1) {
    int var0[7];
    if (arg1 < 0) {
        return -1;
    }
    func_ov002_02157424(arg0, var0);
    return var0[arg1];
}
