#include <globaldefs.h>
#include "GameState/Field3b0.h"

#if defined(jpn)
enum { Enum_ov005_021586c4_1276 = 0x4f8 };
#else
enum { Enum_ov005_021586c4_1276 = 0x4fc };
#endif

#include <GameState/GameState.h>
#include <Graphics/Vector.h>
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0200b454 func_0200b318
#endif

struct Struct_ov005_0215690c { char unknown_0_[Enum_ov005_021586c4_1276]; int unknown_4fc_; };
struct Struct_ov005_0215690c_2 { char unknown_0_[0x50]; Vector3fix unknown_50_; };
struct Struct_02015ef4;
struct Struct_ov005_0215cc2c { int unknown_0_; int unknown_4_[2]; };
extern "C" Struct_ov005_0215690c* func_ov017_021a193c(int*);
extern "C" Struct_ov005_0215690c_2* func_ov023_021e4e20(Struct_ov005_0215690c*);
extern "C" int func_0202ec84(void*, Struct_02015ef4*, int*, int*);
extern "C" double func_0200b454(double);
extern const Vector3fix data_ov005_0215cc24[8];
extern const Struct_ov005_0215cc2c data_ov005_0215cc2c[8];
extern const unsigned char data_ov005_0215cbf4[8];

// USA: func_ov005_021586c4
extern "C" ARM int func_ov005_021586c4(void*, int arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    void* var1;
    int var2;
    Struct_ov005_0215690c* var3 = func_ov017_021a193c((int*)GetGameResources()->unknown_ptr_array_36fc[3]);
    int var4 = var3->unknown_4fc_;
    if (arg1 > 0 && arg1 < 128) {
        int var5[8];
        int var6[8];
        var1 = func_020100bc(var0);
        Matrix4x3 var7;
        Vector3fix var8[8];
        var7 = RotationMatrixY(func_ov023_021e4e20(var3)->unknown_50_.y);
        for (var2 = 0; var2 < 8; var2++) {
            Mat4x3_ApplyToVector(&data_ov005_0215cc24[var2], &var7, &var8[var2]);
            func_0202ec84(var1, (Struct_02015ef4*)&var8[var2], &var5[var2], &var6[var2]);
        }
        func_0200ff1c(var0, var4);
        int var9 = 0;
        float var10[8];
        int var11[8];
        for (int var12 = 0; var12 < 8; var12++) {
            var10[var12] = 20.0f;
            int var13 = arg2 - var6[var12];
            int var14 = arg1 - var5[var12];
            if ((float)func_0200b454(var14 * var14 + var13 * var13) < var10[var12]) var11[var9++] = var12;
        }
        if (var9 > 0) {
            int var15 = var11[0];
            int var16 = data_ov005_0215cc2c[var15].unknown_0_;
            for (int var17 = 1; var17 < var9; var17++) {
                int var18 = var11[var17];
                if (var16 < data_ov005_0215cc2c[var18].unknown_0_) {
                    var15 = var18;
                    var16 = data_ov005_0215cc2c[var18].unknown_0_;
                }
            }
            return data_ov005_0215cbf4[var15];
        }
    }
    return 255;
}
