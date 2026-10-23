#include <globaldefs.h>
extern "C" void func_02039e7c(void*);

extern "C" void* func_0201c108(void* obj);
extern "C" void* func_0201c0e8(void* obj);
extern "C" void func_0200ee94(void* obj, int a, int b, void* cb1, void* cb2);

// USA: func_0203a878
extern "C" ARM void* func_0203a878(void* obj) {
    func_0200ee94(obj, 5, 0x88, (void*)func_0201c0e8, (void*)func_0201c108);
    func_0200ee94((char*)obj + 0x2a8, 5, 0x88, (void*)func_0201c0e8, (void*)func_0201c108);
    func_02039e7c((void*)(obj));
    return obj;
}
