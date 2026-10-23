#include <globaldefs.h>

extern "C" unsigned short* func_02012fe4(void);

struct Struct_0208b494 {
    char unknown_0_[0xac];
    int unknown_ac_;   // 0xac
    int unknown_b0_;       // 0xb0
};

// USA: func_0208b494
extern "C" ARM void func_0208b494(struct Struct_0208b494* arg0) {
    if (arg0->unknown_b0_ == 0) {
        arg0->unknown_b0_ = 1;
        arg0->unknown_ac_ = *func_02012fe4();
    }
}
