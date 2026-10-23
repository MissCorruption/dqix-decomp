#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020a8b0c_14076 = 0x34ec };
#else
enum { Enum_020a8b0c_14076 = 0x36fc };
#endif
#include <GameState/GameState.h>
#include <std_library_functions.h>
#include "Resource/GameResources.h"
struct Struct_020a8b0c { char unknown_0_[4]; unsigned char unknown_4_; char unknown_5_[3]; int unknown_8_, unknown_c_, unknown_10_; signed char unknown_14_; };
struct Struct_020a8b0c_2 { Object3D unknown_0_; short unknown_ac_, unknown_ae_; };
struct Struct_020a8b0c_3 { char unknown_0_[0xc]; unsigned char unknown_c_; };
struct Struct_02015438;
struct Struct_020874bc;
struct Struct_020a8b0c_4 { char unknown_0_[Enum_020a8b0c_14076]; Struct_02015438** unknown_36fc_; };
struct Struct_02018300_3;
struct Struct_02033834;
extern "C" Struct_020a8b0c_3* func_0200fd0c(GameState*);
extern "C" void func_020397cc(Struct_02018300_3*, int);
extern "C" int func_02046b24(Struct_02015438**);
extern "C" void func_0205eb80(void*);
extern "C" void func_0205eb54(void*, int, int);
extern "C" void func_0205eb90(void*, int, int);
extern "C" void func_02033874(Struct_02033834*, int);
extern "C" void func_020874bc(Struct_020874bc*, int);
int fix32abs(int);
extern char data_02108760;
// USA: func_020a8b0c
extern "C" ARM void func_020a8b0c(Struct_020a8b0c* arg0, int arg1) {
    if (!(arg0->unknown_4_ & (1<<arg1))) return;
    GameState* var0 = GameState::GetInstance();
    Struct_020a8b0c_2* var1 = (Struct_020a8b0c_2*)var0->GetPartyMemberByIndex(arg1);
    Struct_020a8b0c_3* var2 = func_0200fd0c(var0);
    Struct_020874bc* var3;
    Struct_02015438** var4 = ((Struct_020a8b0c_4*)GetGameResources())->unknown_36fc_;
    var3 = (Struct_020874bc*)func_02010828(var0);
    int var5 = var1->unknown_ac_;
    var2->unknown_c_ = 0;
    func_020397cc((Struct_02018300_3*)var1, 1);
    arg0->unknown_8_+=arg0->unknown_c_;
    if (arg0->unknown_10_ < arg0->unknown_8_) arg0->unknown_8_ = arg0->unknown_10_;
    int var6;
    if (func_02046b24(var4) == 3) { var6 = -3686; var1->unknown_0_.DisableFlag(0x8000100); }
    else {
        var6 = var5-arg0->unknown_8_;
        if (fix32abs(var6) < 40) {
            func_0205eb80(&data_02108760);
            func_0205eb54(&data_02108760, 114, 114);
            func_0205eb90(&data_02108760, 3, 0);
        }
    }
    var1->unknown_ac_ = var6;
    if (var6 < 0) {
        int var7 = var1->unknown_ae_;
        func_02033874((Struct_02033834*)var1, var7+labs(var6));
        func_020874bc(var3, arg0->unknown_14_);
        int var8 = arg0->unknown_14_;
        if (var8 > 0) var8--;
        arg0->unknown_14_ = var8;
    }
}
