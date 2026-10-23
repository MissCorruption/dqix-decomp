#include <globaldefs.h>

struct Struct_0201ae8c { unsigned int unknown_0_[9]; };
struct Struct_0201ae8c_2 { unsigned int unknown_0_[3]; };
struct Struct_0201a600_6 {
    struct Struct_0201ae8c unknown_0_;   // 0x00
    struct Struct_0201ae8c_2 unknown_24_;   // 0x24
    unsigned int unknown_30_;             // 0x30
};

// USA: func_0201ae8c
extern "C" ARM struct Struct_0201a600_6* func_0201ae8c(struct Struct_0201a600_6* arg0, struct Struct_0201a600_6* arg1) {
    arg0->unknown_0_ = arg1->unknown_0_;
    arg0->unknown_24_ = arg1->unknown_24_;
    arg0->unknown_30_ = arg1->unknown_30_;
    return arg0;
}
