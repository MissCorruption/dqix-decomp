#include <globaldefs.h>

extern "C" void func_0200ef44(void* arg0, int arg1, int arg2, void* arg3);
extern "C" char* func_0203be78(char* arg0);
extern "C" void func_0203c304(char* arg0);

// USA: func_0203c75c
extern "C" ARM char* func_0203c75c(char* arg0) {
    func_0203c304(arg0 + 0x10);
    func_0203c304(arg0 + 0x10);
#if defined(jpn)
    func_0200ef44(arg0 + 0x14, 0x60, 0x10, (void*)func_0203be78);
#else
    func_0200ef44(arg0 + 0x14, 0x20, 0x28, (void*)func_0203be78);
#endif
    return arg0;
}
