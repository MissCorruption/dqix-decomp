#include <globaldefs.h>

struct Struct_ov009_0218aa28 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_020a299c_3 {
    char unknown_0_[0x10];
    int unknown_10_;
    Struct_ov009_0218aa28 unknown_14_;
    Struct_ov009_0218aa28 unknown_20_;
};

struct Struct_020a299c {
    char unknown_0_[0x10];
    Struct_ov009_0218aa28 unknown_10_;
    char unknown_1c_[0x220 - 0x1c];
    Struct_ov009_0218aa28 unknown_220_;
    char unknown_22c_[0x245 - 0x22c];
    unsigned char unknown_245_;
    char unknown_246_[0x298 - 0x246];
    Struct_020a299c_3 unknown_298_;
};

struct Struct_020a299c_2 {
    char unknown_0_[0x44];
    Struct_ov009_0218aa28 unknown_44_;
};

extern "C" void __clear(void* arg0, int arg1);
extern "C" int func_02032124(struct Struct_ov009_0218aa28* arg0, struct Struct_020a299c_3* arg1);
int fix32abs(int x);
extern "C" int fix32_Divide(int arg0, int arg1);
int fix32SignedAngleDistance(int a, int b);
int fix32ReduceAngle0To2Pi(int a);
extern "C" void Vector3fix_Add(const struct Struct_ov009_0218aa28* arg0, const struct Struct_ov009_0218aa28* arg1, struct Struct_ov009_0218aa28* arg2);
struct Vector3i;
void Vector3fixMultiplyScalar(Vector3i const*, int, Vector3i*);
extern "C" void func_0202ec5c(char*, int*);
extern "C" void func_0202e694(void* arg0, int* arg1);

static inline int inline_02061c04_5(int arg0, int arg1) {
    return (int)(((long long)arg0 * arg1 + 0x800) >> 12);
}

static inline int inline_020a299c(int arg0, int arg1, int arg2) {
    int var0 = inline_02061c04_5(arg0, arg2);
    int var1 = inline_02061c04_5(arg1, 0x1000 - arg2);
    return var1 + var0;
}

// USA: func_020a299c
extern "C" ARM int func_020a299c(struct Struct_020a299c* arg0, const struct Struct_ov009_0218aa28* arg1, const struct Struct_020a299c_2* arg2) {
    if ((arg0->unknown_245_ & 4) == 0 && (arg0->unknown_245_ & 8) == 0) {
        return 0;
    }
    struct Struct_ov009_0218aa28 var0 = arg2->unknown_44_;
    struct Struct_ov009_0218aa28 var1;
    __clear(&var1, 0xc);
    int var2 = func_02032124(&var0, (struct Struct_020a299c_3*)&arg0->unknown_298_);
    if (var2 > 0) {
        int var3 = fix32_Divide(fix32abs(var2), arg0->unknown_298_.unknown_10_);
        if (var3 > 0x1000) {
            var3 = 0x1000;
        }
        if (arg0->unknown_245_ & 4) {
            var1.unknown_0_ = fix32ReduceAngle0To2Pi(arg0->unknown_220_.unknown_0_ + inline_02061c04_5(fix32SignedAngleDistance(arg0->unknown_220_.unknown_0_, arg0->unknown_298_.unknown_14_.unknown_0_), var3));
        } else if (arg0->unknown_245_ & 8) {
            var1.unknown_0_ = arg0->unknown_220_.unknown_0_;
        }
        var1.unknown_4_ = inline_020a299c(arg0->unknown_298_.unknown_14_.unknown_4_, arg0->unknown_220_.unknown_4_, var3);
        var1.unknown_8_ = inline_020a299c(arg0->unknown_298_.unknown_14_.unknown_8_, arg0->unknown_220_.unknown_8_, var3);
        struct Struct_ov009_0218aa28 var4;
        struct Struct_ov009_0218aa28 var5;
        struct Struct_ov009_0218aa28 var6;
        struct Struct_ov009_0218aa28 var7;
        Vector3fix_Add(&arg0->unknown_10_, &arg0->unknown_298_.unknown_20_, &var6);
        Vector3fixMultiplyScalar((Vector3i const*)arg1, (int)(0x1000u - (unsigned int)var3), (Vector3i*)&var4);
        Vector3fixMultiplyScalar((Vector3i const*)&var6, var3, (Vector3i*)&var5);
        Vector3fix_Add(&var4, &var5, &var7);
        func_0202ec5c((char*)arg0, (int*)&var7);
        func_0202e694(arg0, (int*)&var1);
        return 1;
    }
    return 0;
}
