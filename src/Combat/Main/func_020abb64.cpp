#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include <GameState/GameState.h>
#include <NitroSDK/Memory.h>
struct Struct_020abb64 { unsigned int unknown_0_0_:12, unknown_1_4_:4, unknown_2_0_:5, unknown_2_5_:4, unknown_3_1_:1, unknown_3_2_:1, unknown_3_3_:1, unknown_3_4_:1, unknown_3_5_:1, unknown_3_6_:1, unknown_3_7_:1; };
struct Struct_020abb64_2 { unsigned int unknown_0_0_:9, unknown_1_1_:10, unknown_2_3_:11, unknown_3_6_:1, unknown_3_7_:1; };
struct Struct_020abb64_3 { Struct_020abb64 unknown_0_; Struct_020abb64_2 unknown_4_; unsigned char unknown_8_; };
struct Struct_020abb64_4 { char unknown_0_[IS_JPN ? 0x543c : 0x569c]; Struct_020abb64_3 unknown_569c_; char unknown_56a8_[0xcd8]; char unknown_6380_[0x54]; };
extern "C" char* func_020108d8(char*, int);
extern "C" void func_02082828(char*);
extern "C" int func_020aba5c(int);
extern "C" int func_020abae8(int);
extern "C" void func_0208660c(char*);
// USA: func_020abb64
extern "C" ARM int func_020abb64() {
    GameState* var0 = GameState::GetInstance();
    for (int var1 = 0;var1 < 4;var1++) { char* var2 = func_020108d8((char*)var0, var1); if (var2) func_02082828(var2); }
    if (!func_020aba5c(0)) return 0;
    if (!func_020aba5c(1)) return 0;
    if (!func_020abae8(0)) return 0;
    if (!func_020abae8(1)) return 0;
    Struct_020abb64_4* var3 = (Struct_020abb64_4*)var0;
    var3->unknown_569c_.unknown_0_.unknown_0_0_ = 2000;
    var3->unknown_569c_.unknown_0_.unknown_1_4_ = 1;
    var3->unknown_569c_.unknown_0_.unknown_2_0_ = 1;
    var3->unknown_569c_.unknown_0_.unknown_3_4_ = 0;
    var3->unknown_569c_.unknown_0_.unknown_2_5_ = 0;
    var3->unknown_569c_.unknown_0_.unknown_3_3_ = 0;
    var3->unknown_569c_.unknown_0_.unknown_3_1_ = 0;
    var3->unknown_569c_.unknown_0_.unknown_3_2_ = 0;
    var3->unknown_569c_.unknown_0_.unknown_3_5_ = 0;
    var3->unknown_569c_.unknown_0_.unknown_3_6_ = 1;
    var3->unknown_569c_.unknown_0_.unknown_3_7_ = 0;
    Struct_020abb64_3* var4 = &var3->unknown_569c_;
    var4->unknown_4_.unknown_0_0_ = 511;
    var4->unknown_4_.unknown_3_6_ = 0;
    var4->unknown_4_.unknown_1_1_ = 300;
    var4->unknown_4_.unknown_2_3_ = 706;
    var4->unknown_8_ = 0;
    func_0208660c((char*)func_02010828(var0));
    VectorizedMemset(var3->unknown_6380_, 0, 0x54);
    return 1;
}
