#include <globaldefs.h>

struct Struct_ov003_0217f3b2 {
    short unknown_0_;
    short unknown_2_;
};

extern const Struct_ov003_0217f3b2 data_ov003_0217f3b2[];
extern const Struct_ov003_0217f3b2 data_ov003_0217f3b4[];

// USA: func_ov003_0215ec68
extern "C" ARM void func_ov003_0215ec68(int arg0, short* arg1, short* arg2) {
    *arg1 = data_ov003_0217f3b2[arg0].unknown_0_;
    *arg2 = data_ov003_0217f3b4[arg0].unknown_0_;
}
