#include <globaldefs.h>

extern "C" int func_020d40bc(int, int, int, int, int, int);
extern "C" int func_020d3dcc(int arg0, int arg1);
extern "C" void func_020d404c(int arg0, int arg1);
extern "C" void* func_020d41d8(void);

struct Struct_020d4fa4 {
    int unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_[8];
    int unknown_10_;
};


// USA: func_020d4fa4
extern "C" ARM int func_020d4fa4(int arg0, int arg1, int arg2, int arg3) {
    int var0 = func_020d3dcc(arg0, arg2);
    if (var0 != 0) {
        return var0;
    }
    func_020d404c(0, arg1);
    struct Struct_020d4fa4* var1 = (struct Struct_020d4fa4*)func_020d41d8();
    var0 = func_020d40bc(0, 4, var1->unknown_0_, var1->unknown_4_, var1->unknown_10_, arg3);
    if (var0 == 0) {
        var0 = 2;
    }
    return var0;
}
