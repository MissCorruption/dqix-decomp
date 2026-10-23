#include <globaldefs.h>

extern "C" float func_ov017_021d6110(void*);
extern "C" void* func_ov001_0215913c(void* arg0, int arg1, int arg2, int arg3);

struct Struct_ov001_02165880_25 { char unknown_0_[0x24]; void* unknown_24_; };
extern Struct_ov001_02165880_25 data_ov001_02165880;

// USA: func_ov001_0215d608
extern "C" ARM int func_ov001_0215d608(void* arg0) {
    int var0 = (int)(4096.0f * func_ov017_021d6110(arg0));
    int var1 = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x8));
    int var2 = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x10));
    func_ov001_0215913c(data_ov001_02165880.unknown_24_, var0, var1, var2);
    return 1;
}
