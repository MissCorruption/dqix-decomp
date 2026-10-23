#include <globaldefs.h>

extern "C" void* func_020bd42c(void*);
extern "C" int func_020bec30(void* arg0, int arg1, int arg2);
extern "C" void func_020bbd9c(void);

// USA: func_0203ad14
extern "C" ARM int func_0203ad14(void* arg0, int arg1, void* arg2, int arg3) {
    char* var0 = (char*)arg0;
    int var1;
    if (*(void**)var0 == NULL) return 0;
    func_020bd42c(var0 + 0x4);
    *(unsigned short*)(var0 + 0xa4) = arg1;
    *(int*)(var0 + 0xa8) = 0;
    if (arg2 != NULL) {
        var1 = func_020bec30(arg2, arg1, arg3);
    } else {
        var1 = func_020bec30(var0 + 0x9c, arg1, arg3);
    }
    func_020bbd9c();
    return var1;
}
