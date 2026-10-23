#include <globaldefs.h>

struct Struct_0203d028;

extern "C" void func_0207de48(void* arg0, int arg1, int arg2);
extern "C" void func_0207df50(struct Struct_0203d028* arg0);

struct Struct_ov005_02155d6c {
    char unknown_0_[0x70];
};

struct Struct_ov005_02153954 {
    char unknown_0_[0x294];
    Struct_ov005_02155d6c unknown_294_;
    Struct_ov005_02155d6c unknown_304_[24];
    Struct_ov005_02155d6c unknown_d84_;
};

// USA: func_ov005_02153b20
extern "C" ARM void func_ov005_02153b20(Struct_ov005_02153954* arg0) {
    for (int var0 = 0; var0 < 24; var0++) {
        func_0207de48(&arg0->unknown_304_[var0], 0x120, 0x20);
        func_0207df50((struct Struct_0203d028*)&arg0->unknown_304_[var0]);
    }
    func_0207de48(&arg0->unknown_d84_, 0x120, 0x20);
    func_0207df50((struct Struct_0203d028*)&arg0->unknown_d84_);
    func_0207de48(&arg0->unknown_294_, 0x3000, 0x400);
    func_0207df50((struct Struct_0203d028*)&arg0->unknown_294_);
}
