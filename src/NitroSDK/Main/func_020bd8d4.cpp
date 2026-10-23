#include <globaldefs.h>

struct Struct_020bd8d4_2 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; };
struct Struct_020bd8d4_3 { int unknown_0_; int unknown_4_; int unknown_8_; struct Struct_020bd8d4_2 unknown_c_[1]; };
struct Struct_020bd8d4 { char unknown_0_[0x84]; struct Struct_020bd8d4_3* unknown_84_; };
extern struct Struct_020bd8d4* data_02110370;

// USA: func_020bd8d4
extern "C" ARM void func_020bd8d4(unsigned int arg0, int arg1) {
    data_02110370->unknown_84_->unknown_c_[arg0].unknown_8_ = arg1;
}
