#include <globaldefs.h>
#include <GameState/GameState.h>
#include <NitroSDK/NSBXX/RenderConfig.h>

struct Struct_02059720;
struct Struct_020546c8;
struct Struct_02059a54 {
    char unknown_0_[5];
    unsigned char unknown_5_;
};
struct Struct_02059a54_2 {
    int unknown_0_;
    unsigned int unknown_4_;
    char unknown_8_[8];
    Vector3fix unknown_10_;
    char unknown_1c_[0xc];
    Struct_020546c8* unknown_28_;
    unsigned char unknown_2c_;
    char unknown_2d_[0x23];
    float unknown_50_, unknown_54_;
    char unknown_58_[0x14];
    float unknown_6c_, unknown_70_, unknown_74_, unknown_78_;
    Object3D unknown_7c_;
    int unknown_128_;
    float unknown_12c_, unknown_130_, unknown_134_, unknown_138_, unknown_13c_, unknown_140_;
};
extern "C" int func_02059a2c(Struct_02059720*);
extern "C" Struct_02059a54* func_02055108(Struct_020546c8*);
extern "C" void* func_020100bc(GameState*);
extern "C" void* func_0202ed74(void*);
extern "C" void func_020ca528(void*, const void*);
extern "C" void NSBXX_Model_SetPolygonID(void*, int);
extern int data_0210a0cc;
extern Vector3fix data_020e7da4;
static inline NSBXXInternalModel* inline_02059a54(Struct_02059a54_2* arg0) { return arg0->unknown_7c_.pModel_->rawInternalModel_; }

// USA: func_02059a54
extern "C" ARM void func_02059a54(Struct_02059a54_2* arg0) {
    if (arg0->unknown_2c_ && !func_02059a2c((Struct_02059720*)arg0)) {
        Struct_02059a54* var0 = func_02055108(arg0->unknown_28_);
        int var1;
        int var2;
        unsigned int var3;
        var3 = arg0->unknown_4_;
        var1 = arg0->unknown_10_.x + (int)(4096.0f * ((float)var3 * (arg0->unknown_6c_ * arg0->unknown_78_)));
        var2 = arg0->unknown_10_.y + (int)(4096.0f * ((float)var3 * (arg0->unknown_70_ * arg0->unknown_78_)));
        int var4 = arg0->unknown_10_.z + (int)(4096.0f * ((float)var3 * (arg0->unknown_74_ * arg0->unknown_78_)));
        arg0->unknown_7c_.position_.x = var1;
        arg0->unknown_7c_.position_.y = var2;
        arg0->unknown_7c_.position_.z = var4;
        if (!var0->unknown_5_) {
            NSBXXInternalModel* var5 = inline_02059a54(arg0);
            int var6 = (int)arg0->unknown_134_;
            int var7 = (int)arg0->unknown_12c_;
            int var8 = (int)arg0->unknown_130_;
            NSBXX_Model_SetDiffuseReflectionColor(var5, (unsigned short)(var7 | (var8 << 5) | (var6 << 10)));
            NSBXX_Model_SetPolygonID(arg0->unknown_7c_.pModel_->rawInternalModel_, arg0->unknown_128_);
            Vector3fix var9 = arg0->unknown_7c_.position_;
            RenderConfig::SetObjectPosition(&var9);
            void* var10 = func_020100bc(GameState::GetInstance());
            if (var10) {
                func_020ca528(func_0202ed74(var10), &data_0210a0cc);
                data_0210a010.flags &= ~0xa4;
            }
            Vector3fix var11 = data_020e7da4;
            var11.x = (int)((float)(int)(4096.0f * arg0->unknown_13c_) * arg0->unknown_50_);
            var11.y = (int)((float)(int)(4096.0f * arg0->unknown_140_) * arg0->unknown_54_);
            RenderConfig::SetObjectScale(&var11);
            arg0->unknown_7c_.SetInheritedAlpha((int)arg0->unknown_138_);
            arg0->unknown_7c_.DrawSimple(true);
        } else {
            arg0->unknown_7c_.Draw(true);
        }
    }
}
