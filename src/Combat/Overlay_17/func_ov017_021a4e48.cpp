#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov017_021a4e48_17236 = 0x4134 };
#else
enum { Enum_ov017_021a4e48_17236 = 0x4354 };
#endif

struct Struct_ov017_021a4e48 {
    unsigned char unknown_0_[Enum_ov017_021a4e48_17236];
    signed char unknown_4354_;
};

// USA: func_ov017_021a4e48
extern "C" ARM void func_ov017_021a4e48(unsigned char* arg0) {
    Struct_ov017_021a4e48* var0 = (Struct_ov017_021a4e48*)arg0;
    var0->unknown_4354_--;
    if (var0->unknown_4354_ < 0) {
        var0->unknown_4354_ = 0;
    }
}
