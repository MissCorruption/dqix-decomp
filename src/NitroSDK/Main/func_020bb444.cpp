#include <globaldefs.h>
#if defined(jpn)
#define data_020f1f14 data_020f2080
#define data_020f1ef8 data_020f2064
#endif

struct Struct_020f1f14_2 { unsigned char unknown_0_[0x18]; };
struct Struct_020f1ef8 {
    unsigned char unknown_0_[8];
    struct Struct_020f1f14_2 *unknown_8_, *unknown_c_, *unknown_10_, *unknown_14_, *unknown_18_;
};

extern struct Struct_020f1f14_2 data_020f1f14[];
extern struct Struct_020f1ef8 data_020f1ef8;

// USA: func_020bb444
extern "C" ARM void func_020bb444(int arg0, int arg1, int arg2, int arg3, int arg4) {
    data_020f1ef8.unknown_8_ = &data_020f1f14[arg0];
    data_020f1ef8.unknown_c_ = &data_020f1f14[arg1];
    data_020f1ef8.unknown_10_ = &data_020f1f14[arg2];
    data_020f1ef8.unknown_14_ = &data_020f1f14[arg3];
    data_020f1ef8.unknown_18_ = &data_020f1f14[arg4];
}
