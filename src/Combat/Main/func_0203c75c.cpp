#include <globaldefs.h>

extern "C" void func_0200ef44(void* obj, int count, int size, void* initFn);
extern "C" char* func_0203be78(char* obj);
extern "C" void func_0203c304(char* obj);

// USA: func_0203c75c
extern "C" ARM char* func_0203c75c(char* obj) {
    func_0203c304(obj + 0x10);
    func_0203c304(obj + 0x10);
#if defined(jpn)
    func_0200ef44(obj + 0x14, 0x60, 0x10, (void*)func_0203be78);
#else
    func_0200ef44(obj + 0x14, 0x20, 0x28, (void*)func_0203be78);
#endif
    return obj;
}
