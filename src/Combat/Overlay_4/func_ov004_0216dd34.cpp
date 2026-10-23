#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void func_ov011_021848a0(void* arg0, int arg1);

// USA: func_ov004_0216dd34
extern "C" ARM int func_ov004_0216dd34(void* arg0) {
    func_ov011_021848a0(arg0, 0x193);
    return 0;
}
