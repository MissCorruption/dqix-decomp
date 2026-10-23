#include <globaldefs.h>
#include <NitroSDK/Matrix.h>

int fix32sin(int x);
int fix32cos(int x);
extern "C" int rand(void);

struct Struct_020409b0 {
    char unknown_0_[0x14];
    void* unknown_14_;
    void* unknown_18_;
};
extern "C" int func_020409b0(struct Struct_020409b0* arg0, int arg1);

struct Struct_020e7a20 {
    Vector3i unknown_0_[4];
};

extern struct Struct_020e7a20 data_020e7a20;

struct Struct_02040f48 {
    char unknown_0_[0x1f];
    unsigned char unknown_1f_;
    char unknown_20_[2];
    short unknown_22_;
    int unknown_24_;
    int unknown_28_;
    int unknown_2c_;
    int unknown_30_;
};

struct Struct_02040f48_2 {
    char unknown_0_[0xc];
    struct Struct_02040f48* unknown_c_;
};

// USA: func_02040f48
extern "C" ARM void func_02040f48(struct Struct_02040f48_2* arg0, Vector3i* arg1) {
    struct Struct_020e7a20 var0 = data_020e7a20;
    Vector3i var1 = *arg1;
    Vector3i var2[4];

    if (arg0->unknown_c_->unknown_1f_ == 8) {
        int var3 = fix32sin(arg0->unknown_c_->unknown_22_);
        int var4 = fix32cos(arg0->unknown_c_->unknown_22_);
        if (var3 < 0) var3 = -var3;
        if (var4 < 0) var4 = -var4;
        if (arg0->unknown_c_->unknown_22_ < 0x191e || (arg0->unknown_c_->unknown_22_ > 0x323d && arg0->unknown_c_->unknown_22_ < 0x4b5c)) {
            var0.unknown_0_[0].x = var3;
            var0.unknown_0_[0].z = var4;
            var0.unknown_0_[1].x = var3;
            var0.unknown_0_[1].z = var4;
            var0.unknown_0_[2].x = -var3;
            var0.unknown_0_[2].z = -var4;
            var0.unknown_0_[3].x = -var3;
            var0.unknown_0_[3].z = -var4;
        } else {
            var0.unknown_0_[0].x = var3;
            var0.unknown_0_[0].z = -var4;
            var0.unknown_0_[1].x = var3;
            var0.unknown_0_[1].z = -var4;
            var0.unknown_0_[2].x = -var3;
            var0.unknown_0_[2].z = var4;
            var0.unknown_0_[3].x = -var3;
            var0.unknown_0_[3].z = var4;
        }
    }

    int var5 = 0;
    if (var1.x < arg0->unknown_c_->unknown_24_) {
        var2[var5] = var0.unknown_0_[0];
        var5++;
    }
    if (var1.z < arg0->unknown_c_->unknown_28_) {
        var2[var5] = var0.unknown_0_[1];
        var5++;
    }
    if (var1.x > arg0->unknown_c_->unknown_2c_) {
        var2[var5] = var0.unknown_0_[2];
        var5++;
    }
    if (var1.z > arg0->unknown_c_->unknown_30_) {
        var2[var5] = var0.unknown_0_[3];
        var5++;
    }

    if (var1.x > arg0->unknown_c_->unknown_24_) var1.x = arg0->unknown_c_->unknown_24_;
    if (var1.z > arg0->unknown_c_->unknown_28_) var1.z = arg0->unknown_c_->unknown_28_;
    if (var1.x < arg0->unknown_c_->unknown_2c_) var1.x = arg0->unknown_c_->unknown_2c_;
    if (var1.z < arg0->unknown_c_->unknown_30_) var1.z = arg0->unknown_c_->unknown_30_;

    int var6 = rand() % var5;
    Vector3fix_Add((const Vector3fix*)&var1, (const Vector3fix*)&var2[var6], (Vector3fix*)&var1);
    func_020409b0((struct Struct_020409b0*)arg0, (int)&var1);
}
