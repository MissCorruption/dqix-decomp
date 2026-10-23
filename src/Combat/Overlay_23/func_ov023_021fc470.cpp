#include <globaldefs.h>

// USA: func_ov023_021fc470
extern "C" ARM void func_ov023_021fc470(void* arg0, int* arg1) {
    *(unsigned short*)((char*)arg0 + 0x26) = (unsigned short)((float)arg1[0] / 4096.0f);
    *(unsigned short*)((char*)arg0 + 0x28) = (unsigned short)((float)arg1[1] / 4096.0f);
}
