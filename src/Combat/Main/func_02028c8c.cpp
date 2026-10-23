#include <globaldefs.h>

#if defined(jpn)
enum { objectSize = 0x314 };
#else
enum { objectSize = 0x318 };
#endif
extern "C" void func_02028cfc(void*);
extern "C" void func_02028ccc(void*);

extern "C" void func_0200ee94(void* obj, int a, int b, void* cb1, void* cb2);
extern "C" void func_020287b4(void* obj);

// USA: func_02028c8c
extern "C" ARM void* func_02028c8c(void* obj) {
    func_0200ee94(obj, 4, objectSize, (void*)func_02028ccc, (void*)func_02028cfc);
    func_020287b4(obj);
    return obj;
}
