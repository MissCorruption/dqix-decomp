#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov001_021588bc { int unknown_0_; int unknown_4_; };
#if defined(jpn)
extern "C" int func_ov001_021588bc(Struct_ov001_021588bc* arg0, int arg1, int arg2);
#else
extern "C" int func_ov001_021588bc(Struct_ov001_021588bc* arg0, int arg1, int arg2);
#endif

struct Struct_ov001_02165880_4 { char unknown_0_[8]; int unknown_8_; char unknown_c_[0x18]; Struct_ov001_021588bc* unknown_24_; };
extern Struct_ov001_02165880_4 data_ov001_02165880;

struct Struct_ov001_021658b8_2 { char unknown_0_[0xe4]; int unknown_e4_; char unknown_e8_[4]; int unknown_ec_; };
extern Struct_ov001_021658b8_2 data_ov001_021658b8;

// USA: func_ov001_0215a954
extern "C" ARM void func_ov001_0215a954(void) {
    *(unsigned short*)0x4000060 = (*(unsigned short*)0x4000060 & ~0x3000) | 4;
    *(unsigned short*)0x4000340 = 0;
    func_ov001_021588bc(data_ov001_02165880.unknown_24_, data_ov001_02165880.unknown_8_, 8);
    data_ov001_021658b8.unknown_ec_ = 0;
    if (data_ov001_021658b8.unknown_e4_) data_ov001_021658b8.unknown_e4_ = 0;
}
