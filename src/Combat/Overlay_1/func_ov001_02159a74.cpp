#include <globaldefs.h>

struct Struct_ov001_021592bc_2 { int unknown_0_; char unknown_4_[8]; void* unknown_c_; };
extern "C" int func_ov001_02164624(Struct_ov001_021592bc_2* arg0, int arg1);
extern "C" int func_ov001_02164578(Struct_ov001_021592bc_2* arg0, int arg1, void* arg2, int arg3, float arg4);
extern Struct_ov001_021592bc_2* data_ov001_02165884;

struct Struct_ov001_02159a74 {
    char unknown_0_[0x10];
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    char unknown_20_[0x3c - 0x20];
    int* unknown_3c_;
};

struct Struct_ov001_02159a74_2 {
    char unknown_0_[0x70];
    int unknown_70_;
};

// USA: func_ov001_02159a74
extern "C" ARM int func_ov001_02159a74(struct Struct_ov001_02159a74* arg0, struct Struct_ov001_02159a74_2* arg1) {
    if (arg0->unknown_18_ == 0) {
        if (func_ov001_02164624(data_ov001_02165884, arg1->unknown_70_) != 0) {
            float var0 = (float)arg0->unknown_14_;
            func_ov001_02164578(data_ov001_02165884, arg1->unknown_70_, &arg0->unknown_1c_, arg0->unknown_10_, var0);
            if (arg0->unknown_3c_ != NULL) {
                if (*arg0->unknown_3c_ == 0xd) {
                    return 0;
                }
            }
            arg0->unknown_18_ = 1;
            return 1;
        }
        return 1;
    }
    return 0;
}
