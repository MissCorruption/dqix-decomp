#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021ab280_2096 = 0x850, Enum_ov017_021ab280_1804 = 0x4fc, Enum_ov017_021ab280_1788 = 0x4ec };
#else
enum { Enum_ov017_021ab280_2096 = 0x830, Enum_ov017_021ab280_1804 = 0x70c, Enum_ov017_021ab280_1788 = 0x6fc };
#endif

#include "Combat/Main/CopyRecord0200fbb4.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_0202ae18(void);
extern "C" void* func_02012fe4(void);

struct Struct_02018300_3;
extern "C" void func_020397cc(struct Struct_02018300_3* arg0, int arg1);

int fix32ReduceAngle0To2Pi(int angle);
int fix32sin(int angle);
int fix32cos(int angle);

struct Struct_ov009_0218aa28 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern "C" int fix32_Atan2(int arg0, int arg1);

struct Struct_02033834_2;
extern "C" void func_02033834(struct Struct_02033834_2* arg0, int arg1);
struct Struct_02033b68;
extern "C" void func_02033b68(struct Struct_02033b68* arg0, int arg1);
struct Struct_02033b58;
extern "C" void func_02033b58(struct Struct_02033b58* arg0, unsigned char arg1);
struct GameResources;
void SetBrightness(GameResources*, int, int);
int IsBrightnessTransitionActive(GameResources*);

extern "C" unsigned char func_02011494(char* arg0, void* arg1);

extern "C" void* func_0200fd0c(GameState* arg0);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void VectorizedMemset(void* dst, int val, int size);
struct Vector3i;
extern "C" void func_ov017_0219e310(unsigned char* arg0, int arg1);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

struct Struct_ov017_021ab280 {
    char unknown_0_[8];
    int unknown_8_, unknown_c_, unknown_10_;
    char unknown_14_[0x20 - 0x14];
    short unknown_20_;
    char unknown_22_[0x30 - 0x22];
    unsigned short unknown_30_;
    char unknown_32_[0x38 - 0x32];
    struct Struct_ov009_0218aa28 unknown_38_[4];
    short unknown_68_;
    short unknown_6a_;
};

struct Struct_ov017_021ab280_2 {
    char unknown_0_[1];
    unsigned char unknown_1_;
    char unknown_2_[8 - 2];
    int unknown_8_;
    int unknown_c_;
    struct Struct_ov017_021ab280* unknown_10_;
    struct Struct_ov009_0218aa28 unknown_14_;
};

