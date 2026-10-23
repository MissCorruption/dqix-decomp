#include <globaldefs.h>

extern int (*data_020f01b8[][4])(int, int);

struct Struct_02020cb8_5 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
};

// USA: func_0204b5e8
extern "C" ARM int func_0204b5e8(struct Struct_02020cb8_5* arg0, int arg1, int arg2) {
    return data_020f01b8[arg0->unknown_1c_0_][arg0->unknown_1c_4_](arg1, arg2);
}
