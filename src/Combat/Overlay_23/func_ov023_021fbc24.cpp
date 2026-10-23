#include <globaldefs.h>

// USA: func_ov023_021fbc24
extern "C" ARM void func_ov023_021fbc24(void* arg0, int* arg1) {
    *(unsigned short*)((char*)arg0 + 0x32) = (unsigned short)((float)arg1[0] / 4096.0f);
    *(unsigned short*)((char*)arg0 + 0x34) = (unsigned short)((float)arg1[1] / 4096.0f);
}
