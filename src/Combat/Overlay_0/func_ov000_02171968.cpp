#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x1e4
#define REGION_OFFSET_1 0xc4
#else
#define REGION_OFFSET_0 0x1a4
#define REGION_OFFSET_1 0x84
#endif


struct Struct_ov000_02171968 { char unknown_0_[REGION_OFFSET_0]; int unknown_1a4_[0x93]; };
extern "C" short func_ov000_021719c0(struct Struct_ov000_02171968* arg0);

// USA: func_ov000_02171968
extern "C" ARM void func_ov000_02171968(struct Struct_ov000_02171968* arg0, int arg1, int arg2) {
    if (arg1 < 0) return;
    if (arg1 >= 0x93) return;
    if (arg2 == 0) return;
    arg0->unknown_1a4_[arg1] = arg2;
    *(short*)((char*)arg0 + REGION_OFFSET_1) = func_ov000_021719c0(arg0);
}
