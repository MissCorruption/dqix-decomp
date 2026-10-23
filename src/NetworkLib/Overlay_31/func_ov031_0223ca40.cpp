#include <globaldefs.h>

struct Struct_ov031_0223ca40_2 {
    void* unknown_0_;
    void (*unknown_4_)(void*, int);
};

struct Struct_ov031_0223ca40 {
    char unknown_0_[0x14];
    Struct_ov031_0223ca40_2* unknown_14_;
};

// USA: func_ov031_0223ca40
extern "C" ARM void func_ov031_0223ca40(void* arg0, int arg1) {
    ((Struct_ov031_0223ca40*)arg0)->unknown_14_->unknown_4_(arg0, arg1);
}
