#include <globaldefs.h>

struct Struct_ov001_02165880_8 { void* unknown_0_; char* unknown_4_; };
extern Struct_ov001_02165880_8 data_ov001_02165880;
extern "C" void func_ov001_0215acb4(void* arg0);

// USA: func_ov001_0215acd4
extern "C" ARM void func_ov001_0215acd4(int arg0) {
    char* var0 = data_ov001_02165880.unknown_4_;
    if (var0 == NULL) return;
    func_ov001_0215acb4(var0 + (arg0 << 4));
}
