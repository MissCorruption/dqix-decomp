#include <globaldefs.h>
#if defined(jpn)
enum { kCount = 0x60, kStride = 0x10 };
#else
enum { kCount = 0x20, kStride = 0x28 };
#endif

extern "C" void func_0200ee94(void* obj, int count, int size, void* initFn1, void* initFn2);
extern "C" char* func_0203be64(char* obj);
extern "C" char* func_0203be78(char* obj);
extern "C" void func_0203c304(char* obj);

// USA: func_0203c2c0
extern "C" ARM char* func_0203c2c0(char* obj) {
    func_0200ee94(obj + 4, kCount, kStride, (void*)func_0203be64, (void*)func_0203be78);
    func_0203c304(obj);
    return obj;
}
