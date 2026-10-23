#include <globaldefs.h>

extern "C" int func_ov031_022119d0(int* arg0, int* arg1);

struct Struct_ov031_0224e598 { int unknown_0_; int unknown_4_; };
extern Struct_ov031_0224e598 data_ov031_0224e598;

// USA: func_ov031_02211764
extern "C" ARM int func_ov031_02211764(int* arg0, int* arg1) {
    int var0 = func_ov031_022119d0(arg0, arg1);
    if (var0 != 0) return var0;
    if (arg0 != 0) {
        *arg0 = data_ov031_0224e598.unknown_4_;
    }
    if (arg1 != 0) {
        switch (data_ov031_0224e598.unknown_0_) {
        case 0:
            *arg1 = 0;
            break;
        case 2: case 3: case 4: case 5: case 6:
        case 16: case 17:
            *arg1 = 6;
            break;
        case 1: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15:
        default:
            *arg1 = 7;
            break;
        }
    }
    return data_ov031_0224e598.unknown_0_;
}
