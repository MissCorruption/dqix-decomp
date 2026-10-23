#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_ov001_0215905c(int arg0, int arg1);

struct Struct_ov001_02165880_28 { char unknown_0_[0x24]; int unknown_24_; };
extern Struct_ov001_02165880_28 data_ov001_02165880;

// USA: func_ov001_0215d784
extern "C" ARM int func_ov001_0215d784(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    func_ov001_0215905c(data_ov001_02165880.unknown_24_, var0);
    return 1;
}
