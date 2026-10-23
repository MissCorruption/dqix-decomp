#include <globaldefs.h>
#include "Graphics/AlphaTween.h"
#include "GameState/GameState.h"
#include "std_library_functions.h"
struct Struct_02049c88 { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_02049520_2 { unsigned char unknown_0_; unsigned char unknown_1_; unsigned short unknown_2_; unsigned short unknown_4_; unsigned char unknown_6_; };
struct Struct_02049c88_2 {
    int unknown_0_;
    Struct_02049c88 unknown_4_;
    Struct_02049c88 unknown_10_;
    unsigned char unknown_1c_[4];
    int unknown_20_;
    char unknown_24_[0x1c];
    Struct_02049c88 unknown_40_;
    unsigned char unknown_4c_;
    unsigned char unknown_4d_;
    Struct_02049520_2 unknown_4e_;
    unsigned char unknown_56_;
    char unknown_57_;
    char unknown_58_[6];
    char unknown_5e_[2];
    AlphaTween unknown_60_;
    int unknown_68_;
    unsigned char unknown_6c_;
    char unknown_6d_[3];
};
struct Struct_02049c88_3 { GameObject unknown_0_; Struct_02049c88_2* unknown_13c_; };
extern "C" void func_02049550(Struct_02049520_2*);

// USA: func_02049c88
extern "C" ARM void func_02049c88(Struct_02049c88_3* arg0, Struct_02049c88_2* arg1) {
    arg0->unknown_13c_ = arg1;
    if (!arg0->unknown_13c_) return;
    memset(arg0->unknown_13c_, 0, 0x70);
    arg0->unknown_13c_->unknown_0_ = 0;
    Struct_02049c88* var0 = &arg0->unknown_13c_->unknown_4_;
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_8_ = 0;
    Struct_02049c88* var1 = &arg0->unknown_13c_->unknown_10_;
    var1->unknown_0_ = 0;
    var1->unknown_4_ = 0;
    var1->unknown_8_ = 0;
    Struct_02049c88* var2 = &arg0->unknown_13c_->unknown_40_;
    var2->unknown_0_ = 0;
    var2->unknown_4_ = 0;
    var2->unknown_8_ = 0;
    arg0->unknown_13c_->unknown_20_ = 0;
    arg0->unknown_13c_->unknown_4c_ = 0;
    arg0->unknown_13c_->unknown_1c_[0] = 0xff;
    arg0->unknown_13c_->unknown_1c_[1] = 0xff;
    arg0->unknown_13c_->unknown_1c_[2] = 0xff;
    arg0->unknown_13c_->unknown_1c_[3] = 0xff;
    arg0->unknown_13c_->unknown_56_ = 1;
    func_02049550(&arg0->unknown_13c_->unknown_4e_);
    arg0->unknown_13c_->unknown_60_.Reset();
    memset(arg0->unknown_13c_->unknown_58_, 0, 6);
    arg0->unknown_13c_->unknown_68_ = 0;
    arg0->unknown_13c_->unknown_6c_ = 0xff;
}
