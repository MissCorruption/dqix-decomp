#include <globaldefs.h>

extern "C" int func_ov031_02212ee8(void);
extern "C" void func_ov031_02223b1c(void);
extern "C" void func_ov031_022368e0(void);
extern "C" int func_ov031_02236878(int arg0);
extern "C" ARM int func_ov031_02212fb8(void);
extern "C" ARM void func_ov031_0222ea14(void* arg0);
extern "C" ARM void func_ov031_022274c0(int arg0);
extern "C" void func_ov031_0223e2c0(int arg0, void* arg1);
extern "C" void func_ov031_02233c94(void);

struct Struct_ov031_02290cd0_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    int unknown_4_;
};
extern Struct_ov031_02290cd0_2 data_ov031_02290cd0;

// USA: func_ov031_02233d84
extern "C" ARM void func_ov031_02233d84(void* arg0) {
    int var0;
    if (data_ov031_02290cd0.unknown_4_ != 0) {
        var0 = func_ov031_02212ee8();
        if (var0 == 0) return;
    }
    func_ov031_02223b1c();
    func_ov031_022368e0();
    if (data_ov031_02290cd0.unknown_4_ != 0 && var0 > 0) {
        data_ov031_02290cd0.unknown_0_ = 1;
        func_ov031_02236878(0x11);
    } else {
        int var1;
        if (data_ov031_02290cd0.unknown_4_ == 0) {
            var1 = 0xffff3be9;
        } else {
            var1 = func_ov031_02212fb8();
        }
        if (var1 >= -10) {
            var1 = 0xffff3be9;
        }
        func_ov031_0222ea14((void*)var1);
        func_ov031_02236878(0x12);
    }
    func_ov031_022274c0((int)func_ov031_02233c94);
    func_ov031_0223e2c0(0, arg0);
}
