#include <globaldefs.h>

struct Struct_ov000_0215fc60 { char unknown_0_[0xfe]; unsigned short unknown_fe_; };

// USA: func_ov000_0215fc60
extern "C" ARM int func_ov000_0215fc60(char* arg0) {
    unsigned short var0 = ((struct Struct_ov000_0215fc60*)(arg0 + 0x8100))->unknown_fe_;
    if (var0 == 0x320) return 1;
    if (var0 == 0x321) return 2;
    return 0;
}
