#include <globaldefs.h>

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" int func_02083b00(unsigned char* arg0, int arg1);

// USA: func_020dd290
extern "C" ARM unsigned int func_020dd290(void* arg0, unsigned int arg1) {
    if (arg0 == 0) {
        return 0;
    }
    if (arg1 == 0) {
        return 0;
    }
    int var0 = func_02053c6c((unsigned char*)arg0);
    if (var0 != 0) {
        if (func_02083b00((unsigned char*)var0, 0x106)) {
            arg1 = (unsigned int)(0.75f * (float)arg1 + 0.75f);
        }
    }
    return arg1;
}
