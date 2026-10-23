#include <globaldefs.h>
extern "C" void func_02039e7c(void*);

extern "C" void* func_0201c108(void* arg0);
extern "C" void* func_0201c0e8(void* arg0);
extern "C" void func_0200ee94(void* arg0, int arg1, int arg2, void* arg3, void* arg4);

// USA: func_0203a878
extern "C" ARM void* func_0203a878(void* arg0) {
    func_0200ee94(arg0, 5, 0x88, (void*)func_0201c0e8, (void*)func_0201c108);
    func_0200ee94((char*)arg0 + 0x2a8, 5, 0x88, (void*)func_0201c0e8, (void*)func_0201c108);
    func_02039e7c((void*)(arg0));
    return arg0;
}
