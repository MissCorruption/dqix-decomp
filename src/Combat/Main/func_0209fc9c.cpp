#include <globaldefs.h>

struct Struct_0209da08 {
    char unknown_0_[4];
    char* unknown_4_;
};

// USA: func_0209fc9c
extern "C" ARM int func_0209fc9c(struct Struct_0209da08* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)(arg0->unknown_4_ + 0x8d5c);
    if (var0 == NULL) {
        return 0;
    }
    if (arg1 < 0 && arg1 >= 10) {
        return 0;
    }
    return var0[arg1];
}
