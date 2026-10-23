#include <globaldefs.h>

extern "C" void func_ov014_02184a64(void*);

// USA: func_ov014_02186d64
extern "C" ARM void func_ov014_02186d64(void* arg0) {
    if (*(unsigned char*)((char*)arg0 + 0x17a) == 4) {
        func_ov014_02184a64(arg0);
    }
}
