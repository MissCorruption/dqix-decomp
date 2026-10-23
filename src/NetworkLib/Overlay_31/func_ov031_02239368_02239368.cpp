#include <globaldefs.h>

struct Struct_ov031_02239368 { unsigned char unknown_0_[0x40]; int unknown_40_; };
struct Struct_ov031_02290d18_4 { void (*unknown_0_)(int, void*, int); struct Struct_ov031_02239368* unknown_4_; };
extern struct Struct_ov031_02290d18_4 data_ov031_02290d18;
extern int data_ov031_0224c318[];
extern int data_ov031_0224c340;
extern int data_ov031_0224c348;

// USA: func_ov031_02239368
extern "C" ARM void func_ov031_02239368(int arg0) {
    if (data_ov031_02290d18.unknown_0_ != 0) {
        data_ov031_02290d18.unknown_0_(0x8000000, &data_ov031_0224c340, data_ov031_0224c318[data_ov031_02290d18.unknown_4_->unknown_40_]);
    }
    data_ov031_02290d18.unknown_4_->unknown_40_ = arg0;
    if (data_ov031_02290d18.unknown_0_ != 0) {
        data_ov031_02290d18.unknown_0_(0x8000000, &data_ov031_0224c348, data_ov031_0224c318[data_ov031_02290d18.unknown_4_->unknown_40_]);
    }
}
