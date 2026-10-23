#include <globaldefs.h>

extern "C" int func_ov031_02223478(int);
extern "C" int func_ov031_0223b61c(int, int*, int);
void CleanInvalidateCacheRange(const void* addr, unsigned int size);

extern "C" void func_ov031_0223b710(int arg0);

typedef void (*Type_ov031_022234d8)(void*, int, int);

// USA: func_ov031_022234d8
extern "C" ARM void func_ov031_022234d8(int arg0, Type_ov031_022234d8 arg1) {
    int var0 = func_ov031_02223478(arg0);
    int var1;
    int var2 = func_ov031_0223b61c(var0, &var1, 4);
    CleanInvalidateCacheRange((void*)var2, var1);
    arg1((void*)var2, 0, var1);
    func_ov031_0223b710(var2);
}
