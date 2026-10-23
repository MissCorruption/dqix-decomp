#include <globaldefs.h>

struct Struct_ov031_022489c4 { unsigned short unknown_0_, unknown_2_; };
struct Struct_ov031_022493b8 { unsigned short unknown_0_, unknown_2_, unknown_4_, unknown_6_; };
extern Struct_ov031_022493b8 data_ov031_022493b8;
extern "C" void func_ov031_0223cb34(Struct_ov031_022489c4*, Struct_ov031_022489c4*, Struct_ov031_022493b8*);
extern "C" void func_ov031_02236878(int);

struct Struct_ov031_022242ec {
    char unknown_0_[0x11e];
    signed char unknown_11e_;
    char unknown_11f_[4];
    unsigned char unknown_123_;
    unsigned char unknown_124_;
};
extern Struct_ov031_022242ec* data_ov031_02250bfc;
extern Struct_ov031_022489c4 data_ov031_02248a0c[47];
extern Struct_ov031_022489c4 data_ov031_022489c8;
extern Struct_ov031_022489c4 data_ov031_022489f4[4];
extern Struct_ov031_022489c4 data_ov031_022489e4[4];
extern int data_ov031_0224b43c[4];
extern Struct_ov031_022489c4 data_ov031_022489dc[2];
extern Struct_ov031_022489c4 data_ov031_022489c4;
extern "C" int func_ov031_0223d49c(Struct_ov031_022493b8*);

// USA: func_ov031_022242ec
extern "C" ARM void func_ov031_022242ec() {
    Struct_ov031_022493b8 var0;
    if (!func_ov031_0223d49c(&data_ov031_022493b8)) return;
    data_ov031_02250bfc->unknown_11e_ = -1;
    {
        Struct_ov031_022489c4* var1;
        Struct_ov031_022489c4* var2;
        int var3;
        var2 = data_ov031_02248a0c;
        var1 = &data_ov031_022489c8;
        var3 = 0;
        do {
            func_ov031_0223cb34(var2, var1, &var0);
            if (func_ov031_0223d49c(&var0)) {
                if (!data_ov031_02250bfc->unknown_124_) {
                    func_ov031_02236878(9);
                    return;
                }
                func_ov031_02236878(0);
                data_ov031_02250bfc->unknown_11e_ = var3;
                return;
            }
            ++var3; ++var2;
        } while (var3 < 47);
    }
    {
        Struct_ov031_022489c4* var4;
        Struct_ov031_022489c4* var5;
        int var6;
        var4 = data_ov031_022489f4;
        var5 = data_ov031_022489e4;
        var6 = 0;
        do {
            func_ov031_0223cb34(var5, var4, &var0);
            if (func_ov031_0223d49c(&var0)) {
                if ((var6 == 3 && !data_ov031_02250bfc->unknown_123_) || (var6 == 2 && !data_ov031_02250bfc->unknown_124_)) {
                    func_ov031_02236878(9);
                    return;
                }
                func_ov031_02236878(data_ov031_0224b43c[var6]);
                data_ov031_02250bfc->unknown_11e_ = var6 + 47;
                return;
            }
            ++var6; ++var4; ++var5;
        } while (var6 < 4);
    }
    {
        Struct_ov031_022489c4* var7;
        Struct_ov031_022489c4* var8;
        int var9;
        var8 = data_ov031_022489dc;
        var7 = &data_ov031_022489c4;
        var9 = 0;
        do {
            func_ov031_0223cb34(var8, var7, &var0);
            if (func_ov031_0223d49c(&var0)) {
                func_ov031_02236878(0);
                data_ov031_02250bfc->unknown_11e_ = var9 + 51;
                return;
            }
            ++var9; ++var8;
        } while (var9 < 2);
    }
}
