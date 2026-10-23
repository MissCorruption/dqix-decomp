#include <globaldefs.h>

struct Struct_02029634_3 {
    char unknown_0_[0x6c];
    unsigned char unknown_6c_;
    char unknown_6d_[0xf];
    void (*unknown_7c_)(struct Struct_02029634_3*);
};

// USA: func_0202a91c
extern "C" ARM void func_0202a91c(struct Struct_02029634_3* arg0) {
    if (arg0->unknown_6c_ == 1) {
        return;
    }
    arg0->unknown_6c_ = 1;
    if (arg0->unknown_7c_ == 0) {
        return;
    }
    arg0->unknown_7c_(arg0);
}
