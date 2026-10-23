#include <globaldefs.h>

extern "C" int func_ov031_0221b6f0(int arg0, int arg1, void* arg2);

extern int data_ov031_0224e6a0[];

// USA: func_ov031_0221afb4
extern "C" ARM int func_ov031_0221afb4(void* arg0) {
    if (!func_ov031_0221b6f0(0x20, 0x20, arg0)) {
        return 0;
    }
    unsigned short var0 = *(unsigned short*)arg0;
    *(int*)((char*)data_ov031_0224e6a0 + 8) = (var0 << 3) - 0x400;
    return 1;
}
