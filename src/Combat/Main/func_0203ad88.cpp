#include <globaldefs.h>

extern "C" void* func_020bd42c(void*);
extern "C" int func_020bec98(void* arg0);
extern "C" void func_020bec58(void* volatile* arg0, int arg1);

// USA: func_0203ad88
extern "C" ARM int func_0203ad88(void* arg0, void* arg1, int arg2) {
    char* var0 = (char*)arg0;
    int var1;
    if (*(void**)var0 == NULL) return 0;
    func_020bd42c(var0 + 0x4);
    if (arg1 != NULL) {
        var1 = func_020bec98(arg1);
        func_020bec58((void* volatile*)arg1, arg2);
    } else {
        var1 = func_020bec98(var0 + 0x9c);
        func_020bec58((void* volatile*)(var0 + 0x9c), arg2);
    }
    *(short*)(var0 + 0xa4) = -1;
    return var1;
}
