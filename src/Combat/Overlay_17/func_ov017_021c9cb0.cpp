#include <globaldefs.h>

extern "C" void func_ov017_021c9954(int arg0, int arg1, int arg2, void* arg3);

struct Struct_ov017_021c9cb0 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned char unknown_6_;
};

// USA: func_ov017_021c9cb0
extern "C" ARM void func_ov017_021c9cb0(void* arg0, Struct_ov017_021c9cb0* arg1) {
    func_ov017_021c9954(arg1->unknown_4_, 1, arg1->unknown_6_ != 0, arg0);
}
