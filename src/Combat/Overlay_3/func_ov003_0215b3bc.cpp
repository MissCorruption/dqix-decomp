#include <globaldefs.h>

struct Struct_0205ba68;
extern "C" void func_0205ba68(struct Struct_0205ba68* arg0, int arg1, int arg2, int arg3);
struct Struct_0205bacc;
extern "C" void func_0205bacc(struct Struct_0205bacc* arg0, int arg1);
struct Struct_0205bcdc;
extern "C" void func_0205bcdc(struct Struct_0205bcdc* arg0, int arg1);
extern "C" void func_0205bb04(void* arg0, int arg1);

// USA: func_ov003_0215b3bc
extern "C" ARM void func_ov003_0215b3bc(char* arg0) {
    int var0, var1, var2;
    unsigned char var3 = *(unsigned char*)(arg0 + 0x1a4);
    switch (var3) {
    case 1:
        var0 = *(unsigned char*)(arg0 + 0x589);
        var2 = *(signed char*)(arg0 + 0x584);
        var1 = 1;
        break;
    case 2:
        var0 = *(unsigned char*)(arg0 + 0x590);
        var2 = *(signed char*)(arg0 + 0x585);
        var1 = 1;
        break;
    case 3:
        var2 = *(signed char*)(arg0 + 0x586);
        var1 = 1;
        var0 = 2;
        break;
    }

    func_0205ba68((struct Struct_0205ba68*)(arg0 + 0xf8), var1, var0, 0);
    func_0205ba68((struct Struct_0205ba68*)(arg0 + 0x148), var1, var0, 0);
    func_0205bacc((struct Struct_0205bacc*)(arg0 + 0xf8), var0);
    func_0205bacc((struct Struct_0205bacc*)(arg0 + 0x148), var0);
    *(int*)(arg0 + 0xfc) = var1;
    *(int*)(arg0 + 0x14c) = var1;
    func_0205bcdc((struct Struct_0205bcdc*)(arg0 + 0xf8), var2);
    func_0205bb04((void*)(arg0 + 0x148), var2);
}
