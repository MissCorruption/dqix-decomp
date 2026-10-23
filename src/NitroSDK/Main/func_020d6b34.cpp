#include <globaldefs.h>

extern "C" void* func_020d41d8(void);
extern "C" int func_020d424c(int arg0, int arg1);
extern "C" void func_020d404c(int arg0, int arg1);
extern "C" int func_020d4168(void* arg0, unsigned int arg1);

struct Struct_020d6b34 { short unknown_0_, unknown_2_, unknown_4_, unknown_6_, unknown_8_; };


// USA: func_020d6b34
extern "C" ARM int func_020d6b34(int arg0, short arg1, short arg2, short arg3, unsigned short arg4) {
    struct Struct_020d6b34 var0;
    int var1;
    func_020d41d8();
    var1 = func_020d424c(1, 2);
    if (var1 != 0) {
        return var1;
    }
    func_020d404c(0x1e, arg0);
    var0.unknown_0_ = 0x1e;
    var0.unknown_2_ = arg1;
    var0.unknown_4_ = arg2;
    var0.unknown_6_ = arg3;
    var0.unknown_8_ = arg4;
    var1 = func_020d4168(&var0, 10);
    if (var1 == 0) {
        return 2;
    }
    return var1;
}
