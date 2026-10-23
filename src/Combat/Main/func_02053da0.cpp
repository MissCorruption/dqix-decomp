#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02053da0_412 = 0x190 };
#else
enum { Enum_02053da0_412 = 0x19c };
#endif

struct Struct_02053da0 {
    short unknown_0_;
    char unknown_2_;
    char unknown_3_;
    char unknown_4_;
    char unknown_5_[3];
    int unknown_8_;
};

// USA: func_02053da0
extern "C" ARM void func_02053da0(char* arg0, struct Struct_02053da0* arg1) {
    *(struct Struct_02053da0**)(arg0 + Enum_02053da0_412) = arg1;
    arg1->unknown_0_ = 0;
    arg1->unknown_2_ = 0;
    arg1->unknown_3_ = 0;
    arg1->unknown_4_ = 0;
    arg1->unknown_8_ = 0;
}
