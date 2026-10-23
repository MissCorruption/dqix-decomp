#include <globaldefs.h>

// USA: func_ov011_02184be0
extern "C" ARM void func_ov011_02184be0(void* arg0, int arg1, int arg2) {
    *(short*)((char*)arg0 + 0x1c0) = arg1;
    *(short*)((char*)arg0 + 0x1c2) = arg2;
}
