#include <globaldefs.h>

struct Struct_ov031_0222905c { unsigned int unknown_0_; unsigned short unknown_4_; };
struct Struct_ov031_02290c5c {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[6];
    Struct_ov031_0222905c* unknown_8_;
};
extern Struct_ov031_02290c5c data_ov031_02290c5c;

extern "C" void func_ov031_02229124(void);
extern "C" void func_ov031_02223998(int);
extern "C" void func_ov031_022373b4(int);
extern "C" void func_ov031_0222336c(int, int, int);
extern "C" ARM int func_ov031_0223be44(int arg0, int arg1);
extern "C" void func_ov031_022237dc(unsigned short arg0, unsigned short arg1, unsigned short arg2, unsigned short arg3);
extern "C" void func_ov031_022274c0(int arg0);
extern "C" void func_ov031_022292c0(void);

extern unsigned short data_ov031_02248e12[];
extern unsigned short data_ov031_02248e16[];
extern unsigned short data_ov031_02248e14[];
extern unsigned short data_ov031_02248e18[];

// USA: func_ov031_0222905c
extern "C" ARM void func_ov031_0222905c(void) {
    data_ov031_02290c5c.unknown_1_ = 0;
    func_ov031_02229124();
    func_ov031_02223998(0x10);
    func_ov031_022373b4(3);
    func_ov031_0222336c(0x39, -1, 0);
    Struct_ov031_0222905c* var0 = (Struct_ov031_0222905c*)func_ov031_0223be44(0, 0x5b);
    data_ov031_02290c5c.unknown_8_ = var0;
    var0->unknown_0_ = (var0->unknown_0_ & 0xfe00ff00) | 0x84 | 0xe00000;
    var0 = data_ov031_02290c5c.unknown_8_;
    var0->unknown_4_ = (unsigned short)((var0->unknown_4_ & ~0xc00) | 0xc00);
    unsigned char var1 = data_ov031_02290c5c.unknown_0_;
    func_ov031_022237dc(data_ov031_02248e12[var1 * 4], data_ov031_02248e16[var1 * 4], data_ov031_02248e14[var1 * 4], data_ov031_02248e18[var1 * 4]);
    func_ov031_022274c0((int)func_ov031_022292c0);
}
