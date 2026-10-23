#include <globaldefs.h>

extern void* data_ov031_0224e5d8;

extern "C" int func_020d503c(int arg0);

// USA: func_ov031_02216070
extern "C" ARM int func_ov031_02216070(int arg0) {
    if (arg0 == 0) {
        return -1;
    }
    *(int*)((char*)data_ov031_0224e5d8 + 0x1000 + 0xa90) = 3;
    data_ov031_0224e5d8 = 0;
    int var0 = func_020d503c(arg0);
    return (var0 == 2) ? 0 : var0;
}
