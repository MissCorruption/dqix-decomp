#include <globaldefs.h>

struct Struct_0203f354 {
    char unknown_0_[0x14];
};

struct Struct_0203f2b0_2 {
    char unknown_0_[6];
    unsigned short unknown_6_;
    struct Struct_0203f354* unknown_8_;
};

// USA: func_0203f354
extern "C" ARM struct Struct_0203f354* func_0203f354(struct Struct_0203f2b0_2* arg0, unsigned int arg1) {
    if (arg0->unknown_6_ <= arg1) {
        return 0;
    }
    return &arg0->unknown_8_[arg1];
}
