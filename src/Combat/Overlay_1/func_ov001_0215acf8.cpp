#include <globaldefs.h>

struct Struct_ov001_021658b8_5 { int unknown_0_; char unknown_4_[0x8c - 4]; unsigned char unknown_8c_; };
extern Struct_ov001_021658b8_5 data_ov001_021658b8;
extern int data_ov001_021658d8;
extern "C" void func_ov001_021537b0(void* arg0, int arg1, int arg2, int arg3);

// USA: func_ov001_0215acf8
extern "C" ARM void func_ov001_0215acf8(int arg0, int arg1) {
    func_ov001_021537b0(&data_ov001_021658d8, data_ov001_021658b8.unknown_0_, arg0, arg1);
    data_ov001_021658b8.unknown_8c_ = 0;
}
