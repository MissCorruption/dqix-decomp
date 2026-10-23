#include <globaldefs.h>

struct Struct_ov011_02184c68 {
    int unknown_0_;
    Struct_ov011_02184c68* unknown_4_;
};

// USA: func_ov011_02184c68
extern "C" ARM void func_ov011_02184c68(Struct_ov011_02184c68* arg0, void* arg1) {
    if (arg0->unknown_0_ == 3) {
        arg0->unknown_4_->unknown_4_ = (Struct_ov011_02184c68*)arg1;
    }
}
