#include <globaldefs.h>

struct Struct_ov031_0224f670_2 {
    char unknown_0_[8];
    int unknown_8_;
    char unknown_c_[0x20];
    unsigned int unknown_2c_;
};
extern Struct_ov031_0224f670_2 data_ov031_0224f670;
extern "C" int func_ov031_0220cdd4(int, int, int);
extern "C" int func_ov031_0220d214();
extern "C" void func_ov031_0221f324();
extern "C" int func_ov031_0220cae0(int, void (*)());

// USA: func_ov031_0221f630
extern "C" THUMB int func_ov031_0221f630() {
    switch (data_ov031_0224f670.unknown_2c_) {
    case 5:
        if (func_ov031_0220cdd4(0, 0, 0) != 3) return 0;
        break;
    case 7:
        if (func_ov031_0220d214() != 3) return 0;
        break;
    case 1:
        if (func_ov031_0220cae0(data_ov031_0224f670.unknown_8_, func_ov031_0221f324) != 3) return 0;
        break;
    default:
    case 0:
    case 2:
    case 3:
    case 4:
    case 6:
    case 8:
        return 0;
    }
    return 1;
}
