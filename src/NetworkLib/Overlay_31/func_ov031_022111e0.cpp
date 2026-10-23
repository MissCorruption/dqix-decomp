#include <globaldefs.h>

extern "C" void func_ov031_02211864(int arg0, int arg1);
extern "C" int func_ov031_022113c0(void);
extern "C" void func_ov031_0220f4a0(void);
extern "C" void func_ov031_022101c4(void);

struct Struct_ov031_022111e0 {
    int unknown_0_;
    void* unknown_4_;
    char unknown_8_[0x34];
    void* unknown_3c_;
};
extern Struct_ov031_022111e0* data_ov031_0224e590;

// USA: func_ov031_022111e0
extern "C" ARM int func_ov031_022111e0(void) {
    if (data_ov031_0224e590 == NULL) {
        func_ov031_02211864(9, 9 - 0xb);
        return 0;
    }
    if (func_ov031_022113c0() != 0) return 0;
    if (data_ov031_0224e590->unknown_4_ == 0 && data_ov031_0224e590->unknown_3c_ == 0) {
        func_ov031_02211864(9, 9 - 0xb);
        return 0;
    }
    func_ov031_0220f4a0();
    func_ov031_022101c4();
    data_ov031_0224e590->unknown_0_ = 2;
    return 1;
}
