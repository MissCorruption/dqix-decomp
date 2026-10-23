#include <globaldefs.h>

struct Struct_0202c1a4 {
    char unknown_0_[0x1038];
    signed char unknown_1038_[16];
};

extern "C" unsigned short func_0202df58(void);

// USA: func_0202c1a4
extern "C" ARM signed char func_0202c1a4(struct Struct_0202c1a4* arg0) {
    return arg0->unknown_1038_[func_0202df58()];
}
