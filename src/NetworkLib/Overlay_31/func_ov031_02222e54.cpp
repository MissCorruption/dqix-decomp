#include <globaldefs.h>

struct Struct_ov031_02222e54 { unsigned char unknown_0_[0x19]; unsigned char unknown_19_; };
extern Struct_ov031_02222e54* data_ov031_02250ba8;

// USA: func_ov031_02222e54
extern "C" ARM int func_ov031_02222e54(void) {
    Struct_ov031_02222e54 *var0 = data_ov031_02250ba8;
    if (var0 == NULL) {
        return 1;
    }
    return var0->unknown_19_ == 0;
}
