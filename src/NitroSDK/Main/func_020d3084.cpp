#include <globaldefs.h>


struct Struct_020d3084 {
    int unknown_0_;
    unsigned char* unknown_4_;
};

// USA: func_020d3084
extern "C" ARM void func_020d3084(struct Struct_020d3084* arg0, int arg1) {
    if (arg0->unknown_0_ != 0) {
        *arg0->unknown_4_ = arg1;
        arg0->unknown_0_--;
    }
    arg0->unknown_4_++;
}
