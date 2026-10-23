#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020466c8_56 = 0x4 };
#else
enum { Enum_020466c8_56 = 0x38 };
#endif

struct Struct_020466c8 {
    char unknown_0_[Enum_020466c8_56];
    int unknown_38_;
};

// USA: func_020466c8
extern "C" ARM void func_020466c8(struct Struct_020466c8* arg0, int arg1) {
    arg0->unknown_38_ = arg1;
}
