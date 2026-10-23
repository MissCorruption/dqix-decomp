#include <globaldefs.h>

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

struct Struct_ov009_0218aa28 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

extern "C" void func_ov001_02157570(struct Struct_ov001_02157570_2* arg0, struct Struct_ov001_02157570* arg1);
extern "C" int func_ov001_021570b4(void* arg0);
extern "C" void Vector3fix_Subtract(struct Struct_ov009_0218aa28* arg0, struct Struct_ov009_0218aa28* arg1, struct Struct_ov009_0218aa28* arg2);
extern "C" int fix32_Atan2(int arg0, int arg1);

// USA: func_ov001_02157ae0
extern "C" ARM void func_ov001_02157ae0(char* arg0, struct Struct_ov001_02157570* arg1, int* arg2) {
    if (*(int*)(arg0 + 0x464) == 0) {
        return;
    }
    if (*(int*)(arg0 + 0x468) != 0) {
        func_ov001_02157570((struct Struct_ov001_02157570_2*)(arg0 + 0xc8), arg1);
        *(int*)(arg0 + 0x464) = 0;
        *(int*)(arg0 + 0x468) = 0;
        return;
    }
    func_ov001_02157570((struct Struct_ov001_02157570_2*)(arg0 + 0xc8), arg1);
    if (func_ov001_021570b4(arg0 + 0xc8) != 0) {
        *(int*)(arg0 + 0x468) = 1;
    }
    struct Struct_ov001_02157570 var0;
    struct Struct_ov009_0218aa28 var1;
    func_ov001_02157570((struct Struct_ov001_02157570_2*)(arg0 + 0xc8), &var0);
    Vector3fix_Subtract((struct Struct_ov009_0218aa28*)&var0, (struct Struct_ov009_0218aa28*)arg1, &var1);
    if (var1.unknown_0_ == 0 && var1.unknown_8_ == 0) {
        return;
    }
    int var2 = fix32_Atan2(var1.unknown_0_, var1.unknown_8_);
    int var3 = (int)((float)var2 / 4096.0f / 6.2831855f);
    int var4 = var2 - (int)((float)var3 * 2.0f * 3.1415927f * 4096.0f);
    if (var4 > 25735) {
        var4 -= 25735;
    }
    if (var4 <= 0) {
        var4 += 25735;
    }
    *arg2 = var4;
}
