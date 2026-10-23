#include <globaldefs.h>
#include "std_library_functions.h"
#include "Graphics/Vector.h"

extern char data_ov001_02164d10[];

struct Struct_ov001_02158828 {
    int unknown_0_;
    unsigned char unknown_4_[0xc];
    unsigned char unknown_10_[0xc];
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
    char unknown_28_[0x20];
    void* unknown_48_;
};

extern "C" ARM void func_ov001_02158828(struct Struct_ov001_02158828* arg0);

struct Struct_ov001_021588e4 {
    Struct_ov001_02158828* unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
    int unknown_28_;
    int unknown_2c_;
    int unknown_30_;
    int unknown_34_;
    int unknown_38_;
    int unknown_3c_;
    int unknown_40_;
    int unknown_44_;
    int unknown_48_;
    Vector3fix unknown_4c_;
    Vector3fix unknown_58_;
    int unknown_64_;
    int unknown_68_;
    int unknown_6c_;
    int unknown_70_;
    int unknown_74_;
    int unknown_78_;
    Vector3fix unknown_7c_;
    int unknown_88_;
    int unknown_8c_;
    int unknown_90_;
    char unknown_94_[0x20];
    Vector3fix unknown_b4_;
    Vector3fix unknown_c0_;
    int unknown_cc_;
    int unknown_d0_;
    int unknown_d4_;
    int unknown_d8_;
    Vector3fix unknown_dc_;
    Vector3fix unknown_e8_;
    Vector3fix unknown_f4_;
    Vector3fix unknown_100_;
    int unknown_10c_;
    Vector3fix unknown_110_;
    Vector3fix unknown_11c_;
    Vector3fix unknown_128_;
    int unknown_134_;
    Vector3fix unknown_138_;
    Vector3fix unknown_144_;
    Vector3fix unknown_150_;
    char unknown_15c_[0x8c4];
    void* unknown_a20_;
    int unknown_a24_;
};

// USA: func_ov001_021588e4
extern "C" ARM void func_ov001_021588e4(Struct_ov001_021588e4* arg0) {
    arg0->unknown_34_ = arg0->unknown_30_ = 0;
    arg0->unknown_38_ = 0;
    arg0->unknown_3c_ = 0;
    arg0->unknown_40_ = 0;
    arg0->unknown_44_ = 0;
    arg0->unknown_48_ = 0;
    memset(&arg0->unknown_4c_, 0, sizeof(Vector3fix));
    memset(&arg0->unknown_58_, 0, sizeof(Vector3fix));
    arg0->unknown_6c_ = 0;
    arg0->unknown_68_ = 0;
    arg0->unknown_64_ = 0;
    arg0->unknown_70_ = 0;
    arg0->unknown_74_ = -1;
    arg0->unknown_78_ = 0;
    memset(&arg0->unknown_7c_, 0, sizeof(Vector3fix));
    strcpy(arg0->unknown_94_, data_ov001_02164d10);
    arg0->unknown_90_ = 0;
    arg0->unknown_8c_ = 0;
    arg0->unknown_88_ = 0;
    memset(&arg0->unknown_b4_, 0, sizeof(Vector3fix));
    memset(&arg0->unknown_c0_, 0, sizeof(Vector3fix));
    arg0->unknown_d8_ = 0;
    arg0->unknown_d4_ = 0;
    arg0->unknown_cc_ = 0;
    memset(&arg0->unknown_dc_, 0, sizeof(Vector3fix));
    memset(&arg0->unknown_e8_, 0, sizeof(Vector3fix));
    memset(&arg0->unknown_f4_, 0, sizeof(Vector3fix));
    memset(&arg0->unknown_100_, 0, sizeof(Vector3fix));
    arg0->unknown_10c_ = 0;
    memset(&arg0->unknown_110_, 0, sizeof(Vector3fix));
    memset(&arg0->unknown_11c_, 0, sizeof(Vector3fix));
    memset(&arg0->unknown_128_, 0, sizeof(Vector3fix));
    arg0->unknown_134_ = 0;
    arg0->unknown_a24_ = 0;
    memset(&arg0->unknown_138_, 0, sizeof(Vector3fix));
    memset(&arg0->unknown_144_, 0, sizeof(Vector3fix));
    memset(&arg0->unknown_150_, 0, sizeof(Vector3fix));
    arg0->unknown_8_ = 0;
    arg0->unknown_c_ = 0;
    arg0->unknown_10_ = 0;
    arg0->unknown_14_ = 0;
    arg0->unknown_18_ = 0;
    arg0->unknown_1c_ = 0;
    arg0->unknown_20_ = 0;
    arg0->unknown_24_ = 0;
    arg0->unknown_28_ = 0;
    arg0->unknown_2c_ = 0;
    arg0->unknown_a20_ = NULL;
    if (arg0->unknown_0_ == NULL || arg0->unknown_4_ <= 0) {
        return;
    }
    for (int var0 = 0; var0 < arg0->unknown_4_; var0++) {
        func_ov001_02158828(&arg0->unknown_0_[var0]);
    }
}
