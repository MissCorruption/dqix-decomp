#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x84
#define REGION_OFFSET_1 0x85
#else
#define REGION_OFFSET_0 0x80
#define REGION_OFFSET_1 0x81
#endif


struct Struct_ov000_021735d0_5 {
    char unknown_0_[0x930];
    int unknown_930_;
    int unknown_934_;
    int unknown_938_;
    char unknown_93c_[0x94c - 0x93c];
    int unknown_94c_;
};

// USA: func_ov000_02180b50
extern "C" ARM void func_ov000_02180b50(struct Struct_ov000_021735d0_5* arg0) {
    if (arg0->unknown_934_ == 0) {
        arg0->unknown_930_ = 0x180;
        arg0->unknown_938_ = 0;
        arg0->unknown_934_ = 1;
        return;
    }
    if (arg0->unknown_934_ != 1) return;
    int var0 = arg0->unknown_930_ - arg0->unknown_94c_ * 3;
    arg0->unknown_930_ = var0;
    if (var0 <= REGION_OFFSET_0) {
        var0 = REGION_OFFSET_0;
        arg0->unknown_930_ = var0;
        arg0->unknown_934_ = var0 - REGION_OFFSET_1;
    }
}
