#include <globaldefs.h>

extern "C" float func_ov017_021d6110(void*);
extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_ov001_02159168(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov001_02165880_26 { char unknown_0_[0x24]; void* unknown_24_; };
extern Struct_ov001_02165880_26 data_ov001_02165880;

// USA: func_ov001_0215d684
extern "C" ARM int func_ov001_0215d684(void* arg0, int arg1) {
    int var0 = (int)(4096.0f * func_ov017_021d6110(arg0));
    int var1 = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x8));
    int var2 = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x10));
    int var3;
    void* var4 = (char*)arg0 + 0x18;
    arg0 = (char*)arg0 + 0x20;
    int var5 = func_ov017_021d60f4(var4);
    var3 = -1;
    if (arg1 >= 5) {
        var3 = func_ov017_021d60f4(arg0);
        arg0 = (char*)arg0 + 0x8;
    }
    int var6 = 0;
    if (arg1 >= 6) {
        var6 = (func_ov017_021d60f4(arg0) != 0) ? 1 : 0;
    }
    void* var7 = data_ov001_02165880.unknown_24_;
    func_ov001_02159168(var7, var0, var1, var2, var5, var3, var6);
    return 1;
}
