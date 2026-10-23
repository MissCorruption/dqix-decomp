#include <globaldefs.h>

extern int (*data_020f01d8[][4])(int);

struct Struct_0204b5b4 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
};

static inline int (*inline_0204b5b4(int arg1, int arg2))(int) {
    return data_020f01d8[arg1][arg2];
}

// USA: func_0204b5b4
extern "C" ARM void func_0204b5b4(struct Struct_0204b5b4* arg0, int arg1) {
    inline_0204b5b4(arg0->unknown_1c_0_, arg0->unknown_1c_4_)(arg1 & 3);
}
