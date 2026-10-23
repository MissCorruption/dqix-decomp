#include <globaldefs.h>

// USA: func_ov000_0215fa70
extern "C" ARM void func_ov000_0215fa70(void* arg0, short arg1, short arg2, short arg3) {
    *(short*)((char*)arg0 + 0x8e4a) = (short)arg1;
    *(short*)((char*)arg0 + 0x8e4c) = (short)arg2;
    *(short*)((char*)arg0 + 0x8e4e) = (short)arg3;
}
