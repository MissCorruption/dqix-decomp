#include <globaldefs.h>

struct Struct_ov027_021dd038 {
    char unknown_0_[0xc];
    unsigned short unknown_c_;
};

struct Struct_ov027_021e33e0_17 {
    char unknown_0_[0x8];
    Struct_ov027_021dd038* unknown_8_;
};

extern Struct_ov027_021e33e0_17 data_ov027_021e33e0;

// USA: func_ov027_021dd038
extern "C" ARM unsigned short func_ov027_021dd038(void) {
    return data_ov027_021e33e0.unknown_8_->unknown_c_;
}
