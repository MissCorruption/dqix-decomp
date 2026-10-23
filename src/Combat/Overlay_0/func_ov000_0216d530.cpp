#include <globaldefs.h>

extern "C" void func_ov000_0216d370(void*, int, int, int);
extern "C" void func_0202ecec(unsigned char* arg0);

// USA: func_ov000_0216d530
extern "C" ARM void func_ov000_0216d530(void* arg0, int arg1) {
    if (arg1 < 0) {
        func_ov000_0216d370(arg0, 1, 1, 1);
    } else {
        func_0202ecec((unsigned char*)arg0);
    }
    *(int*)((char*)arg0 + 0x224) = arg1;
}
