#include <globaldefs.h>

struct Struct_0203ce00 {
    char unknown_0_[0x5c];
    unsigned int unknown_5c_;
    int unknown_60_;
    int unknown_64_;
};

// USA: func_0203ce00
extern "C" ARM int func_0203ce00(struct Struct_0203ce00* arg0) {
    if (arg0->unknown_5c_ & 0x2) {
        return arg0->unknown_64_;
    }
    return arg0->unknown_60_;
}
