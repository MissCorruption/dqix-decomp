#include <globaldefs.h>

extern "C" void func_0207076c(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" void func_02070798(int arg0, int arg1, int arg2);

struct Struct_020e8804 {
    int unknown_0_[12];
};

extern struct Struct_020e8804 data_020e8804;

// USA: func_0207051c
extern "C" ARM void func_0207051c(int arg0, int arg1, int arg2) {
    struct Struct_020e8804 var0 = data_020e8804;

    *(volatile int*)0x40004a8 = 0x900000;
    func_0207076c(0, 0, 3, 0x3a, arg2, 0x8000);

    *(volatile int*)0x4000444 = 0;
    *(volatile int*)0x400046c = 0x100000;
    *(volatile int*)0x400046c = 0xc0000;
    *(volatile int*)0x400046c = 0;
    *(volatile int*)0x4000500 = 1;
    *(volatile int*)0x4000480 = arg1;

    func_02070798((short)var0.unknown_0_[0], (short)var0.unknown_0_[1], (short)var0.unknown_0_[2]);
    func_02070798((short)var0.unknown_0_[3], (short)var0.unknown_0_[4], (short)var0.unknown_0_[5]);
    func_02070798((short)var0.unknown_0_[6], (short)var0.unknown_0_[7], (short)var0.unknown_0_[8]);
    func_02070798((short)var0.unknown_0_[9], (short)var0.unknown_0_[10], (short)var0.unknown_0_[11]);

    *(volatile int*)0x4000504 = 0;
    *(volatile int*)0x4000448 = 1;

    if (arg2 != 0x1f) return;

    func_0207076c(0, 0, 3, 0x3a, 0, 0x8000);

    *(volatile int*)0x4000444 = 0;
    *(volatile int*)0x400046c = 0x100000;
    *(volatile int*)0x400046c = 0xc0000;
    *(volatile int*)0x400046c = 0;
    *(volatile int*)0x4000500 = 1;
    *(volatile int*)0x4000480 = arg1;

    func_02070798(var0.unknown_0_[0] << 16 >> 16, var0.unknown_0_[1] << 16 >> 16, var0.unknown_0_[2] << 16 >> 16);
    func_02070798(var0.unknown_0_[3] << 16 >> 16, var0.unknown_0_[4] << 16 >> 16, var0.unknown_0_[5] << 16 >> 16);
    func_02070798(var0.unknown_0_[6] << 16 >> 16, var0.unknown_0_[7] << 16 >> 16, var0.unknown_0_[8] << 16 >> 16);
    func_02070798(var0.unknown_0_[9] << 16 >> 16, var0.unknown_0_[10] << 16 >> 16, var0.unknown_0_[11] << 16 >> 16);

    *(volatile int*)0x4000504 = 0;
    *(volatile int*)0x4000448 = 1;
}
