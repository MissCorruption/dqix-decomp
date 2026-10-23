#include <globaldefs.h>

struct Struct_0205bb84;
extern "C" int func_0205bb84(struct Struct_0205bb84*);

struct Struct_0205bd04 {
    char unknown_0_[0x4e];
    unsigned char unknown_4e_;
};

// USA: func_0205bd04
extern "C" ARM int func_0205bd04(struct Struct_0205bd04* arg0) {
    if (arg0->unknown_4e_ == 0) return -1;
    return func_0205bb84((struct Struct_0205bb84*)arg0);
}
