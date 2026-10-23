#include <globaldefs.h>

extern int data_ov023_021ff9e0[];

#if defined(jpn)
struct Struct_ov023_021dbfa8 { char unknown_0_[0x717]; unsigned char unknown_79b_0_ : 1; };
#else
struct Struct_ov023_021dbfa8 { char unknown_0_[0x79b]; unsigned char unknown_79b_0_ : 1; };
#endif

// USA: func_ov023_021dbfa8
extern "C" ARM void func_ov023_021dbfa8(struct Struct_ov023_021dbfa8* arg0, int arg1) {
    if (arg1 == 0) return;
#if defined(jpn)
    data_ov023_021ff9e0[5] = arg1;
#else
    data_ov023_021ff9e0[1] = arg1;
#endif
    arg0->unknown_79b_0_ = 1;
}
