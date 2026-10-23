#include <globaldefs.h>

unsigned long long GetCurrentTimestamp(void);

struct Struct_0201fc40 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    long long unknown_8_;
};

// USA: func_0201fc40
extern "C" ARM void func_0201fc40(struct Struct_0201fc40* arg0, int arg1) {
    if (arg0->unknown_2_ != 0) return;
    if (arg0->unknown_0_ == 1 || arg0->unknown_0_ == 4) {
        arg0->unknown_1_ = 3;
        arg0->unknown_4_ = arg1;
        arg0->unknown_8_ = GetCurrentTimestamp();
        return;
    }
    if (arg0->unknown_0_ == 3 || arg0->unknown_0_ == 2) {
        arg0->unknown_4_ = arg1;
        arg0->unknown_8_ = GetCurrentTimestamp();
    }
}
