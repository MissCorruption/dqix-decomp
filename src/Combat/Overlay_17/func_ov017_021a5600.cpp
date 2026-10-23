#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"
#define REG_DISPCNT (*(volatile unsigned int*)0x04000000)
struct Struct_02018300_3 { char unknown_0_[0xb2]; short unknown_b2_; };
struct Struct_02012de8;
struct Struct_02038598_5;
struct Struct_ov017_021a5600 {
    unsigned char unknown_0_;
    char unknown_1_[3];
    int unknown_4_, unknown_8_;
};
#if defined(jpn)
enum { Enum_ov017_021a5600_76 = 0x34, Enum_ov017_021a5600_9532 = 0x2364,
       Enum_ov017_021a5600_9552 = 0x2378, Enum_ov017_021a5600_173456 = 0x293b8, Enum_ov017_021a5600_179632 = 0x2abd8 };
#else
enum { Enum_ov017_021a5600_76 = 0x4c, Enum_ov017_021a5600_9532 = 0x253c,
       Enum_ov017_021a5600_9552 = 0x2550, Enum_ov017_021a5600_173456 = 0x2a590, Enum_ov017_021a5600_179632 = 0x2bdb0 };
#endif
struct Struct_ov017_021a5600_2 {
    unsigned char unknown_0_, unknown_1_;
    char unknown_2_[6];
    int unknown_8_;
    SafeAllocator unknown_c_;
    unsigned char unknown_20_, unknown_21_;
    char unknown_22_[2];
    Struct_ov017_021a5600 unknown_24_;
};
extern "C" void func_0202738c(unsigned char*, int, int, int);
extern "C" void func_02027304(unsigned char*, int);
extern "C" void func_020a0cc4(int);
extern "C" void func_020a0c0c();
extern "C" void func_ov002_0215505c(char*);
extern "C" void func_ov002_02154d40(char*, SafeAllocator*);
extern "C" int func_ov002_02155960(char*, int);
extern "C" void func_ov002_021556fc(char*);
extern "C" void func_ov017_021a55b0(Struct_ov017_021a5600_2*);
extern "C" void func_ov017_02191108(GameResources*, int, int, int, int);
extern "C" Struct_02012de8* func_020d6c00();
extern "C" void func_020397cc(Struct_02018300_3*, int);
extern "C" unsigned char* func_020100f8(char*);
extern "C" void func_020a28a0(unsigned char*, unsigned char);
extern "C" void func_020a28b0(unsigned char*, int);
extern "C" void func_02027288(unsigned char*, int);
extern "C" void* func_02012d88(AllocatorUnion*, unsigned int);
extern "C" void func_020a1df8(int);
extern "C" void func_020a1ef0(int);
extern "C" void func_ov002_021556ec(void*, int, int);
extern "C" int func_02046b60(Struct_02038598_5*, int);
extern "C" void func_020397c0(void*);
extern "C" void func_0202ac74();
extern "C" int func_02046708(Struct_02012de8*, unsigned int);
extern "C" void func_ov017_021a01bc(unsigned char*);
extern "C" void func_02039830(void*);
extern "C" void func_ov017_021a5974(char*);
extern AllocatorUnion data_02114e20;
extern char* data_ov017_021d83ac;
// USA: func_ov017_021a5600
extern "C" ARM void func_ov017_021a5600(Struct_ov017_021a5600_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    Struct_02018300_3* var2 = (Struct_02018300_3*)var0->GetUnknownGameObject();
    Struct_02012de8* var3 = func_020d6c00();
    func_020397cc(var2, 1);
    var2->unknown_b2_ = 0;
    SetFlags04(var1, 0xc0);
    unsigned char* var4 = func_020100f8((char*)var0);
    func_020a28a0(var4, 3);
    int var5 = var0->GetTickCount();
    if (var5 < 0) var5 = 1;
    if (arg0->unknown_8_ == 0) {
        unsigned char* var6 = (unsigned char*)var1->unknown_ptr_36d0;
        func_02027288(var6, -1);
        func_0202738c(var6, 1, 2, -1);
        func_020a0cc4(Enum_ov017_021a5600_179632);
        void* var7 = func_02012d88(&data_02114e20, Enum_ov017_021a5600_173456);
        if (!var7) {
            func_020a0c0c();
            arg0->unknown_1_ = 1;
        } else {
            arg0->unknown_c_.CreateTypeA(var7, Enum_ov017_021a5600_173456);
            arg0->unknown_c_.Reset();
            func_020a1df8(2);
            func_020a1ef0(1);
            data_ov017_021d83ac = (char*)arg0->unknown_c_.Allocate(Enum_ov017_021a5600_9552);
            func_ov002_0215505c(data_ov017_021d83ac);
            func_ov002_021556ec(data_ov017_021d83ac, arg0->unknown_20_, arg0->unknown_21_);
            func_ov002_02154d40(data_ov017_021d83ac, &arg0->unknown_c_);
            Struct_ov017_021a5600 var8 = arg0->unknown_24_;
            char* var9 = data_ov017_021d83ac;
            *reinterpret_cast<unsigned char*>(var9 + Enum_ov017_021a5600_9532) = var8.unknown_0_;
            *reinterpret_cast<int*>(var9 + Enum_ov017_021a5600_9532 + 4) = var8.unknown_4_;
            *reinterpret_cast<int*>(var9 + Enum_ov017_021a5600_9532 + 8) = var8.unknown_8_;
            ++arg0->unknown_8_;
        }
    } else if (arg0->unknown_8_ == 1) {
        if (func_ov002_02155960(data_ov017_021d83ac, var5)) ++arg0->unknown_8_;
    } else if (arg0->unknown_8_ == 2) {
        func_ov002_021556fc(data_ov017_021d83ac);
        Struct_0208cb08* var10 = func_02094a00();
        func_02094b40(var10);
        func_02094ab0(var10);
        func_02094b34(var10, 5000, 0x6f, 1, 1);
        ++arg0->unknown_8_;
    } else if (arg0->unknown_8_ == 3) {
        unsigned int var11 = *reinterpret_cast<unsigned int*>(data_ov017_021d83ac + Enum_ov017_021a5600_76);
        REG_DISPCNT = (var11 << 8) | (REG_DISPCNT & ~0x1f00);
        data_ov017_021d83ac = 0;
        func_ov017_021a55b0(arg0);
        int var12 = 1;
        Struct_02038598_5* var13 = (Struct_02038598_5*)var1->unknown_ptr_array_36fc[0];
        if (var13 && (func_02046b60(var13, 2) || func_02046b60(var13, 47))) var12 = 0;
        if (var12) {
            func_020a28b0(var4, 3);
            ClearFlags04(var1, 0xc0);
            func_020397c0(var2);
        }
        func_ov017_02191108(var1, 1, 1, 0, 1);
        func_0202ac74();
        func_020a0c0c();
        if (!func_02046708(var3, 0x100000)) {
            unsigned char* var14 = (unsigned char*)var1->unknown_ptr_36d0;
            func_0202738c(var14, 0, 2, -1);
            func_02027304(var14, -1);
        }
        func_ov017_021a01bc((unsigned char*)var1);
        func_020397c0(var2);
        func_02039830(var2);
        arg0->unknown_1_ = 1;
        func_ov017_021a5974((char*)arg0);
    }
}
