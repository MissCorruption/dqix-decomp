#include <globaldefs.h>

extern "C" int func_ov017_021d4df8(void*, int);
extern "C" void func_ov017_021d4ce4(void*, int);
extern "C" void func_ov017_021d4ccc(void*);

struct Struct_0209ff6c {
    char unknown_0_[0x48];
    int unknown_48_;
    char unknown_4c_[0x14];
    int unknown_60_;
    int unknown_64_;
};

// USA: func_0209ff6c
extern "C" ARM void func_0209ff6c(Struct_0209ff6c* arg0) {
    if (arg0->unknown_60_ >= 0) {
        if (func_ov017_021d4df8((char*)arg0 + 0xc, arg0->unknown_60_) == 0) {
            arg0->unknown_60_ = -1;
            return;
        }
        func_ov017_021d4ce4((char*)arg0 + 0xc, arg0->unknown_60_);
        arg0->unknown_64_ = arg0->unknown_60_;
        arg0->unknown_60_ = -1;
    } else {
        if (arg0->unknown_64_ < 0) return;
        func_ov017_021d4ccc((char*)arg0 + 0xc);
        if (arg0->unknown_48_ != 0) {
            arg0->unknown_64_ = -1;
        }
    }
}
