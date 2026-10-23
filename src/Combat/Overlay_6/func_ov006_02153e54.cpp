#include <globaldefs.h>

struct Struct_ov006_02153e54 {
    short unknown_0_;
    unsigned short unknown_2_;
};

// USA: func_ov006_02153e54
extern "C" ARM void func_ov006_02153e54(struct Struct_ov006_02153e54* arg0) {
    arg0->unknown_0_ = -1;
    arg0->unknown_2_ &= ~1;
    arg0->unknown_2_ &= ~2;
    arg0->unknown_2_ &= 0xffff0003;
}
