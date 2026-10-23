#include <globaldefs.h>

struct Struct_ov027_021dd024 {
    unsigned char unknown_0_[8];
    unsigned int unknown_8_;
};

struct Struct_ov027_021e33e0_16 {
    unsigned char unknown_0_[8];
    Struct_ov027_021dd024* unknown_8_;
};

extern Struct_ov027_021e33e0_16 data_ov027_021e33e0;

// USA: func_ov027_021dd024
extern "C" ARM unsigned int func_ov027_021dd024(void) {
    return data_ov027_021e33e0.unknown_8_->unknown_8_;
}
