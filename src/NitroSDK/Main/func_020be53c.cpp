#include <globaldefs.h>

struct Struct_020be53c;
extern "C" int func_020d2eb0(struct Struct_020be53c* arg0);
extern "C" void* func_020d2eec(void* arg0, int arg1);
struct Struct_020bbf84_2;
typedef void (*Type_020bbf84)(void* mem, unsigned int size, unsigned int data1, unsigned int data2);
extern "C" void* func_020bda58(struct Struct_020bbf84_2* arg0, unsigned int arg1, Type_020bbf84 arg2, int arg3, int arg4);
extern "C" int func_020bd7c4(int arg0, void* arg1, int arg2, int arg3);
void CleanCacheRange(const void* addr, unsigned int size);
struct Struct_020be4f4;
extern "C" void func_020d2eb8(struct Struct_020be4f4* arg0, int arg1, int arg2);
extern "C" void func_020be4f4(int arg0, int arg1, void* arg2, int arg3);

// USA: func_020be53c
extern "C" ARM int func_020be53c(void* arg0, int arg1, int arg2, struct Struct_020bbf84_2* arg3) {
    int var0;
    if ((int)func_020d2eec(arg0, arg1) != 0) return 1;
    int var1 = func_020d2eb0((struct Struct_020be53c*)arg0);
    int var2 = *(int*)((char*)arg0 + 0x38) + arg1;
    int* var3 = (int*)arg0 + var2;
    int var4;
    int var5 = var3[15];
    if ((unsigned int)arg1 < (unsigned int)(var1 - 1)) var4 = var3[16];
    else var4 = ((int*)arg0)[2];
    var0 = var4 - var5;
    if (arg3 == 0) return 0;
    void* var6 = func_020bda58(arg3, var0 + 0x20, (Type_020bbf84)&func_020be4f4, (int)arg0, arg1);
    if (var6 == 0) return 0;
    int var7 = func_020bd7c4(arg2, var6, var0, var5);
    if (var0 != var7) return 0;
    CleanCacheRange(var6, var0);
    func_020d2eb8((struct Struct_020be4f4*)arg0, arg1, (int)var6);
    return 1;
}
