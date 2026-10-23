#include <globaldefs.h>

struct Struct_ov011_02184c4c {
    int unknown_0_;
    union {
        int unknown1_0_;
        float unknown_0_;
    } unknown_4_;
};

// USA: func_ov011_02184c4c
extern "C" ARM float func_ov011_02184c4c(struct Struct_ov011_02184c4c* arg0) {
    if (arg0->unknown_0_ == 0) return (float)arg0->unknown_4_.unknown1_0_;
    return arg0->unknown_4_.unknown_0_;
}
