#include <globaldefs.h>

struct Struct_0207fdcc_2;

struct Struct_02080d54 {
    char unknown_0_[0xa8];
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
};

extern "C" struct Struct_02080d54* func_02081da8(struct Struct_0207fdcc_2* arg0, int arg1);

// USA: func_02080d54
extern "C" ARM int func_02080d54(struct Struct_0207fdcc_2* arg0, int arg1, int arg2, int arg3) {
    struct Struct_02080d54* var0 = func_02081da8(arg0, arg1);
    short var1, var2;
    if (var0 == NULL) {
        return 0;
    }
    var1 = var0->unknown_ac_ + var0->unknown_a8_;
    var2 = var0->unknown_ae_ + var0->unknown_aa_;
    if (arg2 >= (short)(var0->unknown_ac_ * 8)) {
        if (arg2 < (short)(var1 * 8)) {
            if (arg3 >= (short)(var0->unknown_ae_ * 8)) {
                if (arg3 < (short)(var2 * 8)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
