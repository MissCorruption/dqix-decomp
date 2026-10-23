#include <globaldefs.h>

struct Struct_ov001_02158ab8;
extern "C" int func_ov001_02158ab8(struct Struct_ov001_02158ab8* arg0);
extern "C" void func_ov017_021d6134(void*, int);

struct Struct_ov001_02165880_19 { char unknown_0_[0x24]; struct Struct_ov001_02158ab8* unknown_24_; };
extern struct Struct_ov001_02165880_19 data_ov001_02165880;

// USA: func_ov001_0215d168
extern "C" ARM int func_ov001_0215d168(void* arg0) {
    int var0 = func_ov001_02158ab8(data_ov001_02165880.unknown_24_);
    func_ov017_021d6134(arg0, var0 == 0 ? 1 : 0);
    return 1;
}
