#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "GameState/GameState.h"
#include "Graphics/Vector.h"
#include "World/Zone3D.h"
#include "std_library_functions.h"
#include "Resource/GameResources.h"

struct Struct_ov017_021c1af0 { unsigned char unknown_0_, unknown_1_; char unknown_2_[6]; int unknown_8_, unknown_c_; };
struct Struct_ov017_021c1af0_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    char unknown_3_[4];
    unsigned char unknown_7_;
    char unknown_8_[8];
    Vector3i unknown_10_;
    unsigned short unknown_1c_;
};
struct Struct_0201bdac { char unknown_0_[8]; unsigned short unknown_8_; };
struct Struct_0201bdac_2;
struct Struct_02046574_2;
#if defined(jpn)
enum { Enum_ov017_021c1af0_92 = 0x28, Enum_ov017_021c1af0_2456 = 0x868, Enum_ov017_021c1af0_2464 = 0x870,
       Enum_ov017_021c1af0_6574 = 0x17de, Enum_ov017_021c1af0_6578 = 0x17e2 };
extern const char data_ov017_021d8730[];
extern const char data_ov017_021d876c[];
#else
enum { Enum_ov017_021c1af0_92 = 0x5c, Enum_ov017_021c1af0_2456 = 0x998, Enum_ov017_021c1af0_2464 = 0x9a0,
       Enum_ov017_021c1af0_6574 = 0x19ae, Enum_ov017_021c1af0_6578 = 0x19b2 };
#endif
struct Struct_02018300_3;
struct Struct_0202c1a4;
extern "C" Zone3D* func_02012fe4();
extern "C" int* func_0202ae18();
extern "C" Struct_02046574_2* func_020421a0();
extern "C" void func_020397cc(Struct_02018300_3*, int);
extern "C" int func_0202b7d8(int*);
extern "C" signed char func_0202c1a4(Struct_0202c1a4*);
extern "C" int func_ov017_0219ff58(GameResources*, int, int, int);
extern "C" Struct_ov017_021c1af0_2* func_0200fd0c(GameState*);
extern "C" void func_02070378(char*);
extern "C" void func_ov017_021baedc(Struct_0201bdac*, int);
extern "C" void func_020469b4(Struct_0201bdac_2*, Struct_0201bdac*);
extern "C" void func_ov017_021d1c2c(unsigned char, unsigned short);
extern "C" void func_ov017_021d1dc0(unsigned short, int, int*, int, int);
extern "C" const char* func_020e51cc(int);
extern "C" void func_02046574(Struct_02046574_2*, int, char*);
extern "C" void func_0204500c(void*, const char*, int
#if !defined(jpn)
    , int
#endif
);
extern "C" int func_02011b50(void*, int);
extern "C" void func_ov017_0219c520();
extern "C" void func_02043204(char*);
extern "C" void func_020397c0(void*);

