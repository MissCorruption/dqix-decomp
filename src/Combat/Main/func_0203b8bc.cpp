#include <globaldefs.h>

extern "C" void func_0203b97c(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, unsigned short arg9);

extern int data_021065d8;
extern int data_02105fd8;

// USA: func_0203b8bc
extern "C" ARM void func_0203b8bc(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, unsigned short arg8) {
    int* var0 = (int*)arg0 + (arg2 + arg1 * 4);
    var0[0x10] = 1;
    if (arg1 == 1) {
        switch (arg2) {
        case 0:
            func_0203b97c(arg0, &data_021065d8, 0x40, 0x20, arg3, arg4, arg5, arg6, arg7, arg8);
            break;
        case 1:
            func_0203b97c(arg0, &data_02105fd8, 0x20, 0x18, arg3, arg4, arg5, arg6, arg7, arg8);
            break;
        }
    }
}
