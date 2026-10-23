#include <globaldefs.h>

struct Struct020db9a8;
extern "C" int func_020db9a8(struct Struct020db9a8* obj);

extern "C" void* func_0203bd08(void* obj);
extern "C" void func_0203be58(char*, int, int);

// USA: func_020db360
extern "C" ARM void func_020db360(struct Struct020db9a8* obj, int b) {
    void* obj2 = func_0203bd08(obj);
    int swapBit = func_020db9a8(obj);
    func_0203be58((char*)obj2, swapBit & 0xff, b);
    func_0203be58((char*)obj2, (swapBit ^ 1) & 0xff, 1);
}
