#if defined(jpn)
#define R(j,u) (j)
#define data_ov001_02164ca4 data_ov001_02166270
#define data_ov028_021d9aa0 data_ov028_021da400
#define func_ov014_02188330 func_ov014_02189234
#define func_ov014_0218854c func_ov014_0218942c
#define func_ov014_021885bc func_ov014_0218948c
#define func_ov015_02191f04 func_ov015_02192a48
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

#include <NitroSDK/Matrix.h>

struct Struct_ov001_02159ef0 {
    int unknown_0_;
};

struct Struct_ov001_0215a134 {
    struct Struct_ov001_02159ef0* unknown_0_;
    struct Struct_ov001_02159ef0* unknown_4_;
};

struct Struct_ov001_0215a134_2 {
    void* unknown_0_;
    int unknown_4_;
    struct Struct_ov001_0215a134 unknown_8_[8];
    char unknown_48_[0x28];
    int unknown_70_;
    Vector3fix unknown_74_;
    Vector3fix unknown_80_;
    float unknown_8c_;
    int unknown_90_;
};

struct Struct_020130a8;

typedef int (*Type_020130a8)(struct Struct_ov001_02159ef0* node, struct Struct_ov001_0215a134_2* actor);

extern struct Struct_020130a8* data_ov001_02165884;
extern Type_020130a8 data_ov001_02164ca4[];

extern "C" int func_ov001_02164418(struct Struct_020130a8* arg0, int arg1, Vector3fix* arg2);
extern "C" int func_ov001_021644c8(struct Struct_020130a8* arg0, int arg1, Vector3fix* arg2);
extern "C" int func_ov001_0216427c(struct Struct_020130a8* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" int func_ov001_02164320(struct Struct_020130a8* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" int func_ov001_02164908(struct Struct_020130a8* arg0, int arg1, int arg2);
extern "C" int func_ov001_021649d4(struct Struct_020130a8* arg0, int arg1, int arg2);
extern "C" void func_ov001_02159d9c(struct Struct_ov001_0215a134_2* arg0);
extern "C" struct Struct_ov001_02159ef0* func_ov001_02159ef0(void* arg0, struct Struct_ov001_02159ef0* arg1);

// USA: func_ov001_0215a134
extern "C" ARM void func_ov001_0215a134(struct Struct_ov001_0215a134_2* arg0) {
    struct Struct_ov001_02159ef0* var0;
    int var1;
    struct Struct_ov001_02159ef0** var2;
    struct Struct_ov001_02159ef0** var3;

    if (arg0->unknown_70_ <= -1) {
        return;
    }
    if (func_ov001_02164418(data_ov001_02165884, arg0->unknown_70_, &arg0->unknown_74_) == 0) {
        func_ov001_02159d9c(arg0);
        return;
    }
    func_ov001_021644c8(data_ov001_02165884, arg0->unknown_70_, &arg0->unknown_80_);

    for (var1 = 0; var1 < 8; var1++) {
        switch (var1) {
        case 0:
            var2 = &arg0->unknown_8_[0].unknown_0_;
            var3 = &arg0->unknown_8_[0].unknown_4_;
            break;
        case 1:
            var2 = &arg0->unknown_8_[1].unknown_0_;
            var3 = &arg0->unknown_8_[1].unknown_4_;
            break;
        case 2:
            var2 = &arg0->unknown_8_[2].unknown_0_;
            var3 = &arg0->unknown_8_[2].unknown_4_;
            break;
        case 3:
            var2 = &arg0->unknown_8_[3].unknown_0_;
            var3 = &arg0->unknown_8_[3].unknown_4_;
            break;
        case 4:
            var2 = &arg0->unknown_8_[4].unknown_0_;
            var3 = &arg0->unknown_8_[4].unknown_4_;
            break;
        case 5:
            var2 = &arg0->unknown_8_[5].unknown_0_;
            var3 = &arg0->unknown_8_[5].unknown_4_;
            break;
        case 6:
            var2 = &arg0->unknown_8_[6].unknown_0_;
            var3 = &arg0->unknown_8_[6].unknown_4_;
            break;
        case 7:
            var2 = &arg0->unknown_8_[7].unknown_0_;
            var3 = &arg0->unknown_8_[7].unknown_4_;
            break;
        }

        var0 = *var2;
        while (var0 != NULL) {
            if (var0->unknown_0_ > 0 && var0->unknown_0_ < 0x1a) {
                if (data_ov001_02164ca4[var0->unknown_0_](var0, arg0) != 0) {
                    break;
                }
            } else {
                var0 = NULL;
                break;
            }
            var0 = func_ov001_02159ef0(arg0, var0);
        }
        *var2 = var0;
        if (var0 == NULL) {
            *var3 = NULL;
        }
    }

    Vector3fix var4 = arg0->unknown_74_;
    func_ov001_0216427c(data_ov001_02165884, arg0->unknown_70_, var4.x, var4.y, var4.z);
    Vector3fix var5 = arg0->unknown_80_;
    func_ov001_02164320(data_ov001_02165884, arg0->unknown_70_, var5.x, var5.y, var5.z);
    func_ov001_02164908(data_ov001_02165884, arg0->unknown_70_, arg0->unknown_8c_);
    func_ov001_021649d4(data_ov001_02165884, arg0->unknown_70_, arg0->unknown_90_);
}
