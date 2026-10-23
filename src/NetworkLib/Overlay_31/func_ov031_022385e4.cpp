#include <globaldefs.h>

struct Struct_ov031_02226d48;
struct Struct_ov031_022385e4 {
    void* unknown_0_;
    void* unknown_4_;
    void* unknown_8_[2];
    Struct_ov031_02226d48* unknown_10_;
    void* unknown_14_;
    unsigned char unknown_18_[4];
    unsigned char unknown_1c_;
};
extern "C" Struct_ov031_022385e4* data_ov031_02290d10;
namespace DuplicatePool {
    extern "C" Struct_ov031_022385e4* data_ov031_02290d10;
}
extern unsigned char data_ov031_02249394[];
extern "C" void func_ov031_0223ba20(void*);
extern "C" void func_ov031_0223c534(Struct_ov031_02226d48*);
extern "C" void func_ov031_0223e2c0(int, int);
extern "C" void func_ov031_0223cf70(Struct_ov031_022385e4**);
#define REG_DISPLAY_CONTROL (*(volatile unsigned int*)0x04000000)

// USA: func_ov031_022385e4
extern "C" ARM void func_ov031_022385e4(int arg0) {
    REG_DISPLAY_CONTROL &= ~0xe000;
    func_ov031_0223ba20(data_ov031_02290d10->unknown_0_);
    func_ov031_0223ba20(data_ov031_02290d10->unknown_4_);
    int var0 = 0;
    if (var0 < data_ov031_02249394[data_ov031_02290d10->unknown_1c_]) do {
        if (data_ov031_02290d10->unknown_8_[var0] != 0)
            func_ov031_0223ba20(data_ov031_02290d10->unknown_8_[var0]);
        var0++;
    } while (var0 < data_ov031_02249394[data_ov031_02290d10->unknown_1c_]);
    func_ov031_0223c534(data_ov031_02290d10->unknown_10_);
    func_ov031_0223e2c0(1, arg0);
    func_ov031_0223cf70(&DuplicatePool::data_ov031_02290d10);
}
