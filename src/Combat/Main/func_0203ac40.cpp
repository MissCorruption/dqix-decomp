#include <globaldefs.h>

extern "C" int func_020d84ec(void);
extern "C" void* func_020bd42c(void* arg0);
extern "C" int func_020be7a8(void* arg0, int arg1, int arg2);

// USA: func_0203ac40
extern "C" ARM int func_0203ac40(void* arg0, int arg1, int arg2, void* arg3) {
    char* var0 = (char*)arg0;
    if (func_020d84ec()) {
        *(unsigned short*)(var0 + 0xac) = (unsigned short)arg1;
        *(unsigned short*)(var0 + 0xae) = (unsigned short)arg2;
        return 1;
    }
    int var1 = 0;
    if (*(int*)var0 != 0) {
        func_020bd42c(var0 + 0x4);
        if (arg3 != 0) {
            if (func_020be7a8(arg3, arg1, arg2) != 0) var1 = 1;
        } else {
            if (func_020be7a8(var0 + 0x98, arg1, arg2) != 0) var1 = 1;
        }
    }
    return var1;
}
