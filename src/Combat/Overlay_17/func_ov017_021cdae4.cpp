#include <globaldefs.h>

extern "C" void func_020103c8(int arg0, int arg1);

// USA: func_ov017_021cdae4
extern "C" ARM void func_ov017_021cdae4(int arg0, void* arg1, int arg2) {
    if (arg0 != 0) {
        return;
    }
    func_020103c8(arg2, *(int*)((char*)arg1 + 4));
}