// USA: func_ov017_021c1af0
extern "C" ARM void func_ov017_021c1af0(Struct_ov017_021c1af0* arg0) {
    GameState* var0 = GameState::GetInstance();
    Zone3D* var1 = func_02012fe4();
    if (arg0->unknown_8_ == 0) {
        func_020397cc((Struct_02018300_3*)var0->GetProtagonist(), 1);
        Struct_0208cb08* var2 = func_02094a00();
        func_02094b30(var2, 0x204, 0);
        if (func_02094b4c(var2)) arg0->unknown_8_ = 1;
    } else if (arg0->unknown_8_ == 1) {
        Struct_02046574_2* var3 = func_020421a0();
        int* var4 = func_0202ae18();
        if (!func_0202b7d8(var4) || (func_0202b7d8(var4) && func_0202c1a4((Struct_0202c1a4*)var4) == 0)) {
            GameResources* var5 = GetGameResources();
            Struct_0201bdac_2* var6 = static_cast<Struct_0201bdac_2*>(var5->unknown_ptr_array_36fc[0]);
            Struct_0201bdac* var7 = static_cast<Struct_0201bdac*>(var5->unknown_ptr_array_371c[6]);
            if (func_ov017_0219ff58(var5, 1, 0, 0)) {
                arg0->unknown_8_ = 2;
                return;
            }
            var0->GetProtagonist();
            Struct_ov017_021c1af0_2* var8 = func_0200fd0c(var0);
            if (arg0->unknown_c_ == 0) {
                func_02070378((char*)var8);
                var8->unknown_2_ = 1;
                var8->unknown_7_ = 1;
                var8->unknown_0_ = 0x2710;
                var8->unknown_10_ = (*reinterpret_cast<Vector3i*>(var1->unk_276c + 0x8));
                var8->unknown_1c_ = (*reinterpret_cast<int*>(var1->unk_276c + 0x14));
            } else if ((*reinterpret_cast<unsigned short*>(var1->unk_276c + 0x48)) == 3) {
                func_ov017_021baedc(var7, 1);
                var7->unknown_8_ = 0x7345;
                (*reinterpret_cast<unsigned char*>(var1->unk_276c + 0xb3)) = 1;
                func_020469b4(var6, var7);
                func_ov017_021d1c2c(0, 1);
                int var9[3];
                func_ov017_021d1dc0(0, 0, var9, 0x7345, 0);
            } else {
                func_02070378((char*)var8);
                var8->unknown_2_ = 1;
                var8->unknown_7_ = 1;
                var8->unknown_0_ = 0x2774;
                var8->unknown_10_ = (*reinterpret_cast<Vector3i*>(var1->unk_276c + 0x4c));
                var8->unknown_1c_ = (*reinterpret_cast<int*>(var1->unk_276c + 0x58));
            }
            arg0->unknown_8_ = 2;
        } else {
            char* var10 = (*reinterpret_cast<char**>(reinterpret_cast<char*>(var3) + Enum_ov017_021c1af0_92));
#if defined(jpn)
            if (arg0->unknown_c_ == 0) sprintf(var10, data_ov017_021d8730, var0->GetUnknownGameObject()->baseStats_->unk);
            else sprintf(var10, data_ov017_021d876c, var0->GetUnknownGameObject()->baseStats_->unk);
            func_0204500c(var3, var10, 0);
#else
            if (arg0->unknown_c_ == 0) sprintf(var10, func_020e51cc(0x3c));
            else sprintf(var10, func_020e51cc(0x3d));
            func_02046574(var3, 0, (char*)var0->GetUnknownGameObject()->baseStats_);
            func_0204500c(var3, var10, 0, 0xe3);
#endif
            (*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(var3) + Enum_ov017_021c1af0_6578)) = 0;
            (*reinterpret_cast<int*>(reinterpret_cast<char*>(var3) + Enum_ov017_021c1af0_2456)) = 1;
            arg0->unknown_8_ = 3;
        }
    } else if (arg0->unknown_8_ == 2) {
        if (func_02011b50(var0, 1)) {
            func_ov017_0219c520();
        }
        Struct_0208cb08* var11 = func_02094a00();
        func_02094b38(var11, 0x1f9);
        func_02094ab0(var11);
        arg0->unknown_1_ = 1;
    } else if (arg0->unknown_8_ == 3) {
        Struct_02046574_2* var12 = func_020421a0();
        (*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(var12) + Enum_ov017_021c1af0_6574)) = 0;
        if (!(*reinterpret_cast<int*>(reinterpret_cast<char*>(var12) + Enum_ov017_021c1af0_2464))) {
            func_02043204((char*)var12);
            func_020397c0(var0->GetProtagonist());
            Struct_0208cb08* var13 = func_02094a00();
            func_02094b38(var13, 0x204);
            func_02094ab0(var13);
            arg0->unknown_1_ = 1;
        }
    }
}
