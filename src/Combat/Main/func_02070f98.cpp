#include <globaldefs.h>

struct Struct_02070f98 {
    unsigned char unknown_0_[0x84];
};

struct Struct_02070f98_2 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 20;
    struct Struct_02070f98* unknown_4_;
};

// USA: func_02070f98
extern "C" ARM struct Struct_02070f98* func_02070f98(struct Struct_02070f98_2* arg0, int arg1) {
    if (arg1 < 0 || arg1 >= (int)arg0->unknown_0_0_ || arg0->unknown_4_ == NULL) {
        return NULL;
    }
    return &arg0->unknown_4_[arg1];
}
