#include <globaldefs.h>

// USA: func_ov023_021f8aec
extern "C" ARM void func_ov023_021f8aec(void* arg0, int* arg1) {
    *(unsigned short*)((char*)arg0 + 0x3a) = (unsigned short)((float)arg1[0] / 4096.0f);
    *(unsigned short*)((char*)arg0 + 0x3c) = (unsigned short)((float)arg1[1] / 4096.0f);
}
