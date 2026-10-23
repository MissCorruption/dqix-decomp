#include <globaldefs.h>

extern "C" int func_0205bafc(void* arg0);
extern "C" void func_0205bb04(void* arg0, int arg1);
struct Struct_0205bcdc {
    int unknown_0_;
    char unknown_4_[0x2c];
    int unknown_30_;
};
extern "C" void func_0205bcdc(struct Struct_0205bcdc* arg0, int arg1);

// USA: func_0205d7a0
extern "C" ARM void func_0205d7a0(unsigned char* arg0, int arg1) {
    int var0;
    if (arg0[0x95]) {
        var0 = func_0205bafc(arg0 + 0x54);
    } else if (arg0[0x94]) {
        var0 = func_0205bafc(arg0 + 0x4);
    }
    if (arg1 < 0) {
        if (var0 <= arg1) return;
    }
    if (arg0[0x95]) {
        func_0205bb04(arg0 + 0x54, arg1);
    }
    if (arg0[0x94] == 0) return;
    func_0205bcdc((struct Struct_0205bcdc*)(arg0 + 0x4), arg1);
}
