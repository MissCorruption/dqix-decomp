#include <globaldefs.h>

struct Struct_02011b24 {
#if defined(jpn)
    char unknown1_0_[0x617C];
#else
    char unknown_0_[0x63DC];
#endif
    union {
        unsigned char unknown_0_;
        struct {
            unsigned char unknown_0_0_ : 1;
        } unknown1_0_;
    } unknown_63dc_;
};

// USA: func_02011b24
extern "C" ARM void func_02011b24(struct Struct_02011b24* arg0) {
    arg0->unknown_63dc_.unknown_0_ = 0;
    arg0->unknown_63dc_.unknown1_0_.unknown_0_0_ = 1;
}
