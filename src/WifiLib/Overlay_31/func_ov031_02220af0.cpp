#include <globaldefs.h>

struct Struct_ov031_02207204 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned int unknown_4_;
};
struct Struct_ov031_0224f670_17 {
    char unknown_0_;
    char unknown_1_[0xf];
    int unknown_10_;
    int unknown_14_;
    char unknown_18_[4];
    int unknown_1c_;
    char unknown_20_[0x14];
    int unknown_34_;
    int unknown_38_;
};
struct Struct_ov031_0224b114_3 {
    char unknown_0_[0xc];
    unsigned int unknown_c_;
};
struct Struct_ov031_0224f8c4 {
    unsigned int unknown_0_[0x95];
};
struct Struct_ov031_0224fb40 {
    unsigned char unknown_0_[8];
};
struct Struct_ov031_0224f9b0 {
    char unknown_0_[0x14];
    char unknown_14_;
};

extern Struct_ov031_0224f670_17 data_ov031_0224f670;
namespace DuplicatePool {
    extern "C" Struct_ov031_0224f670_17 data_ov031_0224f670;
}
extern Struct_ov031_0224b114_3 data_ov031_0224b114;
extern unsigned char data_ov031_0224fb30[0x10];
extern unsigned char data_ov031_022503a4[0x800];
extern unsigned char data_ov031_0224f6c0[0x30];
extern unsigned char data_ov031_0224fba4[];
extern Struct_ov031_0224fb40 data_ov031_0224fb40;
extern unsigned char data_ov031_0224fb48[0x10];
extern Struct_ov031_0224f8c4 data_ov031_0224f8c4;
extern Struct_ov031_0224f9b0 data_ov031_0224f9b0;

void SleepCurrentContext(unsigned int milliseconds);
extern "C" ARM int func_ov031_022071d8(int arg0, int arg1);
extern "C" int func_ov031_02207204(void* arg0, struct Struct_ov031_02207204* arg1);
extern "C" int func_ov031_0221fee4();
extern "C" int func_ov031_0221fb90();
extern "C" void func_ov031_02222af0();
extern "C" unsigned int func_ov031_02222870();
extern "C" int func_ov031_02207434(int arg0);
extern "C" int func_ov031_022205e4(void* arg0, Struct_ov031_02207204* arg1);
extern "C" int func_ov031_022072d0(int arg0, void* arg1, int arg2, int arg3, Struct_ov031_02207204* arg4);
extern "C" int func_ov031_02220418(void* arg0, void* arg1);
extern "C" int func_ov031_0222053c(void* arg0);
extern "C" void func_ov031_022201cc(int arg0, Struct_ov031_02207204* arg1, void* arg2, int arg3);
extern "C" int func_ov031_022204ec(void* arg0, int arg1, void* arg2, void* arg3);
extern "C" Struct_ov031_0224fb40* func_ov031_02220298(void* arg0, int* arg1, int* arg2);
extern "C" void func_ov031_02222848(unsigned char* arg0, void* arg1, unsigned int arg2);
extern "C" int func_ov031_022203f0(void* arg0, int arg1, const void* arg2, int arg3);
extern "C" int func_ov031_022202cc(void* arg0, int arg1, void* arg2, int arg3, const void* arg4);
extern "C" int func_ov031_022206e0(void* arg0);
extern "C" int func_ov031_0221f994();
extern "C" int func_ov031_02220968();

