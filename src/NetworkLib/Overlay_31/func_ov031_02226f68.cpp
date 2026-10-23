#include <globaldefs.h>

struct Struct_ov031_02226f68 { unsigned char unknown_0_[0x116]; unsigned char unknown_116_; };
struct Struct_ov031_02250c04_3 { unsigned char unknown_0_; unsigned char unknown_1_[3]; Struct_ov031_02226f68* unknown_4_; };
extern Struct_ov031_02250c04_3 data_ov031_02250c04;

extern "C" int func_ov031_0221c4bc(void*);

// USA: func_ov031_02226f68
extern "C" ARM int func_ov031_02226f68(void) {
    if (func_ov031_0221c4bc(data_ov031_02250c04.unknown_4_) == 0) {
        data_ov031_02250c04.unknown_0_ = 1;
        return 1;
    }
    unsigned char var0 = data_ov031_02250c04.unknown_4_->unknown_116_;
    if (var0 == 1) {
        goto ret0;
    }
    {
        unsigned char var1 = var0 + 0xfd;
        if (var1 > 2) {
            goto ret2;
        }
    }
ret0:
    return 0;
ret2:
    return 2;
}
