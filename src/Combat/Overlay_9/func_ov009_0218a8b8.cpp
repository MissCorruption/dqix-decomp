#include <globaldefs.h>
#include "std_library_functions.h"

extern int data_ov009_0218a9ac[];

struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);

// USA: func_ov009_0218a8b8
extern "C" ARM void func_ov009_0218a8b8(void* arg0) {
    char* var0 = (char*)arg0;
    void** var1 = *(void***)(var0 + 0xdb0);
    void* var2 = var1[*(unsigned char*)(var0 + 0xda3)];
    int var3;
    int var4;
    int var5;
    unsigned char var6;

    memset(var2, 0, 0x48);

    var6 = *(unsigned char*)(var0 + 0xda3);
    int var7 = data_ov009_0218a9ac[var6];
    var3 = rand() % var7;

    var6 = *(unsigned char*)(var0 + 0xda3);
    int var8 = var6 * 1000;
    var8 += 0xe20;
    var8 += 0x4000;
    var4 = (short)(var3 + var8);
    var5 = func_020e0434((struct Struct_0201099c_3*)(var0 + 0xe0), var4);

    sprintf((char*)var2, (const char*)(long)var5);
}
