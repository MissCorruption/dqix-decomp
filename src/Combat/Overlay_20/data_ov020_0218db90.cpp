#include <globaldefs.h>

#pragma define_section initcode ".init" RX

struct Struct_ov020_0218dbc0 {
    int unknown_0_;
    int unknown_4_;
};

extern Struct_ov020_0218dbc0 data_ov020_0218dbc0;

// USA: func_ov020_0218db90
extern "C" __declspec(initcode) ARM void __sinit_ov020_0218db90(void) {
    data_ov020_0218dbc0.unknown_0_ = data_ov020_0218dbc0.unknown_4_ + 0xb;
}
