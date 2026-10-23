#include <globaldefs.h>

struct Struct_ov000_02171720_2 {
    char unknown_0_[8];
    struct Struct_ov000_02171720_2* unknown_8_;
};
struct Struct_ov000_02171720 {
    struct Struct_ov000_02171720_2* unknown_0_;
};

// USA: func_ov025_021e23d0
#if defined(jpn)
extern "C" ARM void func_ov000_02171720(struct Struct_ov000_02171720* arg0, struct Struct_ov000_02171720_2* arg1)
#else
extern "C" ARM void func_ov025_021e23d0(struct Struct_ov000_02171720* arg0, struct Struct_ov000_02171720_2* arg1)
#endif
{
    arg1->unknown_8_ = arg0->unknown_0_ ? arg0->unknown_0_ : NULL;
    arg0->unknown_0_ = arg1;
}
