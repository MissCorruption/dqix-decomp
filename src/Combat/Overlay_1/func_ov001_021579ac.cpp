#include <globaldefs.h>

struct Struct_02028460_3 { int unknown_0_; int unknown_4_; int unknown_8_; };

extern "C" int Vector3fix_Distance(struct Struct_02028460_3* arg0, struct Struct_02028460_3* arg1);

struct Struct_ov001_02157570_2 {
    unsigned char unknown_0_[0x38c];
    int unknown_38c_;
    int unknown_390_;
    int unknown_394_;
};
struct Struct_ov001_02157570 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};
extern "C" void func_ov001_02157570(struct Struct_ov001_02157570_2* arg0, struct Struct_ov001_02157570* arg1);

extern "C" ARM int fix32_Divide(unsigned int arg0, unsigned int arg1);

extern "C" int func_ov001_021573c0(void* arg0);
extern "C" void func_ov001_02156c14(void* arg0, void* arg1, int* arg2, int arg3, int arg4);

struct Struct_ov001_021579ac {
    struct Struct_02028460_3 unknown_0_[16];
    int unknown_c0_;
    int unknown_c4_;
};

// USA: func_ov001_021579ac
extern "C" ARM int func_ov001_021579ac(struct Struct_ov001_021579ac* arg0) {
    if (arg0->unknown_c4_ <= 0) {
        return 1;
    }

    int var0[32];
    struct Struct_02028460_3 var1;
    struct Struct_02028460_3 var2;

    int var3;
    int var4 = 0;
    for (var3 = 0; var3 < arg0->unknown_c4_ - 1; var3++) {
        var0[var3] = Vector3fix_Distance(&arg0->unknown_0_[var3], &arg0->unknown_0_[var3 + 1]);
        var4 += var0[var3];
    }

    var3 = 0;
    int* var5 = var0 + 16;
    while (var3 < arg0->unknown_c4_ - 1) {
        var5[var3] = arg0->unknown_c0_ / (arg0->unknown_c4_ - 1);
        var3++;
    }

    func_ov001_02156c14((char*)arg0 + 0xc8, arg0, var0 + 16, arg0->unknown_c4_, 0);

    var4 = 0;
    do {
        func_ov001_02157570((struct Struct_ov001_02157570_2*)((char*)arg0 + 0xc8), (struct Struct_ov001_02157570*)&var1);
        if (func_ov001_021573c0((char*)arg0 + 0xc8) != 0) {
            break;
        }
        func_ov001_02157570((struct Struct_ov001_02157570_2*)((char*)arg0 + 0xc8), (struct Struct_ov001_02157570*)&var2);
        var4 += Vector3fix_Distance(&var1, &var2);
    } while (1);

    int var6 = fix32_Divide(var4, arg0->unknown_c0_ << 12);
    func_ov001_02156c14((char*)arg0 + 0xc8, arg0, var0 + 16, arg0->unknown_c4_, var6);

    return 0;
}
