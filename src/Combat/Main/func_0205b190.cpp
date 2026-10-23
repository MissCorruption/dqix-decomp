#include <globaldefs.h>

struct Struct_0205b190 {
    char unknown_0_[0x4];
    unsigned short unknown_4_;
};

struct Struct_0205af18 {
    char unknown_0_[4];
    struct Struct_0205b190* unknown_4_;
};

// USA: func_0205b190
extern "C" ARM int func_0205b190(int arg0, struct Struct_0205af18* arg1) {
    if (arg1 == 0) {
        return 0;
    }
    return ((unsigned int)arg1->unknown_4_->unknown_4_ >> 12) & 0xf;
}
