#include <globaldefs.h>
struct Struct_0207df50 { unsigned int unknown_0_[10]; };
struct Struct_0207df50_2 { unsigned int unknown_0_[2]; };
struct Struct_0203d028 {
    struct Struct_0207df50 unknown_0_;   // 0x00
    struct Struct_0207df50 unknown_28_;   // 0x28
    unsigned int unknown_50_;           // 0x50
    unsigned int unknown_54_;           // 0x54
    struct Struct_0207df50_2 unknown_58_;   // 0x58
    struct Struct_0207df50_2 unknown_60_;   // 0x60
};
// USA: func_0207df50
extern "C" ARM void func_0207df50(struct Struct_0203d028 *arg0) {
    arg0->unknown_28_ = arg0->unknown_0_;
    arg0->unknown_60_ = arg0->unknown_58_;
}
