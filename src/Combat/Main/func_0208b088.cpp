#include <globaldefs.h>

struct Struct_0208b088_2;
extern "C" int func_0208b4d4(struct Struct_0208b088_2* arg0);

extern "C" void func_0208b0f8(void* arg0);
extern "C" int func_0208ab34(void* arg0, int arg1);

struct Struct_0208b088 {
    char unknown_0_[0x20];
    int unknown_20_;
    char unknown_24_[0x9c - 0x24];
    unsigned char unknown_9c_;
};

// USA: func_0208b088
extern "C" ARM int func_0208b088(struct Struct_0208b088* arg0) {
    int var0;
    func_0208b0f8(arg0);
    arg0->unknown_20_ = (arg0->unknown_9c_ == 0) ? 1 : 0;
    var0 = func_0208b4d4((struct Struct_0208b088_2*)arg0);
    func_0208ab34((char*)arg0 + 0x4, var0);
    func_0208ab34((char*)arg0 + 0x24, var0);
    func_0208ab34((char*)arg0 + 0x40, var0);
    func_0208ab34((char*)arg0 + 0x5c, var0);
    func_0208ab34((char*)arg0 + 0x78, var0);
    return 1;
}
