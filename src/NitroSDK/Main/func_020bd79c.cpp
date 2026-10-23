#include <globaldefs.h>

struct Struct_020bd79c_2 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; };
struct Struct_020bd79c_3 { int unknown_0_; int unknown_4_; int unknown_8_; struct Struct_020bd79c_2 unknown_c_[1]; };
struct Struct_020bd79c { char unknown_0_[0x84]; struct Struct_020bd79c_3* unknown_84_; };
extern struct Struct_020bd79c* data_02110370;

// USA: func_020bd79c
extern "C" ARM int func_020bd79c(unsigned int arg0) {
    struct Struct_020bd79c_3* var0 = data_02110370->unknown_84_;
    if (arg0 >= (unsigned int)var0->unknown_8_) return 0;
    return var0->unknown_c_[arg0].unknown_4_;
}
