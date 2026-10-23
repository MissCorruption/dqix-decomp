#include <globaldefs.h>
#include "GameState/GameState.h"
#include "World/Zone3D.h"
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Brightness.h"
#include "Combat/Main/CopyRecord0200fbb4.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_ov009_0218aa28 { int unknown_0_, unknown_4_, unknown_8_; };
struct Struct_02000c9c_56 { Vector3fix unknown_0_, unknown_c_; };
struct Struct_02046b38;
struct Struct_02046b38_2;
struct Struct_02015438;
struct Struct_0201bdac_2;
struct Struct_0201bdac;
struct Struct_ov017_0219ca88_2 {
    int unknown_0_;
    Struct_02000c9c_56 unknown_4_;
    int unknown_1c_;
    Vector3fix unknown_20_;
    Vector3fix unknown_2c_, unknown_38_, unknown_44_;
    short unknown_50_, unknown_52_;
    int unknown_54_;
    Vector3fix unknown_58_;
    unsigned char unknown_64_[8];
    int unknown_6c_;
};
#if defined(jpn)
enum { Enum_ov017_0219ca88_396 = 0x180 };
#else
enum { Enum_ov017_0219ca88_396 = 0x18c };
#endif
struct Struct_ov017_0219ca88_3 { unsigned char unknown_0_, unknown_1_; unsigned short unknown_2_; unsigned char unknown_4_; Struct_ov017_0219ca88_2* unknown_8_; int unknown_c_; unsigned short unknown_10_, unknown_12_; };
struct Struct_ov017_0219ca88 { unsigned int unknown_0_, unknown_4_, unknown_8_, unknown_c_; unsigned char unknown_10_[0x24]; };

extern "C" Zone3D* func_02012fe4();
extern "C" void* func_0200fd0c(GameState*);
extern "C" void* func_020100bc(GameState*);
extern "C" void* func_0205ec34(void*);
extern "C" int func_02046b38(Struct_02046b38*, Struct_02046b38_2*);
extern "C" int func_02046b24(Struct_02015438**);
extern "C" int func_02046b08(void**);
extern "C" void func_ov017_0219bed0(void*);
extern "C" unsigned char func_0200fb9c(char*);
extern "C" int func_0201201c(void*);
extern "C" int func_020100a8(GameState*);
extern "C" int func_020321e0(const Vector3fix*, Struct_02000c9c_56*, int, const Vector3fix*, int);
extern "C" void* func_ov017_0219c6f4(void*);
extern "C" unsigned char func_02039820(void*);
extern "C" void func_ov017_0219a674(unsigned char*);
extern "C" short func_ov017_021a4754(Vector3fix*, int, Vector3fix*);
extern "C" void func_ov017_0219b33c(GameResources*, Struct_ov017_0219ca88_3*);
extern "C" void func_ov017_0219e310(unsigned char*, int);
extern "C" void func_020469b4(Struct_0201bdac_2*, Struct_0201bdac*);
extern "C" int func_020649b0(void*, int, void*);
extern "C" void func_0206f81c(void*);

// USA: func_ov017_0219ca88
extern "C" ARM void func_ov017_0219ca88(GameResources* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetUnknownGameObject();
    Zone3D* var2 = func_02012fe4();
    unsigned char* var3 = static_cast<unsigned char*>(func_0200fd0c(var0));
    BackgroundLoader::GetInstance();
    Vector3fix* var4;
    int var5 = 0;
    void* var6 = func_0205ec34(func_020100bc(var0));
    if (func_02046b38((Struct_02046b38*)arg0->unknown_ptr_array_36fc[0], (Struct_02046b38_2*)arg0->unknown_ptr_array_36fc[4])) return;
    if (func_02046b24((Struct_02015438**)arg0->unknown_ptr_array_36fc[0]) == 4) return;
    if (func_02046b24((Struct_02015438**)arg0->unknown_ptr_array_36fc[0]) == 10) return;
    if (TestFlags08(arg0, 8)) {
        if (static_cast<unsigned char*>(arg0->unknown_ptr_array_36fc[5])[3]) return;
        if (IsMainBrightnessTransitionActive(arg0)) return;
        ClearFlags08(arg0, 8);
    }
    if (func_02046b38((Struct_02046b38*)arg0->unknown_ptr_array_36fc[0], (Struct_02046b38_2*)arg0->unknown_ptr_array_371c[0])) return;
    if (func_02046b08((void**)arg0->unknown_ptr_array_36fc[0]) && !IsBrightnessTransitionActive(arg0) && ((unsigned char*)arg0->unknown_42e3_)[6]) {
        if (var3[2]) var3[0xa] = 0;
        else func_ov017_0219bed0((void*)1);
        arg0->unknown_42e3_[6] = 0;
    }
    int var7 = 1;
    if (func_0200fb9c((char*)var0) != 6 && func_0201201c(var0) != 5) {
        if (*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(var1) + Enum_ov017_0219ca88_396) & 1) var7 = 0;
        else if (var3[2]) var7 = 0;
        if (var7) {
            var4 = (Vector3fix*)&var1->obj3D_.position_;
            Vector3fix var8 = *var4;
            for (int var9 = 0; var9 < var2->substruct_6c_.unknown_1c_; ++var9) {
                func_020100a8(var0);
                Struct_ov017_0219ca88_2* var10 = (Struct_ov017_0219ca88_2*)func_0201e548(&var2->substruct_6c_, var9);
                if (func_020321e0(&var8, &var10->unknown_4_, var10->unknown_52_, &var10->unknown_58_, var10->unknown_54_)) {
                    func_ov017_0219c6f4(var10);
                    var5 = 1;
                }
                if (var5 && var10->unknown_0_ == 1) {
                    var5 = 0;
                    if (!func_02039820(var1)) continue;
                    Struct_ov017_0219ca88_3 var11;
                    func_ov017_0219a674((unsigned char*)&var11);
                    var11.unknown_0_ = 8;
                    var11.unknown_8_ = var10;
                    var11.unknown_10_ = func_ov017_021a4754(var4, (short)var1->obj3D_.rotation_.y, &var10->unknown_58_);
                    func_ov017_0219b33c(arg0, &var11);
                }
                if (var5) {
                    if (!static_cast<unsigned char*>(arg0->unknown_ptr_array_36fc[5])[3]) break;
                    SetFlags08(arg0, 8);
                    return;
                }
            }
        }
    }
    if (var3[2]) {
        var3[2] = 0;
        var5 = 1;
    }
    if (!var5) return;
    func_0200fcfc(var0, var3);
    func_ov017_0219e310((unsigned char*)arg0->unknown_ptr_array_36fc[4], 0);
    func_020469b4((Struct_0201bdac_2*)arg0->unknown_ptr_array_36fc[0], (Struct_0201bdac*)arg0->unknown_ptr_array_36fc[4]);
    if (!var3[0xa]) {
        Struct_ov017_0219ca88 var12;
        var12.unknown_c_ = var2->currentZoneID_;
        if (func_020649b0(var6, 6, &var12)) func_0206f81c(&var12);
    }
}
