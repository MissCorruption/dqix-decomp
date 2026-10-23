#include <globaldefs.h>

struct Struct_ov001_02157570_2 {
    unsigned char unknown_0_[0x38c];
    int unknown_38c_;
    int unknown_390_;
    int unknown_394_;
    int unknown_398_;
};
struct Struct_ov001_02157570 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

extern "C" void func_ov001_02157570(struct Struct_ov001_02157570_2* arg0, struct Struct_ov001_02157570* arg1);

extern "C" int Vector3fix_Distance(struct Struct_ov001_02157570* arg0, struct Struct_ov001_02157570* arg1);
extern "C" int fix32_Divide(int arg0, int arg1);
extern "C" int func_ov001_021573c0(void* arg0);
extern "C" void func_ov001_02156c14(void* arg0, void* arg1, int* arg2, int arg3, int arg4);

struct Struct_ov001_02157668 {
    struct Struct_ov001_02157570 unknown_0_[16];
    struct Struct_ov001_02157570 unknown_c0_[16];
    int unknown_180_;
    int unknown_184_;
    struct Struct_ov001_02157570_2 unknown_188_;
    struct Struct_ov001_02157570_2 unknown_524_;
};

// USA: func_ov001_02157668
extern "C" ARM int func_ov001_02157668(struct Struct_ov001_02157668* arg0) {
    int var0[16];
    int var1[16];
    struct Struct_ov001_02157570 var2;
    struct Struct_ov001_02157570 var3;
    struct Struct_ov001_02157570 var4;
    struct Struct_ov001_02157570 var5;
    int var6;
    int var7;

    if (arg0->unknown_180_ <= 0) {
        return 1;
    }

    var7 = 0;
    for (var6 = 0; var6 < arg0->unknown_180_ - 1; var6++) {
        var1[var6] = Vector3fix_Distance(&arg0->unknown_0_[var6], &arg0->unknown_0_[var6 + 1]);
        var7 += var1[var6];
    }
    for (var6 = 0; var6 < arg0->unknown_180_ - 1; var6++) {
        var0[var6] = arg0->unknown_184_ / (arg0->unknown_180_ - 1);
    }
    func_ov001_02156c14(&arg0->unknown_188_, arg0->unknown_0_, var0, arg0->unknown_180_, 0);

    var7 = 0;
    while (1) {
        func_ov001_02157570(&arg0->unknown_188_, &var2);
        if (func_ov001_021573c0(&arg0->unknown_188_) != 0) {
            break;
        }
        func_ov001_02157570(&arg0->unknown_188_, &var3);
        var7 += Vector3fix_Distance(&var2, &var3);
    }
    func_ov001_02156c14(&arg0->unknown_188_, arg0->unknown_0_, var0, arg0->unknown_180_, fix32_Divide(var7, arg0->unknown_184_ << 12));

    var7 = 0;
    for (var6 = 0; var6 < arg0->unknown_180_ - 1; var6++) {
        var1[var6] = Vector3fix_Distance(&arg0->unknown_c0_[var6], &arg0->unknown_c0_[var6 + 1]);
        var7 += var1[var6];
    }
    for (var6 = 0; var6 < arg0->unknown_180_ - 1; var6++) {
        var0[var6] = arg0->unknown_184_ / (arg0->unknown_180_ - 1);
    }
    func_ov001_02156c14(&arg0->unknown_524_, arg0->unknown_c0_, var0, arg0->unknown_180_, 0);

    var7 = 0;
    while (1) {
        func_ov001_02157570(&arg0->unknown_524_, &var4);
        if (func_ov001_021573c0(&arg0->unknown_524_) != 0) {
            break;
        }
        func_ov001_02157570(&arg0->unknown_524_, &var5);
        var7 += Vector3fix_Distance(&var4, &var5);
    }
    func_ov001_02156c14(&arg0->unknown_524_, arg0->unknown_c0_, var0, arg0->unknown_180_, fix32_Divide(var7, arg0->unknown_184_ << 12));

    return 0;
}
