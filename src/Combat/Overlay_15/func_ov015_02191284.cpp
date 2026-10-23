#include <globaldefs.h>

struct Struct_02029988_2
{
    char unknown_0_[0x5c];
    short unknown_5c_;
    short unknown_5e_;
    short unknown_60_;
    char unknown_62_[0x80 - 0x62];
};

// USA: func_ov015_02191284
extern "C" ARM int func_ov015_02191284(Struct_02029988_2* arg0) {
    return arg0->unknown_60_ - arg0->unknown_5c_;
}
