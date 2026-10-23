#include <globaldefs.h>

struct Struct_ov031_02213024 { unsigned char unknown_0_[0x17]; unsigned char unknown_17_; };
struct Struct_ov031_0224e5c4_3 { unsigned char unknown_0_[0xc]; Struct_ov031_02213024* unknown_c_; };
extern Struct_ov031_0224e5c4_3 data_ov031_0224e5c4;
extern "C" ARM int func_ov031_022134b0(void);

// USA: func_ov031_02213024
extern "C" ARM int func_ov031_02213024(void) {
    unsigned char var0 = 0xff;
    unsigned int var1 = func_ov031_022134b0();
    if (var1 >= 0xa && var1 <= 0x10) {
        var0 = data_ov031_0224e5c4.unknown_c_->unknown_17_;
    }
    return var0;
}
