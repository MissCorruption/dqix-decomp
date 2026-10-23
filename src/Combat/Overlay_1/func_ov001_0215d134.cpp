#include <globaldefs.h>

struct Struct_ov001_02165880_18 { char unknown_0_[0x24]; void* unknown_24_; };
extern Struct_ov001_02165880_18 data_ov001_02165880;
struct Struct_ov001_021658b8_6 { char unknown_0_[0xe4]; int unknown_e4_; };
extern Struct_ov001_021658b8_6 data_ov001_021658b8;
extern "C" void func_ov001_021588e4(void* arg0);

// USA: func_ov001_0215d134
extern "C" ARM int func_ov001_0215d134(void) {
    func_ov001_021588e4(data_ov001_02165880.unknown_24_);
    if (data_ov001_021658b8.unknown_e4_ == 0) data_ov001_021658b8.unknown_e4_ = 1;
    return 1;
}
