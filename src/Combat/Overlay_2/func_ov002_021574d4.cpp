#include <globaldefs.h>

extern "C" void func_ov002_02157480(void* arg0, int* arg1);

// USA: func_ov002_021574d4
extern "C" ARM int func_ov002_021574d4(void* arg0, int arg1) {
    int var0[4];
    if (arg1 < 0) {
        return -1;
    }
    func_ov002_02157480(arg0, var0);
    return var0[arg1];
}
