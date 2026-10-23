#include <globaldefs.h>

struct Struct_ov031_02239130 {
    unsigned short unknown_0_;
    unsigned short unknown_2_[6];
};

extern Struct_ov031_02239130* data_ov031_02290d14;
extern unsigned short* data_ov031_0224bf60[6];
extern unsigned short* data_ov031_0224bf60_arg[6];

// USA: func_ov031_02239130
extern "C" ARM unsigned short func_ov031_02239130(int arg0) {
    Struct_ov031_02239130* var0 = data_ov031_02290d14;
    data_ov031_0224bf60[0] = &var0->unknown_2_[0];
    data_ov031_0224bf60[1] = &var0->unknown_2_[1];
    data_ov031_0224bf60[2] = &var0->unknown_2_[2];
    data_ov031_0224bf60[3] = &var0->unknown_2_[3];
    data_ov031_0224bf60[4] = &var0->unknown_2_[4];
    data_ov031_0224bf60[5] = &var0->unknown_2_[5];
    return *data_ov031_0224bf60_arg[arg0];
}
