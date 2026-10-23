#include <globaldefs.h>

struct Struct_02019508_3;
struct Struct_02019508;
extern "C" struct Struct_02019508_3* func_02012fe4(void* arg0);
extern "C" struct Struct_02019508* func_02019508(struct Struct_02019508_3* arg0, int arg1, int arg2);

// USA: func_ov017_021bf5f4
extern "C" ARM int func_ov017_021bf5f4(void* arg0) {
    struct Struct_02019508_3* var0 = func_02012fe4(arg0);
    char* var1 = *(char**)((char*)arg0 + 0xc);
    unsigned short var2 = *(unsigned short*)(var1 + 0x2c);
    unsigned short var3 = *(unsigned short*)(var1 + 0x2e);
    struct Struct_02019508* var4 = func_02019508(var0, var2, var3);
    return var4 != 0 && *(int*)((char*)var4 + 0x54) != 0;
}
