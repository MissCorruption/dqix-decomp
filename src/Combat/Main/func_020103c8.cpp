#include <globaldefs.h>

// USA: func_020103c8
extern "C" ARM void func_020103c8(void* arg0, float arg1) {
    if (!(arg1 < 0.0f)) {
        *(float*)((char*)arg0 + 0x3e0) = arg1;
    }
}
