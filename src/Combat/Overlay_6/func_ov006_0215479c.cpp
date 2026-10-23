#include <globaldefs.h>
#include "Graphics/OBJImage.h"

struct Struct_ov006_0215479c {
    struct Struct_02075cdc unknown_0_;
    int unknown_70_;
    short unknown_74_;
    short unknown_76_;
    short unknown_78_;
    unsigned char unknown_7a_;
};

// USA: func_ov006_0215479c
extern "C" ARM void func_ov006_0215479c(struct Struct_ov006_0215479c* arg0) {
    func_02075cdc(&arg0->unknown_0_);
    arg0->unknown_70_ = -1;
    arg0->unknown_74_ = -1;
    arg0->unknown_7a_ = arg0->unknown_76_ = arg0->unknown_78_ = 0;
}
