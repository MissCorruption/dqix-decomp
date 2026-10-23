#include <globaldefs.h>

// USA: func_ov017_021afb34
extern "C" ARM void func_ov017_021afb34(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    var0[0x27] |= (1 << arg1);
    int var1;
    for (var1 = 1; var1 < 4; var1++) {
        if ((var0 + var1)[0x1b] == 1) {
            if (!(var0[0x27] & (1 << var1))) break;
        }
    }
    var0[0x27] |= 0x10;
}
