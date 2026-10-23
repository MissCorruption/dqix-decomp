#include <globaldefs.h>

extern "C" int func_02075df4(void* arg0, int arg1, int arg2, int arg3);

struct Struct_02075db0 {
    char unknown_0_[0x24];
    int** unknown_24_;
    char unknown_28_[0x34];
    unsigned short unknown_5c_;
    char unknown_5e_[0x2];
    int unknown_60_;
    int unknown_64_;
};

// USA: func_02075db0
extern "C" ARM int func_02075db0(struct Struct_02075db0* arg0, int arg1, int arg2) {
    int** var0;
    int* var1;
    if (arg0->unknown_5c_ == 0) return 0;
    var0 = arg0->unknown_24_;
    if (var0 == NULL) return 0;
    var1 = var0[arg0->unknown_64_];
    return func_02075df4(arg0, var1[arg0->unknown_60_], arg1, arg2);
}
