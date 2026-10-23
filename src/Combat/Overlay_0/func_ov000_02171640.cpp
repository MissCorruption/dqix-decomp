#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0xdc
#define REGION_OFFSET_1 0xc2
#else
#define REGION_OFFSET_0 0x9c
#define REGION_OFFSET_1 0x82
#endif


struct Struct_ov000_02171640 { char unknown_0_[REGION_OFFSET_0]; int unknown_9c_[0x42]; };
extern "C" signed char func_ov000_02171698(struct Struct_ov000_02171640* arg0);

// USA: func_ov000_02171640
extern "C" ARM void func_ov000_02171640(struct Struct_ov000_02171640* arg0, int arg1, int arg2) {
    if (arg1 < 0) return;
    if (arg1 >= 0x42) return;
    if (arg2 == 0) return;
    arg0->unknown_9c_[arg1] = arg2;
    *(short*)((char*)arg0 + REGION_OFFSET_1) = func_ov000_02171698(arg0);
}
