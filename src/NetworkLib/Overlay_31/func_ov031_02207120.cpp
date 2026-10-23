#include <globaldefs.h>

struct Struct_ov031_02207120_2 { unsigned char unknown_0_[0x7c]; Struct_ov031_02207120_2* unknown_7c_; };
struct Struct_ov031_02207120 { Struct_ov031_02207120_2* unknown_0_; };

extern "C" Struct_ov031_02207120_2** func_ov031_0220713c(Struct_ov031_02207120* arg0, Struct_ov031_02207120_2* arg1);

// USA: func_ov031_02207120
extern "C" ARM Struct_ov031_02207120_2** func_ov031_02207120(Struct_ov031_02207120* arg0, Struct_ov031_02207120_2* arg1) {
    Struct_ov031_02207120_2** var0 = func_ov031_0220713c(arg0, arg1);
    if (var0 != NULL) {
        *var0 = arg1->unknown_7c_;
    }
    return var0;
}
