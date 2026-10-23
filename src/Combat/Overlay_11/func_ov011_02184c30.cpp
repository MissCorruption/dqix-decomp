#include <globaldefs.h>

struct Struct_ov011_02184c30 {
    int unknown_0_;
    union {
        int unknown1_0_;
        float unknown_0_;
    } unknown_4_;
};

// USA: func_ov011_02184c30
extern "C" ARM int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0) {
    if (arg0->unknown_0_ == 1) return (int)arg0->unknown_4_.unknown_0_;
    return arg0->unknown_4_.unknown1_0_;
}
