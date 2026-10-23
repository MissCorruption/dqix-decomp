#include <globaldefs.h>

#include "NitroSDK/Memory.h"

extern "C" int func_020bd8ac(unsigned int arg0);
extern "C" void func_020bd8d4(unsigned int arg0, int arg1);
extern "C" int func_020bd7c4(unsigned int arg0, void* arg1, int arg2, int arg3);
extern "C" void* func_020bd444(void);
void CleanCacheRange(const void* addr, unsigned int size);

struct Struct_020bbf84_2;
typedef void (*Type_020bbf84)(void* mem, unsigned int size, unsigned int data1, unsigned int data2);
extern "C" void* func_020bda58(struct Struct_020bbf84_2* arg0, unsigned int arg1, Type_020bbf84 arg2, int arg3, int arg4);
extern "C" void func_020be4d4(int arg0, int arg1, int arg2, int arg3);

struct Struct_02110374 {
    char unknown_0_[0x38];
    unsigned int unknown_38_;
};
extern struct Struct_02110374 data_02110374;

// USA: func_020be2ec
extern "C" ARM void* func_020be2ec(unsigned int arg0, struct Struct_020bbf84_2* arg1, int arg2) {
    unsigned int var0;
    void* var1 = (void*)func_020bd8ac(arg0);
    if (var1 != NULL) {
        goto done;
    }
    if (func_020bd7c4(arg0, &data_02110374, 0x3c, 0) != 0x3c) {
        return NULL;
    }
#if defined(jpn)
    struct Struct_02110374* var2 = (struct Struct_02110374*)0x02110014;
#else
    struct Struct_02110374* var2 = (struct Struct_02110374*)0x02110374;
#endif
    unsigned int var3 = var2->unknown_38_;
    unsigned int var4 = var3 * 4;
    var0 = var4 * 2;
    if (arg1 == NULL) {
        return NULL;
    }
    void* var5 = arg2 ? func_020bd444() : NULL;
    var1 = func_020bda58(arg1, var0 + 0x5c, (Type_020bbf84)&func_020be4d4, (int)var5, arg0);
    if (var1 == NULL) {
        return NULL;
    }
    int var6 = func_020bd7c4(arg0, var1, var4 + 0x3c, 0);
    if (var6 != (int)var4 + 0x3c) {
        return NULL;
    }
    unsigned int var7 = *(unsigned int*)((char*)var1 + 0x38);
    VectorizedInvertedMemcpy((char*)var1 + 0x3c, (char*)var1 + 0x3c + var7 * 4, var4);
    VectorizedMemset((char*)var1 + 0x3c, 0, var4);
    CleanCacheRange(var1, var0 + 0x3c);
    if (arg2) {
        func_020bd8d4(arg0, (int)var1);
    }
done:
    return var1;
}
