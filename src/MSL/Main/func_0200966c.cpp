#include <globaldefs.h>

extern "C" int func_020095b0(void* arg0, int arg1);
extern "C" void func_0200961c(unsigned char* arg0, int arg1);

struct Struct_0200966c { char unknown_0_[0x4]; unsigned char unknown_4_; };

// USA: func_0200966c
extern "C" ARM void func_0200966c(struct Struct_0200966c* arg0, int arg1) {
    if (arg1 <= 0) {
        return;
    }
    if (arg1 >= arg0->unknown_4_) {
        return;
    }
    int var0 = func_020095b0(arg0, arg1);
    arg0->unknown_4_ = arg1;
    if (var0 < 0) {
        return;
    }
    func_0200961c((unsigned char*)arg0, arg1);
}
