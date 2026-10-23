#include <globaldefs.h>

struct Struct_02073ec4_2;
struct Struct_0209be28 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    int unknown_4_;
    unsigned char unknown_8_[0x18];
};
extern "C" struct Struct_0209be28* func_0209bd94(struct Struct_02073ec4_2*, int);

// USA: func_0209be28
extern "C" ARM void func_0209be28(struct Struct_02073ec4_2* arg0, int arg1, int* arg2) {
    struct Struct_0209be28* var0 = func_0209bd94(arg0, arg1);
    if (var0 != NULL) {
        var0->unknown_4_ = *arg2;
    }
}
