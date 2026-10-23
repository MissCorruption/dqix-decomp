#include <globaldefs.h>

struct Struct_ov017_021b1e24 {
    char unknown_0_[0x2c];
    signed char unknown_2c_;
};

typedef signed char (*Type_ov017_021b1e24)(Struct_ov017_021b1e24*);
extern Type_ov017_021b1e24 data_ov031_0224c8a8[];

// USA: func_ov031_02243690
extern "C" ARM int func_ov031_02243690(Struct_ov017_021b1e24* arg0) {
    if (arg0->unknown_2c_ >= 0) {
        arg0->unknown_2c_ = data_ov031_0224c8a8[arg0->unknown_2c_](arg0);
    }
    return 1;
}