// USA: func_ov017_021ab280
extern "C" ARM int func_ov017_021ab280(struct Struct_ov017_021ab280_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    func_0202ae18();
    unsigned char* var1 = (unsigned char*)GetGameResources();
    GameObject* var2 = var0->GetUnknownGameObject();
    void* var3 = func_02012fe4();

    int var4 = arg0->unknown_8_;
    if (var4 == 0) {
        func_020397cc((struct Struct_02018300_3*)var2, 1);
        ((Object3D*)((unsigned char*)var2))->EnableFlag(0x01000080);

        struct Struct_ov009_0218aa28 var5;
        struct Struct_ov009_0218aa28 var6 = *(struct Struct_ov009_0218aa28*)((char*)var2 + 0x44);
        int var7 = fix32ReduceAngle0To2Pi(arg0->unknown_10_->unknown_20_ + (int)0xffffcdc3);
        var5.unknown_0_ = fix32sin(var7);
        var5.unknown_4_ = 0;
        var5.unknown_8_ = fix32cos(var7);
        Vector3fix_Normalize((const Vector3fix*)&var5, (Vector3fix*)&var5);
        Vector3fix_Add((const Vector3fix*)((struct Struct_ov009_0218aa28*)&arg0->unknown_10_->unknown_8_), (const Vector3fix*)&var5, (Vector3fix*)&arg0->unknown_14_);
        Vector3fix_Subtract((const Vector3fix*)&arg0->unknown_14_, (const Vector3fix*)&var6, (Vector3fix*)&var5);
        Vector3fix_Normalize((const Vector3fix*)&var5, (Vector3fix*)&var5);
        int var8 = fix32_Atan2(var5.unknown_0_, var5.unknown_8_);

        func_02033834((struct Struct_02033834_2*)var2, var8);
        func_02033b68((struct Struct_02033b68*)var2, 1);
        SetBrightness((GameResources*)var1, -16, 15);

        arg0->unknown_8_ = arg0->unknown_8_ + 1;
        arg0->unknown_c_ = 0;
    } else if (var4 == 1) {
        int var9 = *((unsigned char*)var3 + Enum_ov017_021ab280_2096);
        if (var9 <= 4) {
            arg0->unknown_8_ = var4 + 1;
            arg0->unknown_c_ = 0;
            func_02033b58((struct Struct_02033b58*)var2, 1);
        }
    } else if (var4 == 2) {
        struct Struct_ov009_0218aa28 var10;
        struct Struct_ov009_0218aa28 var11 = *(struct Struct_ov009_0218aa28*)((char*)var2 + 0x44);
        Vector3fix_Subtract((const Vector3fix*)&arg0->unknown_14_, (const Vector3fix*)&var11, (Vector3fix*)&var10);
        Vector3fix_Length((const Vector3fix*)((int*)&var10));
        Vector3fix_Subtract((const Vector3fix*)&arg0->unknown_14_, (const Vector3fix*)&var11, (Vector3fix*)&var10);
        Vector3fix_Normalize((const Vector3fix*)&var10, (Vector3fix*)&var10);
        int var12 = fix32_Atan2(var10.unknown_0_, var10.unknown_8_);

        func_02033834((struct Struct_02033834_2*)var2, var12);
        func_02033b58((struct Struct_02033b58*)var2, 1);
        *(unsigned short*)((char*)var2 + 0xb2) = 0xa3;

        if (IsBrightnessTransitionActive((GameResources*)var1) == 0) {
            arg0->unknown_8_ = 4;
            arg0->unknown_c_ = 0;
        }
    } else if (var4 == 3) {
        struct Struct_ov009_0218aa28 var13;
        struct Struct_ov009_0218aa28 var14 = *(struct Struct_ov009_0218aa28*)((char*)var2 + 0x44);
        Vector3fix_Subtract((const Vector3fix*)&arg0->unknown_14_, (const Vector3fix*)&var14, (Vector3fix*)&var13);
        Vector3fix_Normalize((const Vector3fix*)&var13, (Vector3fix*)&var13);
        int var15 = fix32_Atan2(var13.unknown_0_, var13.unknown_8_);

        func_02033834((struct Struct_02033834_2*)var2, var15);
        func_02033b58((struct Struct_02033b58*)var2, 1);
        *(unsigned short*)((char*)var2 + 0xb2) = 0xa3;

        if (IsBrightnessTransitionActive((GameResources*)var1) == 0) {
            arg0->unknown_8_ = arg0->unknown_8_ + 1;
            arg0->unknown_c_ = 0;
        }
    } else if (var4 == 4) {
        ((Object3D*)((unsigned char*)var2))->DisableFlag(0x01000080);

        unsigned char var16[4];
        unsigned char var17 = func_02011494((char*)var0, var16);
        for (int var18 = 0; var18 < var17; var18++) {
            GameObject* var19 = var0->GetGameObjectByIndex(var16[var18]);
            if (var19 != 0) {
                ((Object3D*)((unsigned char*)var19))->DisableFlag(0x1000000);
            }
        }

        void* var20 = func_0200fd0c(var0);
        func_020100a8(var0);
        VectorizedMemset(var20, 0, 0x70);
        unsigned char* var21 = (unsigned char*)var20;
        unsigned char var22 = 1;
        var21[4] = var22;
        var21[8] = var22;
        var21[9] = var22;
        int var23 = var22 - 2;
        *(signed char*)(var21 + 0xb) = var23;
        *(int*)(var21 + 0x20) = var23;
        *(int*)(var21 + 0x24) = var23;
        *(int*)(var21 + 0x28) = var23;
        *(int*)(var21 + 0x2c) = var23;
        *(short*)(var21 + 0x1e) = var23;
        var21[0xc] = 0;
        *(short*)(var21 + 0x6c) = var23;

        *(unsigned short*)(var21 + 0) = arg0->unknown_10_->unknown_30_;
        *(Vector3i*)((int*)(var21 + 0x10)) = *(Vector3i const*)((int*)&arg0->unknown_10_->unknown_38_[0]);
        *(short*)(var21 + 0x1c) = arg0->unknown_10_->unknown_68_;
        var21[0xb] = (unsigned char)arg0->unknown_10_->unknown_6a_;
        *(Vector3i*)((int*)(var21 + 0x30)) = *(Vector3i const*)((int*)&arg0->unknown_10_->unknown_38_[0]);
        *(Vector3i*)((int*)(var21 + 0x3c)) = *(Vector3i const*)((int*)&arg0->unknown_10_->unknown_38_[1]);
        *(Vector3i*)((int*)(var21 + 0x48)) = *(Vector3i const*)((int*)&arg0->unknown_10_->unknown_38_[2]);
        *(Vector3i*)((int*)(var21 + 0x54)) = *(Vector3i const*)((int*)&arg0->unknown_10_->unknown_38_[3]);

        var21[0xc] = 1;
        var21[7] = 1;
        func_0200fcfc(var0, var20);

        func_ov017_0219e310(*(unsigned char**)(var1 + 0x3000 + Enum_ov017_021ab280_1804), 0);
        func_020469b4(*(struct Struct_0201bdac_2**)(var1 + 0x3000 + Enum_ov017_021ab280_1788),
                          *(struct Struct_0201bdac**)(var1 + 0x3000 + Enum_ov017_021ab280_1804));

        arg0->unknown_1_ = 1;
    }

    arg0->unknown_c_ = arg0->unknown_c_ + 1;
    return arg0->unknown_c_;
}
