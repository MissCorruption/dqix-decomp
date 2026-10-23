#include <globaldefs.h>

extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);

struct Struct_0209890c {
    unsigned char unknown_0_[0x14];
    unsigned char unknown_14_[6];
    unsigned char unknown_1a_[0x6c - 0x1a];
    unsigned int unknown_6c_0_ : 26;
    unsigned int unknown_6f_2_ : 1;
    unsigned int unknown_6f_3_ : 5;
    unsigned char unknown_70_[0xe8 - 0x70];
};

// USA: func_0209890c
extern "C" ARM int func_0209890c(void* arg0, void* arg1) {
    Struct_0209890c* var0 = static_cast<Struct_0209890c*>(arg0);
    Struct_0209890c* var1 = static_cast<Struct_0209890c*>(arg1);
    int var2;
    if (!var1->unknown_6f_2_) {
        return 0;
    }
    for (var2 = 0; var2 < 30; var2++) {
        if (func_02001aec(var0[var2].unknown_14_, var1->unknown_14_, sizeof(var1->unknown_14_)) == 0) {
            return 0;
        }
    }
    return 1;
}
