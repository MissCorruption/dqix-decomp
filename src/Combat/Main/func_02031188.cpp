#include <globaldefs.h>

struct Struct_020311e8 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_02031188_2 {
    Struct_020311e8 unknown_0_;
    Struct_020311e8 unknown_c_;
    Struct_020311e8 unknown_18_;
    Struct_020311e8 unknown_24_;
};

struct Struct_02031188 {
    short unknown_0_[12];
};

extern "C" ARM void func_020311e8(Struct_020311e8* arg0, int arg1, int arg2, int arg3);

// USA: func_02031188
extern "C" ARM void func_02031188(Struct_02031188_2* arg0, Struct_02031188* arg1) {
    func_020311e8(&arg0->unknown_24_, arg1->unknown_0_[9], arg1->unknown_0_[10], arg1->unknown_0_[11]);
    func_020311e8(&arg0->unknown_0_, arg1->unknown_0_[0], arg1->unknown_0_[1], arg1->unknown_0_[2]);
    func_020311e8(&arg0->unknown_c_, arg1->unknown_0_[3], arg1->unknown_0_[4], arg1->unknown_0_[5]);
    func_020311e8(&arg0->unknown_18_, arg1->unknown_0_[6], arg1->unknown_0_[7], arg1->unknown_0_[8]);
}
