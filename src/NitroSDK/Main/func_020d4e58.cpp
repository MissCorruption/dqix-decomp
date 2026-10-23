#include <globaldefs.h>

extern "C" int func_020d424c(int, int);
extern "C" int func_020d40bc(int, int, int, int, int, int);
extern "C" void func_020d404c(int arg0, int arg1);
extern "C" void* func_020d41d8(void);

struct Struct_020d4e58 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0x10 - 0x8];
    int unknown_10_;
};

// USA: func_020d4e58
extern "C" ARM int func_020d4e58(int arg0, int arg1) {
    int var0 = func_020d424c(1, 0);
    if (var0 != 0) {
        return var0;
    }
    func_020d404c(3, arg0);
    struct Struct_020d4e58* var1 = (struct Struct_020d4e58*)func_020d41d8();
    var0 = func_020d40bc(3, 4, var1->unknown_0_, var1->unknown_4_, var1->unknown_10_, arg1);
    if (var0 == 0) {
        var0 = 2;
    }
    return var0;
}
