#include <globaldefs.h>
#include "Combat/ActorAction.h"
#include "World/Object3D.h"
#include "World/Zone3D.h"
#include "GameState/GameState.h"

struct Struct_02033834;
struct Struct_02010604;
struct Struct_02018300_3;
struct Struct_02000c9c_21;
extern "C" void func_02033874(Struct_02033834*, int);
extern "C" void* func_0200fd0c(GameState*);
extern "C" void* func_02012fe4();
extern "C" void func_02039d24(unsigned char*);
extern "C" int func_02033b88(Struct_02010604*, int);
extern "C" void func_ov017_021d440c(int);
int fix32cos(int);
int fix32sin(int);
extern "C" void func_020397cc(Struct_02018300_3*, int);
#if defined(jpn)
#define data_020efb4e data_020efa3e
#endif
extern const char data_020efb4e[];

#if defined(jpn)
enum { Enum_020399b0_0 = 12 };
#else
enum { Enum_020399b0_0 = 0 };
#endif

#define SET_ACTION_POINTS(firstNode, secondNode, reverseValue) \
    var2.unknown_5c_ = secondNode; \
    var2.unknown_58_ = firstNode; \
    var2.unknown_c_.unknown1_0_ = firstNode->unknown_8_.unknown1_0_; \
    var2.unknown_18_.unknown1_0_ = secondNode->unknown_8_.unknown1_0_; \
    var2.unknown_30_.unknown1_0_ = firstNode->unknown_8_.unknown1_0_; \
    var2.unknown_3c_.unknown1_0_ = secondNode->unknown_8_.unknown1_0_; \
    var2.unknown_8_ = firstNode->unknown_20_; \
    var2.unknown_a_ = secondNode->unknown_20_; \
    var2.unknown_8_ -= 0x3243; \
    var2.unknown_3_ = reverseValue; \
    var2.unknown_3c_.unknown1_0_.x = var5.x + var2.unknown_3c_.unknown1_0_.x; \
    var2.unknown_3c_.unknown1_0_.z += var5.z; \
    var2.unknown_18_.unknown1_0_.y -= 0x1000; \
    if (var2.unknown_8_ < 0) var2.unknown_8_ += 0x6487

// USA: func_020399b0
extern "C" ARM void func_020399b0(GameObject* arg0, unsigned short arg1, const Vector3i* arg2, int arg3) {
    arg0->obj3D_.SetField06(arg1);
    arg0->obj3D_.position_ = *arg2;
    func_02033874(reinterpret_cast<Struct_02033834*>(arg0), arg3);
    *(short*)((char*)arg0 + 0xb2) = 0;
    if (((signed char*)arg0)[0x1c9 - Enum_020399b0_0] > 0) ((unsigned char*)arg0)[0x1ce - Enum_020399b0_0] |= 4;
    ((signed char*)arg0)[0x1cb - Enum_020399b0_0] = -1;
    ((unsigned char*)arg0)[0x1cc - Enum_020399b0_0] = 0;
    unsigned char* var0 = static_cast<unsigned char*>(func_0200fd0c(GameState::GetInstance()));
    Zone3D* var1 = static_cast<Zone3D*>(func_02012fe4());
    func_02039d24(reinterpret_cast<unsigned char*>(arg0));
    if (var0[0x66]) {
        func_02038508((Struct_02037d10*)((char*)arg0 + 0x26c - Enum_020399b0_0));
        ((Struct_02038598*)((char*)arg0 + 0xe0))->unknown_0_0_ = 0;
        arg0->obj3D_.DisableFlag(0x1180);
        func_02033b88(reinterpret_cast<Struct_02010604*>(arg0), 0);
        func_ov017_021d3f00((Struct_02037d10*)((char*)arg0 + 0x26c - Enum_020399b0_0), 0, 1);
    }
    if (*reinterpret_cast<short*>(var0 + 0x6c) < 0) {
        func_02033b88(reinterpret_cast<Struct_02010604*>(arg0), 0);
        return;
    }
    if (*reinterpret_cast<short*>(var0 + 0x6c) == 9999) {
        arg0->obj3D_.DisableFlag(0x1000);
        func_ov017_021d440c(-1);
        func_ov017_021d3f00((Struct_02037d10*)((char*)arg0 + 0x26c - Enum_020399b0_0), 0, 1);
        return;
    }
    Struct_02037d10 var2;
    func_02038508(&var2);
    Struct_020134e0::Struct_02018300* var3 = func_0201e6d4(&var1->substruct_6c_, *reinterpret_cast<short*>(var0 + 0x6c));
    if (!var3) return;
    int var4 = fix32cos(var3->unknown_20_);
    Vector3i var5;
    var5.x = fix32sin(var3->unknown_20_);
    var5.y = 0;
    var5.z = var4;
    Vector3fix_Normalize(&var5, &var5);
    Struct_020134e0::Struct_02018300* var6 = func_0201e6d4(&var1->substruct_6c_, var3->unknown_2c_.unknown5_0_.unknown_2_);
    if (!var6) return;
    if (var3->unknown_2c_.unknown5_0_.unknown_5_ & 1) {
        SET_ACTION_POINTS(var6, var3, 1);
    } else {
        SET_ACTION_POINTS(var3, var6, 0);
    }
    var2.unknown_1_ = 2;
    var2.unknown_0_ = 1;
    var2.unknown_6_ = var3->unknown_20_;
    func_020398b4(arg0, &var2);
    int var7 = var2.unknown_18_.unknown1_0_.y - var2.unknown_c_.unknown1_0_.y;
    int var8 = var2.unknown_c_.unknown1_0_.y + FIX32_MULTIPLY(var7, *reinterpret_cast<short*>(var0 + 0x6a));
    Vector3i var9;
    var9 = arg0->obj3D_.position_;
    var9.y = var8;
    arg0->obj3D_.position_ = var9;
    func_02033874(reinterpret_cast<Struct_02033834*>(arg0), var3->unknown_20_);
    arg0->obj3D_.MaybeSetRegularAnimation(data_020efb4e, 0);
    arg0->obj3D_.EnableFlag(0x180);
    ((Struct_02038598*)((char*)arg0 + 0xe0))->unknown_0_0_ = 1;
    func_020397cc(reinterpret_cast<Struct_02018300_3*>(arg0), 1);
}
