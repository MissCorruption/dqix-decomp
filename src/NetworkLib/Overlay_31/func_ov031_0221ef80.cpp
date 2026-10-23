#include <globaldefs.h>

struct Struct_ov031_0224f620_2 {
    int unknown_0_[2];
    int unknown_8_;
    int unknown_c_[3];
    int unknown_18_;
};

extern Struct_ov031_0224f620_2 data_ov031_0224f620;
extern "C" int func_ov031_0220cae0(int arg0, int arg1);
extern "C" int func_ov031_0220cdd4(int arg0, int arg1, int arg2);
extern "C" int func_ov031_0220d214(void);
extern "C" void func_ov031_0221ecc8(void);

// USA: func_ov031_0221ef80
extern "C" THUMB int func_ov031_0221ef80(void) {
    switch (data_ov031_0224f620.unknown_18_) {
    case 5:
        if (func_ov031_0220cdd4(0, 0, 0) == 3) goto success;
        return 0;
    case 7:
        if (func_ov031_0220d214() == 3) goto success;
        return 0;
    case 1:
        if (func_ov031_0220cae0(data_ov031_0224f620.unknown_8_, (int)func_ov031_0221ecc8) == 3) goto success;
        return 0;
    case 0:
    case 2:
    case 3:
    case 4:
    case 6:
    case 8:
    default:
        return 0;
    }
success:
    return 1;
}
