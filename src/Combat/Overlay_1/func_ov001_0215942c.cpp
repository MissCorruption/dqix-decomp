#include <globaldefs.h>

struct Struct_ov001_02157964_3 { int unknown_0_, unknown_4_, unknown_8_; };
struct Struct_ov001_0215942c { int unknown_0_; struct Struct_ov001_02157964_3 unknown_4_; };

extern "C" void func_ov001_02157964(void*, struct Struct_ov001_02157964_3);

// USA: func_ov001_0215942c
extern "C" ARM int func_ov001_0215942c(struct Struct_ov001_0215942c* arg0, void* arg1) {
    func_ov001_02157964((char*)arg1 + 0x11c, arg0->unknown_4_);
    return 0;
}
