#include <globaldefs.h>
#include "Graphics/Model3D.h"
#include "World/Object3D.h"

struct Struct_0204a4ac_3;

struct Struct_0204a4ac {
    char unknown_0_[0x8];
    struct Struct_0204a4ac_3* unknown_8_;
};

struct Struct_02107870 {
    unsigned short unknown_0_;
    char unknown_2_[0x36];
};

struct Struct_0204a4ac_2 {
    char unknown_0_[0x21c];
    struct Struct_0204a4ac* unknown_21c_;
    char unknown_220_[0x4];
    char unknown_224_[0x10];
    char unknown_234_[0x10];
    char unknown_244_[0x10];
    int unknown_254_;
    int unknown_258_;
    int unknown_25c_;
};

extern struct Struct_02107870 data_02107870[3];
extern struct Struct_02107870 data_021078a8;
extern struct Struct_02107870 data_021078e0;

// USA: func_0204a4ac
extern "C" ARM void func_0204a4ac(struct Struct_0204a4ac_2* arg0) {
    struct Struct_0204a4ac_3* var0;

    if (arg0->unknown_21c_ == NULL || (var0 = arg0->unknown_21c_->unknown_8_) == NULL) return;

    if (arg0->unknown_258_ >= 0) ((Object3D*)arg0->unknown_21c_)->UntrackBoneByIndex(arg0->unknown_254_);
    if (arg0->unknown_258_ >= 0) ((Object3D*)arg0->unknown_21c_)->UntrackBoneByIndex(arg0->unknown_258_);
    if (arg0->unknown_25c_ >= 0) ((Object3D*)arg0->unknown_21c_)->UntrackBoneByIndex(arg0->unknown_25c_);

    if (arg0->unknown_254_ == -1) arg0->unknown_254_ = ((Model3D*)var0)->GetBoneIndex(arg0->unknown_224_);
    if (arg0->unknown_258_ == -1) arg0->unknown_258_ = ((Model3D*)var0)->GetBoneIndex(arg0->unknown_234_);
    if (arg0->unknown_25c_ == -1) arg0->unknown_25c_ = ((Model3D*)var0)->GetBoneIndex(arg0->unknown_244_);

    if (arg0->unknown_258_ >= 0) {
        data_02107870[0].unknown_0_ = arg0->unknown_254_;
        ((Object3D*)arg0->unknown_21c_)->TrackBone((Object3D::TrackedBoneMatrix*)&data_02107870[0]);
    }
    if (arg0->unknown_258_ >= 0) {
        data_02107870[1].unknown_0_ = arg0->unknown_258_;
        ((Object3D*)arg0->unknown_21c_)->TrackBone((Object3D::TrackedBoneMatrix*)&data_021078a8);
    }
    if (arg0->unknown_25c_ >= 0) {
        data_02107870[2].unknown_0_ = arg0->unknown_25c_;
        ((Object3D*)arg0->unknown_21c_)->TrackBone((Object3D::TrackedBoneMatrix*)&data_021078e0);
    }
}
