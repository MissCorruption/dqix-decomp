#include <globaldefs.h>

// USA: func_ov001_02164194
extern "C" ARM int func_ov001_02164194(void* arg0, int arg1, int arg2, int arg3) {
    if (arg3 == 0) {
        return 0;
    }
    *(int*)arg0 = arg1;
    switch (arg1) {
        case 0:
        case 1:
        case 4:
        case 5:
            *(int*)((char*)arg0 + 0x4) = arg2;
            *(int*)((char*)arg0 + 0xc) = arg3;
            return 1;
    }
    return 0;
}
