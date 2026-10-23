#include <globaldefs.h>

// USA: func_0205b228
extern "C" ARM void func_0205b228(void* arg0, int arg1, unsigned char arg2) {
    *(int*)((char*)arg0 + 0x4) = arg1;
    *(unsigned char*)((char*)arg0 + 0x8) = arg2;
}
