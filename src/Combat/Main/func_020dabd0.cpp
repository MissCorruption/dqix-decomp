#include <globaldefs.h>

extern "C" void* func_02057924(void* arg0);
extern "C" void func_02057f00(void* arg0, int arg1);

// USA: func_020dabd0
extern "C" ARM int func_020dabd0(void* arg0) {
    void* var0 = func_02057924(arg0);
    unsigned char var1 = *((unsigned char*)arg0 + 0xe);
    switch (var1) {
    case 1:
        func_02057f00(var0, 0x14);
        func_02057f00(var0, 0x15);
        break;
    case 2:
        func_02057f00(var0, 0x14);
        func_02057f00(var0, 0x15);
        break;
    case 3:
        func_02057f00(var0, 0x16);
        break;
    }
    return 1;
}
