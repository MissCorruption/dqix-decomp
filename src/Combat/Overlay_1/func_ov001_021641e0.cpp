#include <globaldefs.h>

// USA: func_ov001_021641e0
extern "C" ARM int func_ov001_021641e0(void* arg0, int arg1, int arg2, int arg3) {
    if (arg3 == 0)
        return 0;
    *(int*)((char*)arg0 + 0x0) = arg1;
    switch (arg1) {
    case 2:
    case 6:
        *(int*)((char*)arg0 + 0x4) = arg2;
        *(int*)((char*)arg0 + 0xc) = arg3;
        return 1;
    default:
        return 0;
    }
}
