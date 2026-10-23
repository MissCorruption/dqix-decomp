#include <globaldefs.h>

extern "C" void* func_ov004_0215e4c0(void* arg0, int arg1);
struct Struct_ov004_0215f6f4;
extern "C" void func_ov023_021f8944(struct Struct_ov004_0215f6f4* arg0, int arg1, int arg2, int arg3);

// USA: func_ov004_0215f6f4
extern "C" ARM void func_ov004_0215f6f4(void* arg0, short arg1, short arg2, int arg3) {
    void* var0 = func_ov004_0215e4c0(arg0, 3);
    if (var0 == NULL) return;
    *(short*)((char*)var0 + 0x104) = arg1;
    *(short*)((char*)var0 + 0x106) = arg2;
    int var1 = 0;
    unsigned char var2 = 0xf;
    if (arg3 != 0) {
        var2 = 3;
        var1 = 1;
    }
    *(unsigned char*)((char*)var0 + 0x10a) = var2;
    func_ov023_021f8944((struct Struct_ov004_0215f6f4*)var0, (int)(long)arg0, var1, 0);
}
