#include <globaldefs.h>

struct Struct_0205d81c;
struct Struct_0205d0e0;

extern "C" struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);
extern "C" struct Struct_0205d0e0* func_0205e00c(struct Struct_0205d81c* arg0, int arg1);
extern "C" void func_02050400(unsigned char* arg0, int arg1);
extern "C" void func_0205042c(unsigned char* arg0, unsigned char arg1);
extern "C" void func_02050440(unsigned char* arg0, int arg1);

// USA: func_ov002_0215b918
extern "C" ARM void func_ov002_0215b918(unsigned char* arg0, int arg1, int arg2, int arg3) {
    struct Struct_0205d81c* var0 = (struct Struct_0205d81c*)(arg0 + 0x2c8 + 0xc00);
    struct Struct_0205d0e0* var1 = func_0205d81c(var0, arg1);
    if (var1 == 0) {
        var1 = func_0205e00c(var0, arg1);
        if (var1 == 0) return;
    }
    if (arg3 != 0) {
        func_02050400((unsigned char*)var1, 1);
        func_0205042c((unsigned char*)var1, arg2 & 0xff);
        func_02050440((unsigned char*)var1, arg3 & 0xff);
    } else {
        func_02050400((unsigned char*)var1, 0);
        func_0205042c((unsigned char*)var1, 0);
        func_02050440((unsigned char*)var1, 0);
    }
}
