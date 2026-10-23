#include <globaldefs.h>

struct Struct_0209a654 {
    char unknown_0_[12];
};
struct Struct_0209a654_2 {
    struct Struct_0209a654* unknown_0_;
    int unknown_4_;
};

// USA: func_0209a654
extern "C" ARM struct Struct_0209a654* func_0209a654(struct Struct_0209a654_2* arg0, unsigned int arg1) {
    if (arg0->unknown_4_ <= arg1) {
        return NULL;
    }
    return &arg0->unknown_0_[arg1];
}
