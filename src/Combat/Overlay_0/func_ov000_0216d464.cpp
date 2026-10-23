#include <globaldefs.h>

struct Struct_0204a170;
struct Struct_0202e6a8;
struct Struct_0202e71c;

extern "C" void func_020a2d14(void* arg0);
extern "C" int func_020a3570(struct Struct_0204a170* arg0);
extern "C" void func_ov000_0216f3d4(void* arg0);
extern "C" void func_ov000_0216ea38(void* arg0);
extern "C" void func_ov000_0216f0d0(void* arg0);
extern "C" int func_0202e7f0(void* arg0);
int fix32ReduceAngle0To2Pi(int angle);
extern "C" void func_0202e6a8(struct Struct_0202e6a8* arg0, int arg1);
extern "C" int func_0202e800(void* arg0);
extern "C" void func_0202e71c(struct Struct_0202e71c* arg0, int arg1);
extern "C" void func_ov000_0216f2b8(void* arg0);

struct Struct_ov000_0216d464 {
    unsigned char unknown_0_[0x238];
    int unknown_238_;
    int unknown_23c_;
};

// USA: func_ov000_0216d464
extern "C" ARM void func_ov000_0216d464(struct Struct_ov000_0216d464* arg0) {
    func_020a2d14(arg0);
    if (func_020a3570((struct Struct_0204a170*)arg0) != 0) {
        func_ov000_0216f3d4(arg0);
        return;
    }
    func_ov000_0216ea38(arg0);
    func_ov000_0216f0d0(arg0);
    if (arg0->unknown_238_ != 0) {
        int var0 = func_0202e7f0(arg0);
        int var1 = fix32ReduceAngle0To2Pi(var0 + arg0->unknown_238_);
        func_0202e6a8((struct Struct_0202e6a8*)arg0, var1);
    }
    if (arg0->unknown_23c_ != 0) {
        int var2 = func_0202e800(arg0);
        int var3 = arg0->unknown_23c_;
        int var4 = (var3 < var2) ? (var2 + var3) : 0;
        if (var4 < 0x3000) {
            var4 = 0x3000;
        }
        func_0202e71c((struct Struct_0202e71c*)arg0, var4);
    }
    func_ov000_0216f2b8(arg0);
    func_ov000_0216f3d4(arg0);
}
