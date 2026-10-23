#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov001_02159ef0 { char unknown_0_[0x3c]; int unknown_3c_; };
extern "C" void func_ov001_02159cfc(Struct_ov001_02159ef0* arg0);

// USA: func_ov001_02159ef0
extern "C" ARM int func_ov001_02159ef0(void* arg0, Struct_ov001_02159ef0* arg1) {
    if (arg1 == NULL) return 0;
    int var0 = arg1->unknown_3c_;
    func_ov001_02159cfc(arg1);
    return var0;
}
