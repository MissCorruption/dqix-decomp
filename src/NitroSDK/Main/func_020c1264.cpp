#include <globaldefs.h>

struct Struct_020c1264 { unsigned int unknown_0_[9]; };

// USA: func_020c1264
extern "C" THUMB void Mat3x3_WriteRotationX(struct Struct_020c1264* arg0, int arg1, int arg2) {
    arg0->unknown_0_[0] = 0x1000;
    arg0->unknown_0_[1] = 0;
    arg0->unknown_0_[2] = 0;
    arg0->unknown_0_[3] = 0;
    arg0->unknown_0_[4] = arg2;
    arg0->unknown_0_[5] = arg1;
    arg0->unknown_0_[6] = 0;
    arg0->unknown_0_[7] = -arg1;
    arg0->unknown_0_[8] = arg2;
}
