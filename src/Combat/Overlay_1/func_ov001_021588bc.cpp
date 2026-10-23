#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov001_021588bc {
    int unknown_0_;
    int unknown_4_;
};

extern "C" void func_ov001_02158880(struct Struct_ov001_021588bc* arg0);
extern "C" int func_ov001_021588e4(struct Struct_ov001_021588bc* arg0);

// USA: func_ov001_021588bc
extern "C" ARM int func_ov001_021588bc(struct Struct_ov001_021588bc* arg0, int arg1, int arg2) {
    func_ov001_02158880(arg0);
    arg0->unknown_0_ = arg1;
    arg0->unknown_4_ = arg2;
    return func_ov001_021588e4(arg0);
}
