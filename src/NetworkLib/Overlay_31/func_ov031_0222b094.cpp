#include <globaldefs.h>

extern "C" void func_ov031_0222b168(void);
extern "C" void func_ov031_0222b1a0(void);
extern "C" void func_ov031_0222b1a4(void);
extern "C" int func_ov031_02226f68(void);
extern "C" void* func_ov031_022368e0(void);
extern "C" int func_ov031_02237b2c(int, int, int, int, int);
extern "C" int func_ov031_02236878(int);
extern "C" void func_ov031_02222e98(void);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" void func_ov031_0222b3d4(void);
extern "C" ARM void func_ov031_0222b388(void);
extern "C" ARM int func_ov031_0223e2e0(int, void*);

struct Struct_ov031_02290c80 { unsigned char unknown_0_; unsigned char unknown_1_[3]; int unknown_4_; };
extern Struct_ov031_02290c80 data_ov031_02290c80;

// USA: func_ov031_0222b094
extern "C" ARM void func_ov031_0222b094(void) {
    func_ov031_0222b168();
    func_ov031_0222b1a0();
    func_ov031_0222b1a4();
    int var0 = func_ov031_02226f68();
    if (var0 == 0) return;
    if (var0 == 1) goto state1;
    if (var0 == 2) goto state2;
    return;
state1:
    if (data_ov031_02290c80.unknown_4_ == 0) return;
    data_ov031_02290c80.unknown_0_ = 1;
    func_ov031_0223e2e0(1, (void*)data_ov031_02290c80.unknown_4_);
    data_ov031_02290c80.unknown_4_ = 0;
    func_ov031_022274c0((int)func_ov031_0222b3d4);
    return;
state2:
    if (data_ov031_02290c80.unknown_4_ == 0) return;
    func_ov031_022368e0();
    func_ov031_02237b2c(0xc, 1, 1, -1, 0);
    func_ov031_02236878(9);
    func_ov031_02222e98();
    func_ov031_0223e2e0(1, (void*)data_ov031_02290c80.unknown_4_);
    data_ov031_02290c80.unknown_4_ = 0;
    func_ov031_022274c0((int)func_ov031_0222b388);
    return;
}
