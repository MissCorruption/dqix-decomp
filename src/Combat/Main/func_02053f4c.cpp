#include <globaldefs.h>
struct Struct_020236dc_2;

struct Struct_02053f4c {
#if defined(jpn)
    char unknown_0_[0x19c];
#else
    char unknown1_0_[0x1a8];
#endif
    int unknown_1a8_;
    int unknown_1ac_;
};

// USA: func_02053f4c
extern "C" ARM void func_02053f4c(Struct_020236dc_2* arg0, int arg1, int arg2) {
    struct Struct_02053f4c* var0 = (struct Struct_02053f4c*)arg0;
    var0->unknown_1a8_ = arg1;
    var0->unknown_1ac_ = arg2;
}
