#include <globaldefs.h>

extern "C" int func_ov017_021d4df8(void*, int);
extern "C" void func_ov017_021d4ce4(void*, int);
extern "C" void func_ov017_021d4ccc(void*);

struct Struct_0209fe18 {
    char unknown_0_[0x4c];
    int unknown_4c_;
    char unknown_50_[0x14];
    int unknown_64_;
    int unknown_68_;
};

// USA: func_0209fe18
extern "C" ARM void func_0209fe18(Struct_0209fe18* arg0) {
    if (arg0->unknown_64_ >= 0) {
        if (func_ov017_021d4df8((char*)arg0 + 0x10, arg0->unknown_64_) == 0) {
            arg0->unknown_64_ = -1;
            return;
        }
        func_ov017_021d4ce4((char*)arg0 + 0x10, arg0->unknown_64_);
        arg0->unknown_68_ = arg0->unknown_64_;
        arg0->unknown_64_ = -1;
    } else {
        if (arg0->unknown_68_ < 0) return;
        func_ov017_021d4ccc((char*)arg0 + 0x10);
        if (arg0->unknown_4c_ != 0) {
            arg0->unknown_68_ = -1;
        }
    }
}
