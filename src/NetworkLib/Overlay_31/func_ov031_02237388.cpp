#include <globaldefs.h>

struct Struct_ov031_02237388 { unsigned char unknown_0_[0x18]; unsigned char unknown_18_; };
struct Struct_ov031_02290d04_16 { char unknown_0_[4]; struct Struct_ov031_02237388 *unknown_4_; };
extern struct Struct_ov031_02290d04_16 data_ov031_02290d04;

// USA: func_ov031_02237388
extern "C" ARM int func_ov031_02237388(void) {
    if (data_ov031_02290d04.unknown_4_ == 0) {
        return 1;
    }
    return data_ov031_02290d04.unknown_4_->unknown_18_ == 0;
}
