#include <globaldefs.h>

extern "C" int func_ov004_021666bc(void* arg0, int* arg1);
extern "C" void* func_ov004_02165e70(void* arg0, int arg1);
struct Struct_02065990_2;
extern "C" void func_0208bf28(struct Struct_02065990_2* arg0, int arg1, unsigned char arg2);

// USA: func_ov004_02166fa0
extern "C" ARM int func_ov004_02166fa0(void* arg0) {
    int var0;
    int var1 = func_ov004_021666bc(arg0, &var0);
    unsigned char var2 = *(unsigned char*)&var0;

    void* var3 = func_ov004_02165e70(arg0, 7);
    if (var3) {
        func_0208bf28((struct Struct_02065990_2*)((char*)var3 + 0x34), var1, var2);
    }
    return 0;
}
