#include <globaldefs.h>

extern "C" void func_ov002_02153e90(void*);

// USA: func_ov002_02157ce0
extern "C" ARM void func_ov002_02157ce0(char* arg0) {
    *(short*)arg0 = 0;
    arg0[2] = -1;
    arg0[3] = 0;
    for (int var0 = 0; var0 < 4; var0++) {
        char* var1 = arg0 + var0;
        var1[4] = -1;
        func_ov002_02153e90(arg0 + 8 + var0 * 6);
        func_ov002_02153e90(arg0 + 0x20 + var0 * 6);
    }
    *(int*)(arg0 + 0x38) = 0;
}
