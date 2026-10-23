#include <globaldefs.h>

struct Struct_020db264;
extern "C" int func_020db9a8(struct Struct_020db264* arg0);

extern "C" void* func_0203bd08(void* arg0);
extern "C" void func_0203be58(char*, int, int);

// USA: func_020db360
extern "C" ARM void func_020db360(struct Struct_020db264* arg0, int arg1) {
    void* var0 = func_0203bd08(arg0);
    int var1 = func_020db9a8(arg0);
    func_0203be58((char*)var0, var1 & 0xff, arg1);
    func_0203be58((char*)var0, (var1 ^ 1) & 0xff, 1);
}
