#include <globaldefs.h>

extern "C" ARM void func_020404c0(int* arg0);

// USA: func_02040504
extern "C" ARM void func_02040504(int* arg0) {
    arg0[5] = 0;
    arg0[6] = 0;
    arg0[7] = 0;
    func_020404c0(arg0);
}
