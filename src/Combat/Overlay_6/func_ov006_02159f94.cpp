#include <globaldefs.h>

struct Struct_ov006_02159f94 {
    unsigned char unknown_0_[0x3a4];
    int unknown_3a4_;
    int unknown_3a8_;
    int unknown_3ac_;
};

// USA: func_ov006_02159f94
extern "C" ARM void func_ov006_02159f94(struct Struct_ov006_02159f94* arg0) {
    if (arg0->unknown_3ac_ != 0 && arg0->unknown_3a4_ != 0) {
        arg0->unknown_3ac_ = 0;
    }
}
