#include <globaldefs.h>

struct Struct_0209ad40 { unsigned int unknown_0_; unsigned short unknown_4_; };
struct Struct_0209b988 { unsigned int unknown_0_; unsigned short unknown_4_; unsigned short unknown_6_; };
struct Struct_0209ad40_2 { unsigned int unknown_0_; struct Struct_0209b988 unknown_4_[9]; };

// USA: func_0209b988
extern "C" ARM void func_0209b988(struct Struct_0209ad40_2 *arg0, int arg1, int arg2, struct Struct_0209ad40 *arg3) {
    arg0[arg1].unknown_4_[arg2].unknown_0_ = arg3->unknown_0_;
    arg0[arg1].unknown_4_[arg2].unknown_4_ = arg3->unknown_4_;
}
