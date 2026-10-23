#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov023_021fb23c_60 = 0x3a };
#else
enum { Enum_ov023_021fb23c_60 = 0x3c };
#endif

struct Struct_ov023_021fb23c {
    char unknown_0_[Enum_ov023_021fb23c_60];
    short unknown_3c_;
    short unknown_3e_;
    short unknown_40_;
};

// USA: func_ov023_021fb23c
extern "C" ARM void func_ov023_021fb23c(struct Struct_ov023_021fb23c *arg0, short arg1, short arg2, short arg3) {
    arg0->unknown_3c_ = arg1;
    arg0->unknown_3e_ = arg2;
    arg0->unknown_40_ = arg3;
}
