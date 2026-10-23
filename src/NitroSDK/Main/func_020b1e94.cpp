#include <globaldefs.h>

extern int data_020e91c8;
struct Struct_020b1d48_2;
extern "C" void func_020b1d48(struct Struct_020b1d48_2*, int, int, int, int, int, int);

// USA: func_020b1e94
extern "C" ARM void func_020b1e94(struct Struct_020b1d48_2* arg0, int arg1, int arg2, int arg3, int arg4) {
    func_020b1d48(arg0, arg1, arg2, arg3, arg4, (int)&data_020e91c8, arg2);
}
