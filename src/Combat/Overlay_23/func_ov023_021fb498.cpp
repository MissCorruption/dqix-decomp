#include <globaldefs.h>

// USA: func_ov023_021fb498
extern "C" ARM void func_ov023_021fb498(void* arg0, int* arg1) {
    *(unsigned short*)((char*)arg0 + 0x28) = (unsigned short)((float)arg1[0] / 4096.0f);
    *(unsigned short*)((char*)arg0 + 0x2a) = (unsigned short)((float)arg1[1] / 4096.0f);
}
