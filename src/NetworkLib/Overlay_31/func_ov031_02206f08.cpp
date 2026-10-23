#include <globaldefs.h>

extern "C" int func_ov031_02206f3c(int arg0, int arg1);

struct Struct_ov031_0224c9e0_3 {
    int unknown_0_;
    int unknown_4_;
};
extern Struct_ov031_0224c9e0_3 data_ov031_0224c9e0;

// USA: func_ov031_02206f08
extern "C" ARM int func_ov031_02206f08(int arg0, int arg1) {
    if (func_ov031_02206f3c(arg0, arg1) == 0) {
        return ~0x26;
    }
    data_ov031_0224c9e0.unknown_0_ = arg0;
    data_ov031_0224c9e0.unknown_4_ = arg1;
    return 0;
}
