#include <globaldefs.h>
#include "Combat/FieldActorState.h"
#include "NitroSDK/Matrix.h"

#if defined(jpn)
enum { Enum_02076fdc_24 = 0x14 };
#else
enum { Enum_02076fdc_24 = 0x18 };
#endif

struct Struct_020fdd44;
struct Struct_0201a300_11;
struct Struct_02033834_2;
struct Struct_02033b68;
struct Struct_0202c1a4;

struct Struct_02076fdc {
    unsigned char unknown_0_;
    char unknown_1_[3];
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
};

extern "C" struct Struct_020fdd44* func_02027ca4();
extern "C" struct Struct_020fdd44* func_02028bd0(struct Struct_020fdd44* arg0, int arg1);
extern "C" struct Struct_02076fdc* func_020283c0(struct Struct_0201a300_11* arg0, int arg1);

extern "C" int fix32_Atan2(int arg0, int arg1);
extern "C" void func_02033834(struct Struct_02033834_2* arg0, int arg1);
extern "C" void func_02033b68(struct Struct_02033b68* arg0, int arg1);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" int _s32_div_f(int a, int b);
extern "C" void func_ov017_021c9168(int arg0, int arg1, int arg2, int arg3,
        Vector3fix arg4, Vector3fix arg5, int arg6);

// USA: func_02076fdc
extern "C" ARM int func_02076fdc(Struct_02076a8c* arg0) {
    struct Struct_020fdd44* var0 = func_02027ca4();
    struct Struct_020fdd44* var1 =
        func_02028bd0(var0, arg0->unknown_0_.unknown_0_.unknown_0_.GetField06());
    if (var1 == 0) {
        return 0;
    }
    struct Struct_0201a300_11* var2 = (struct Struct_0201a300_11*)((char*)var1 + Enum_02076fdc_24);
    if (var2 == 0) {
        return 0;
    }
    struct Struct_02076fdc* var3 = func_020283c0(var2, arg0->unknown_164_);
    if (var3 == 0) {
        return 0;
    }
    arg0->unknown_158_.x = var3->unknown_4_ << 0xc;
    arg0->unknown_158_.y = var3->unknown_6_ << 0xc;
    arg0->unknown_158_.z = var3->unknown_8_ << 0xc;
    Vector3fix var4;
    Vector3fix_Subtract(&arg0->unknown_158_, &arg0->unknown_0_.unknown_0_.unknown_0_.position_, &var4);
    if (Vector3fix_Length(&var4) < 0x1000) {
        return 0;
    }
    Vector3fix_Normalize(&var4, &var4);
    func_02033834((struct Struct_02033834_2*)arg0, fix32_Atan2(var4.x, var4.z));
    arg0->unknown_17d_ |= 0x40;
    switch (arg0->unknown_0_.unknown_139_) {
    case 0:
        arg0->unknown_0_.unknown_0_.unknown_b4_ = 0;
        arg0->unknown_0_.unknown_0_.unknown_b2_ = 0;
        break;
    case 1:
        arg0->unknown_0_.unknown_0_.unknown_b4_ = 0x9a;
        arg0->unknown_0_.unknown_0_.unknown_b2_ = 0x9a;
        break;
    case 2:
        arg0->unknown_0_.unknown_0_.unknown_b4_ = 0xe6;
        arg0->unknown_0_.unknown_0_.unknown_b2_ = 0xe6;
        break;
    case 3:
        arg0->unknown_0_.unknown_0_.unknown_b4_ = 0x1c2;
        arg0->unknown_0_.unknown_0_.unknown_b2_ = 0x1c2;
        break;
    }
    func_02033b68((struct Struct_02033b68*)arg0, 1);
    if (arg0->unknown_0_.unknown_134_ == 4 || arg0->unknown_0_.unknown_134_ == 5 || arg0->unknown_0_.unknown_134_ == 6) {
        arg0->unknown_0_.unknown_0_.unknown_0_.DisableFlag(0x80);
    } else {
        arg0->unknown_0_.unknown_0_.unknown_0_.EnableFlag(0x80);
    }
    void* var5 = func_0202ae18();
    if (func_0202b7d8((int*)var5)) {
        if (func_0202c1a4((struct Struct_0202c1a4*)var5) == 0) {
            int var6 = arg0->unknown_0_.unknown_0_.unknown_0_.GetField06();
            int var7 = arg0->unknown_0_.unknown_0_.unknown_0_.unknown_4_;
            var7 -= 0x70;
            int var8 = arg0->unknown_0_.unknown_0_.unknown_0_.unknown_2_;
            Vector3fix var9 = arg0->unknown_0_.unknown_0_.unknown_0_.position_;
            Vector3fix var10 = arg0->unknown_0_.unknown_0_.unknown_0_.rotation_;
            int var11 = var7 % 0xc;
            if (var11 >= 0 && var11 < 0xc) {
                func_ov017_021c9168(var6, var11, var8, var3->unknown_0_, var9, var10, -1);
            }
        }
    }
    return 1;
}
