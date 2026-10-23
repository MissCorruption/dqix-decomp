#include <globaldefs.h>

// USA: func_ov006_02153c60
extern "C" ARM void func_ov006_02153c60(void* arg0, int arg1, unsigned short arg2) {
    *(int*)((char*)arg0 + 0x20) = arg1;
    *(unsigned short*)((char*)arg0 + 0x24) = arg2;
}
