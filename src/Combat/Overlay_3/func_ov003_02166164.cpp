#include <globaldefs.h>

#if defined(jpn)
struct Struct_ov003_02166164 { char unknown_0_[0x228]; int unknown_400_; };
#else
struct Struct_ov003_02166164 { char unknown_0_[0x400]; int unknown_400_; };
#endif
struct Struct_ov003_02165c9c_5 { char unknown_0_[0x64]; Struct_ov003_02166164 unknown_64_; };

// USA: func_ov003_02166164
extern "C" ARM void func_ov003_02166164(Struct_ov003_02165c9c_5* arg0, int arg1, int arg2) {
    if (arg1) {
        arg0->unknown_64_.unknown_400_ |= arg2;
    } else {
        arg0->unknown_64_.unknown_400_ &= ~arg2;
    }
}
