#include <globaldefs.h>

struct Struct_ov017_021a3ef0_9 { unsigned char unknown_0_[0x1c]; void* unknown_1c_; };

extern "C" void func_ov003_02158d4c(void*);
extern "C" void func_ov017_021ba94c(Struct_ov017_021a3ef0_9*);

// USA: func_ov017_021babf8
extern "C" ARM void func_ov017_021babf8(Struct_ov017_021a3ef0_9* arg0) {
    void* var0 = arg0->unknown_1c_;
    if (var0) func_ov003_02158d4c(var0);
    func_ov017_021ba94c(arg0);
    ((unsigned char*)arg0)[1] = 1;
}
