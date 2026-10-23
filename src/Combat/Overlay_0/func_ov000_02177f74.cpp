#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x1f00
#define REGION_OFFSET_1 0xa6
#else
#define REGION_OFFSET_0 0x1d00
#define REGION_OFFSET_1 0x6e
#endif

struct Struct_0205c508;
struct Struct_0201099c_3;

extern "C" void func_0205c508(struct Struct_0205c508* arg0, int* arg1, int* arg2);
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_ov000_0217542c(void* arg0);
extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" int func_ov000_0218158c(void* arg0, int arg1);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);

// USA: func_ov000_02177f74
extern "C" ARM void func_ov000_02177f74(void* arg0, char* arg1) {
    int var0;
    int var1;
    func_0205c508((struct Struct_0205c508*)((char*)arg0 + 0x1dc), &var0, &var1);
    signed char var2 = var0;
    signed char var3 = var1;
    struct Struct_0201099c_3* var4 = (struct Struct_0201099c_3*)((char*)arg0 + 0xb8);
    int var5 = func_020e0434(var4, 0);
    signed char var6 = *(signed char*)((char*)arg0 + REGION_OFFSET_0 + REGION_OFFSET_1);
    int var7 = 0;

    if (func_ov000_0217542c(arg0)) {
        func_02041c08(arg1, var6 - var2, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var6 - var2);

    for (signed char var8 = var2; var8 < var3; var8++) {
        short var9 = func_ov000_0218158c(arg0, var8);
        short var10 = var9 + 7;
        int var11 = func_020e0434(var4, var10);
        func_02041b70(arg1, var7, (const char*)var11);
        if (var8 != var3 - 1) {
            func_02042058(arg1, (const char*)var5);
        }
        var7++;
    }
}
