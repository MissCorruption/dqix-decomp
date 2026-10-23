#include <globaldefs.h>

extern "C" int func_020bd79c(unsigned int arg0);
extern "C" int func_020bd7c4(unsigned int arg0, void* arg1, int arg2, int arg3);
struct Struct_020bbf84_2;
typedef void (*Type_020bbf84)(void* mem, unsigned int size, unsigned int data1, unsigned int data2);
extern "C" void* func_020bda58(struct Struct_020bbf84_2* arg0, unsigned int arg1, Type_020bbf84 arg2, int arg3, int arg4);
void CleanCacheRange(const void* addr, unsigned int size);

// USA: func_020be09c
extern "C" ARM void* func_020be09c(unsigned int arg0, Type_020bbf84 arg1, int arg2, int arg3, struct Struct_020bbf84_2* arg4) {
    unsigned int var0 = func_020bd79c(arg0);
    if (!var0) {
        return 0;
    }
    if (!arg4) {
        return 0;
    }
    void* var1 = func_020bda58(arg4, var0 + 0x20, arg1, arg2, arg3);
    if (!var1) {
        return 0;
    }
    if (func_020bd7c4(arg0, var1, var0, 0) != (int)var0) {
        return 0;
    }
    CleanCacheRange(var1, var0);
    return var1;
}
