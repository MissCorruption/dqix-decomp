#include <globaldefs.h>

// USA: func_ov011_02184a24
extern "C" ARM void func_ov011_02184a24(void* arg0, int arg1, int arg2) {
    *(int*)((char*)arg0 + 0x1b4) = arg1;
    *(int*)((char*)arg0 + 0x1b8) = arg2;
}
