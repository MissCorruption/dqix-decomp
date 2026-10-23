#include <globaldefs.h>
#include <Graphics/Vector.h>

extern "C" void func_ov005_021538fc(void* arg0, fix32_t* arg1, fix32_t* arg2, fix32_t arg3, fix32_t arg4);

struct Struct_ov005_02153728 {
    char unknown_0_[0x18];
    fix32_t unknown_18_[4];
    fix32_t unknown_28_[4];
};

// USA: func_ov005_02153728
extern "C" ARM void func_ov005_02153728(Struct_ov005_02153728* arg0, int arg1) {
    if (arg1 == 0) { arg1 = 1; }
    fix32_t var0 = arg1 * 0xb33;
    fix32_t var1 = arg1 * 0xccc;
    func_ov005_021538fc(arg0, &arg0->unknown_18_[0], &arg0->unknown_28_[0], var0, var1);
    func_ov005_021538fc(arg0, &arg0->unknown_18_[1], &arg0->unknown_28_[1], var0, var1);
    func_ov005_021538fc(arg0, &arg0->unknown_18_[2], &arg0->unknown_28_[2], var0, var1);
    func_ov005_021538fc(arg0, &arg0->unknown_18_[3], &arg0->unknown_28_[3], var0, var1);
}
