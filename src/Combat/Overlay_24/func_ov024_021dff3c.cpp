#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_0208869c(unsigned char* arg0);
struct Struct_020886dc;
struct Struct_02088724;
struct Struct_0208876c;
struct Struct_020887b4;
extern "C" void func_020886dc(struct Struct_020886dc* arg0);
extern "C" void func_02088724(struct Struct_02088724* arg0);
extern "C" void func_0208876c(struct Struct_0208876c* arg0);
extern "C" void func_020887b4(struct Struct_020887b4* arg0);
extern "C" void func_020887fc(unsigned char* arg0);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021dff3c_4 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

struct Struct_ov024_021dff3c { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021dff3c_2 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; };
struct Struct_ov024_021dff3c_3 {
    char unknown_0_[0x20];
    struct Struct_ov024_021dff3c_4 unknown_20_;
    struct Struct_ov024_021dff3c_4 unknown_24_;
    char unknown_28_[0x30 - 0x28];
    short unknown_30_;
};

// USA: func_ov024_021dff3c
extern "C" ARM void* func_ov024_021dff3c(struct Struct_ov024_021dff3c_2* arg0, int arg1, int arg2, struct Struct_ov024_021dff3c_3* arg3, int arg4, int arg5, unsigned char arg6) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    unsigned short var1;
    if (arg3->unknown_30_ > 0) {
        if (func_0208869c((unsigned char*)var0->currentStats_) && arg6 != 0) {
            var1 = func_ov024_021da644(arg2, arg3->unknown_20_.unknown_2_4_, arg3->unknown_24_.unknown_0_0_);
            switch (arg3->unknown_30_) {
                case 1:
                    func_020886dc((struct Struct_020886dc*)var0->currentStats_);
                    break;
                case 2:
                    func_02088724((struct Struct_02088724*)var0->currentStats_);
                    break;
                case 3:
                    func_0208876c((struct Struct_0208876c*)var0->currentStats_);
                    break;
                case 4:
                    func_020887b4((struct Struct_020887b4*)var0->currentStats_);
                    break;
                case 5:
                    func_020887fc((unsigned char*)var0->currentStats_);
                    break;
            }
        } else {
            var1 = func_ov024_021da644(arg2, arg3->unknown_24_.unknown_1_2_, arg3->unknown_24_.unknown_2_4_);
        }
    } else {
        var1 = func_ov024_021da644(arg2, arg3->unknown_24_.unknown_1_2_, arg3->unknown_24_.unknown_2_4_);
    }
    void* var2 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var2) return 0;
    func_ov000_0215a88c(arg0->unknown_10_, var2, var1);
    struct Struct_ov024_021dff3c* var3 = (struct Struct_ov024_021dff3c*)((char*)arg0->unknown_c_ + 0x1c);
    func_ov000_0215cd44(arg0->unknown_10_, var2, var0, 0, 0, 0, var3->unknown_0_7_ != 0);
    return var2;
}
