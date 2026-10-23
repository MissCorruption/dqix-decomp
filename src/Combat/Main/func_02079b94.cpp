#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02079b94_60 = 52 };
#else
enum { Enum_02079b94_60 = 60 };
#endif

struct Struct_02079a58_2 {
    unsigned int unknown_0_0_ : 12;
};

// USA: func_02079b94
extern "C" ARM int func_02079b94(struct Struct_02079a58_2* arg0) {
    return arg0->unknown_0_0_ * Enum_02079b94_60;
}
