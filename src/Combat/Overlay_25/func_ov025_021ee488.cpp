#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

extern "C" float _fflt(int v);
extern "C" float _fdiv(float arg0, float arg1);
extern "C" int _ffix(float v);

extern "C" void Mat4x4_Multiply(const Matrix4x4* arg0, const Matrix4x4* arg1, Matrix4x4* arg2);

extern const Matrix4x4 data_ov025_021ef180;
extern const Matrix4x4 data_ov025_021ef140;
extern const Matrix4x4 data_ov025_021ef100;
extern const Matrix4x4 data_ov025_021ef0c0;
extern const Matrix4x4 data_ov025_021ef080;
extern const Matrix4x4 data_ov025_021ef1c0;

union Struct_ov025_021ee488 { struct { int unknown_0_, unknown_4_, unknown_8_; }; int unknown1_0_[3]; };

inline int inline_ov025_021ee488(int arg0, int arg1) { return FIX32_MULTIPLY(arg0, arg1); }

// USA: func_ov025_021ee488
extern "C" ARM void func_ov025_021ee488(Struct_ov025_021ee488* arg0, const Struct_ov025_021ee488* arg1, int arg2, int arg3) {
    int var0 = _ffix(_fdiv(_fflt(arg3), 4096.0f));
    int var1;
    int var2;
    arg3 -= var0 << 12;
    var1 = inline_ov025_021ee488(arg3, arg3);
    var2 = inline_ov025_021ee488(var1, arg3);
    Struct_ov025_021ee488 var3;

    if (var0 == 0) {
        Matrix4x4 var4 = data_ov025_021ef180;
        Matrix4x4 var5 = data_ov025_021ef140;
        var5.rows[1].x = arg1[var0].unknown_0_;
        var5.rows[1].y = arg1[var0].unknown_4_;
        var5.rows[1].z = arg1[var0].unknown_8_;
        var5.rows[2].x = arg1[var0 + 1].unknown_0_;
        var5.rows[2].y = arg1[var0 + 1].unknown_4_;
        var5.rows[2].z = arg1[var0 + 1].unknown_8_;
        var5.rows[3].x = arg1[var0 + 2].unknown_0_;
        var5.rows[3].y = arg1[var0 + 2].unknown_4_;
        var5.rows[3].z = arg1[var0 + 2].unknown_8_;
        Matrix4x4 var6;
        Mat4x4_Multiply(&var4, &var5, &var6);
        var3.unknown_0_ = (inline_ov025_021ee488(var2, var6.rows[0].x) + inline_ov025_021ee488(var1, var6.rows[1].x) + inline_ov025_021ee488(arg3, var6.rows[2].x) + var6.rows[3].x);
        var3.unknown_4_ = (inline_ov025_021ee488(var2, var6.rows[0].y) + inline_ov025_021ee488(var1, var6.rows[1].y) + inline_ov025_021ee488(arg3, var6.rows[2].y) + var6.rows[3].y);
        var3.unknown_8_ = (inline_ov025_021ee488(var2, var6.rows[0].z) + inline_ov025_021ee488(var1, var6.rows[1].z) + inline_ov025_021ee488(arg3, var6.rows[2].z) + var6.rows[3].z);
        var3.unknown_0_ /= 2;
        var3.unknown_4_ /= 2;
        var3.unknown_8_ /= 2;
    } else if (var0 == arg2 - 2) {
        Matrix4x4 var7 = data_ov025_021ef100;
        Matrix4x4 var8 = data_ov025_021ef0c0;
        var8.rows[0].x = arg1[var0 - 1].unknown_0_;
        var8.rows[0].y = arg1[var0 - 1].unknown_4_;
        var8.rows[0].z = arg1[var0 - 1].unknown_8_;
        var8.rows[1].x = arg1[var0].unknown_0_;
        var8.rows[1].y = arg1[var0].unknown_4_;
        var8.rows[1].z = arg1[var0].unknown_8_;
        var8.rows[2].x = arg1[var0 + 1].unknown_0_;
        var8.rows[2].y = arg1[var0 + 1].unknown_4_;
        var8.rows[2].z = arg1[var0 + 1].unknown_8_;
        Matrix4x4 var9;
        Mat4x4_Multiply(&var7, &var8, &var9);
        var3.unknown_0_ = (inline_ov025_021ee488(var2, var9.rows[0].x) + inline_ov025_021ee488(var1, var9.rows[1].x) + inline_ov025_021ee488(arg3, var9.rows[2].x) + var9.rows[3].x);
        var3.unknown_4_ = (inline_ov025_021ee488(var2, var9.rows[0].y) + inline_ov025_021ee488(var1, var9.rows[1].y) + inline_ov025_021ee488(arg3, var9.rows[2].y) + var9.rows[3].y);
        var3.unknown_8_ = (inline_ov025_021ee488(var2, var9.rows[0].z) + inline_ov025_021ee488(var1, var9.rows[1].z) + inline_ov025_021ee488(arg3, var9.rows[2].z) + var9.rows[3].z);
        var3.unknown_0_ /= 2;
        var3.unknown_4_ /= 2;
        var3.unknown_8_ /= 2;
    } else {
        Matrix4x4 var10 = data_ov025_021ef080;
        Matrix4x4 var11 = data_ov025_021ef1c0;
        var11.rows[0].x = arg1[var0 - 1].unknown_0_;
        var11.rows[0].y = arg1[var0 - 1].unknown_4_;
        var11.rows[0].z = arg1[var0 - 1].unknown_8_;
        var11.rows[1].x = arg1[var0].unknown_0_;
        var11.rows[1].y = arg1[var0].unknown_4_;
        var11.rows[1].z = arg1[var0].unknown_8_;
        var11.rows[2].x = arg1[var0 + 1].unknown_0_;
        var11.rows[2].y = arg1[var0 + 1].unknown_4_;
        var11.rows[2].z = arg1[var0 + 1].unknown_8_;
        var11.rows[3].x = arg1[var0 + 2].unknown_0_;
        var11.rows[3].y = arg1[var0 + 2].unknown_4_;
        var11.rows[3].z = arg1[var0 + 2].unknown_8_;
        Matrix4x4 var12;
        Mat4x4_Multiply(&var10, &var11, &var12);
        var3.unknown_0_ = (inline_ov025_021ee488(var2, var12.rows[0].x) + inline_ov025_021ee488(var1, var12.rows[1].x) + inline_ov025_021ee488(arg3, var12.rows[2].x) + var12.rows[3].x);
        var3.unknown_4_ = (inline_ov025_021ee488(var2, var12.rows[0].y) + inline_ov025_021ee488(var1, var12.rows[1].y) + inline_ov025_021ee488(arg3, var12.rows[2].y) + var12.rows[3].y);
        var3.unknown_8_ = (inline_ov025_021ee488(var2, var12.rows[0].z) + inline_ov025_021ee488(var1, var12.rows[1].z) + inline_ov025_021ee488(arg3, var12.rows[2].z) + var12.rows[3].z);
        var3.unknown_0_ /= 2;
        var3.unknown_4_ /= 2;
        var3.unknown_8_ /= 2;
    }

    COPY_ARRAY(arg0->unknown1_0_, var3.unknown1_0_);
}
