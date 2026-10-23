#include <globaldefs.h>

struct Struct_ov001_02159b94 { int unknown_0_, unknown_4_, unknown_8_; };
struct Struct_ov001_02159b5c_2 { int unknown_0_; struct Struct_ov001_02159b94 unknown_4_; };
struct Struct_ov001_02159b5c { char unknown_0_[0x70]; int unknown_70_; };

extern int data_ov001_02165884;
extern "C" int func_ov001_02159b94(int arg0, int arg1, struct Struct_ov001_02159b94 arg2);

// USA: func_ov001_02159b5c
extern "C" ARM int func_ov001_02159b5c(struct Struct_ov001_02159b5c_2* arg0, struct Struct_ov001_02159b5c* arg1) {
    func_ov001_02159b94(data_ov001_02165884, arg1->unknown_70_, arg0->unknown_4_);
    return 0;
}
