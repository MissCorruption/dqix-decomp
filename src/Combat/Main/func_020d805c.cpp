#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020d805c_336 = 0xf0 };
#else
enum { Enum_020d805c_336 = 0x150 };
#endif

struct Struct_020d805c {
    char unknown_0_[Enum_020d805c_336];
    unsigned char unknown_150_0_ : 1;
    unsigned char unknown_150_1_ : 1;
    unsigned char unknown_150_2_ : 1;
    unsigned char unknown_150_3_ : 1;
    unsigned char unknown_150_4_ : 1;
    unsigned char unknown_150_5_ : 1;
    unsigned char unknown_150_6_ : 1;
};

// USA: func_020d805c
extern "C" ARM int func_020d805c(struct Struct_020d805c* arg0) {
    return arg0->unknown_150_6_;
}
