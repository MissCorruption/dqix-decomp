#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02053f58_424 = 0x19c };
#else
enum { Enum_02053f58_424 = 0x1a8 };
#endif

struct Struct_020236dc_7 {
    char unknown_0_[Enum_02053f58_424];
    int unknown_1a8_;
    int unknown_1ac_;
};

// USA: func_02053f58
extern "C" ARM void func_02053f58(struct Struct_020236dc_7* arg0, int* arg1, int* arg2) {
    *arg1 = arg0->unknown_1a8_;
    *arg2 = arg0->unknown_1ac_;
}