// USA: func_ov031_02220af0
extern "C" THUMB int func_ov031_02220af0() {
    Struct_ov031_02207204 var0;
    Struct_ov031_02207204 var1;
    int var2 = 0;
    int var3 = -5;
    unsigned int var4 = 0;
    int var5 = 0;
    int var6 = 0;
    data_ov031_0224f670.unknown_1c_ = 1;
    while (!var6 && !data_ov031_0224f670.unknown_10_) {
        SleepCurrentContext(500);
        switch (data_ov031_0224f670.unknown_1c_) {
        case 1:
            var3 = func_ov031_0221fee4();
            if (var3 != 1) {
                var6 = 1;
                break;
            }
            data_ov031_0224f670.unknown_38_ = 3;
            func_ov031_02222af0();
            data_ov031_0224f670.unknown_1c_ = 2;
            break;
        case 2:
            var3 = func_ov031_0221fb90();
            if (var3 != 1) {
                var6 = 1;
                break;
            }
            data_ov031_0224f670.unknown_1c_ = 3;
            break;
        case 3: {
            typedef int (*Type_ov031_02220af0_2)(int, int, int);
            var2 = ((Type_ov031_02220af0_2)func_ov031_022071d8)(2, 2, 0);
            if (var2 < 0) {
                var3 = -2;
                var6 = 1;
                break;
            }
            __builtin__clear(&var0, sizeof(var0));
            var0.unknown_0_ = 8;
            var0.unknown_1_ = 2;
            var0.unknown_2_ = 0x1e6;
            var0.unknown_4_ = 0;
            var3 = func_ov031_02207204((void*)var2, &var0);
            if (var3 < 0) {
                var3 = -2;
                var6 = 1;
                break;
            }
            data_ov031_0224f670.unknown_1c_ = 4;
            break;
        }
        case 4:
            if (func_ov031_02222870() >= data_ov031_0224b114.unknown_c_) {
                func_ov031_02207434(var2);
                var3 = -3;
                var6 = 1;
                break;
            }
            var1.unknown_0_ = 8;
            func_ov031_022205e4(data_ov031_0224fb30, &var1);
            if (func_ov031_022072d0(var2, data_ov031_022503a4, 0x800, 4, &var1) > 0 &&
                func_ov031_02220418(data_ov031_022503a4, data_ov031_0224f6c0) != 0) {
                data_ov031_0224b114.unknown_c_ = func_ov031_02222870() + 30000;
                data_ov031_0224f670.unknown_1c_ = 5;
                data_ov031_0224f670.unknown_38_ = 4;
                func_ov031_02222af0();
            }
            break;
        case 5: {
            int var7 = func_ov031_0222053c(data_ov031_022503a4);
            data_ov031_0224f670.unknown_14_ = var7;
            func_ov031_022201cc(var2, &var1, data_ov031_022503a4, var7);
            var4 = func_ov031_02222870();
            data_ov031_0224f670.unknown_1c_ = 6;
            break;
        }
        case 6:
            if (func_ov031_02222870() >= data_ov031_0224b114.unknown_c_) {
                func_ov031_02207434(var2);
                var3 = -4;
                var6 = 1;
                break;
            }
            if (func_ov031_022072d0(var2, data_ov031_022503a4, 0x800, 4, &var1) > 0 &&
                func_ov031_022204ec(data_ov031_022503a4, 3, data_ov031_0224fba4, data_ov031_0224fb30) != 0) {
                int var8;
                int var9;
                const Struct_ov031_0224fb40* var10 = func_ov031_02220298(data_ov031_0224fba4, &var8, &var9);
                if (var8 == 0x101) {
                    unsigned int var11 = func_ov031_02222870();
                    data_ov031_0224fb40 = *var10;
                    func_ov031_02222848(data_ov031_0224fb48, &var11, 4);
                    var5 = 0;
                    data_ov031_0224f670.unknown_1c_ = 7;
                    data_ov031_0224f670.unknown_38_ = 5;
                    data_ov031_0224b114.unknown_c_ = -1;
                    func_ov031_02222af0();
                } else if (var8 == 0x102) {
                    break;
                }
            } else if (func_ov031_02222870() >= var4 + 1000) {
                data_ov031_0224f670.unknown_1c_ = 5;
            }
            break;
        case 7: {
            data_ov031_0224f670.unknown_34_ = func_ov031_022203f0(data_ov031_0224fba4, 0x102, data_ov031_0224fb48, 8);
            int var12 = func_ov031_022202cc(data_ov031_022503a4, 4, data_ov031_0224fba4, data_ov031_0224f670.unknown_34_, data_ov031_0224fb30);
            data_ov031_0224f670.unknown_14_ = var12;
            func_ov031_022201cc(var2, &var1, data_ov031_022503a4, var12);
            var4 = func_ov031_02222870();
            __builtin__clear(&data_ov031_0224f8c4, sizeof(data_ov031_0224f8c4));
            data_ov031_0224f670.unknown_1c_ = 8;
            break;
        }
        case 8:
            if (func_ov031_022072d0(var2, data_ov031_022503a4, 0x800, 4, &var1) > 0 &&
                (data_ov031_0224f670.unknown_34_ = func_ov031_022204ec(data_ov031_022503a4, 5, data_ov031_0224fba4, &data_ov031_0224fb40)) != 0 &&
                func_ov031_022206e0(data_ov031_0224fba4) != 0) {
                if (data_ov031_0224f9b0.unknown_14_) data_ov031_0224f670.unknown_0_ = 1;
                else data_ov031_0224f670.unknown_0_ = 0;
                var5 = 0;
                data_ov031_0224f670.unknown_1c_ = 9;
            } else if (func_ov031_02222870() >= var4 + 1000) {
                if (++var5 >= 10) {
                    func_ov031_02207434(var2);
                    var3 = -2;
                    var6 = 1;
                } else {
                    data_ov031_0224f670.unknown_1c_ = 7;
                }
            }
            break;
        case 9:
            data_ov031_0224f670.unknown_34_ = func_ov031_022203f0(data_ov031_0224fba4, 0x301, &DuplicatePool::data_ov031_0224f670.unknown_0_, 1);
            data_ov031_0224f670.unknown_14_ = func_ov031_022202cc(data_ov031_022503a4, 6, data_ov031_0224fba4, data_ov031_0224f670.unknown_34_, &data_ov031_0224fb40);
            if (func_ov031_0221f994() != 7) {
                var4 = func_ov031_02222870() + 1000;
                var5 = 10;
                data_ov031_0224f670.unknown_1c_ = 10;
            } else {
                func_ov031_022201cc(var2, &var1, data_ov031_022503a4, data_ov031_0224f670.unknown_14_);
                var4 = func_ov031_02222870();
                data_ov031_0224f670.unknown_1c_ = 10;
            }
            break;
        case 10:
            if (func_ov031_02222870() >= var4 + 1000) {
                if (++var5 >= 10) {
                    var6 = 1;
                    var3 = func_ov031_02220968();
                } else {
                    data_ov031_0224f670.unknown_1c_ = 9;
                }
            }
            break;
        }
    }
    if (var2 != 0) func_ov031_02207434(var2);
    if (data_ov031_0224f670.unknown_10_) var3 = -8;
    return var3;
}
