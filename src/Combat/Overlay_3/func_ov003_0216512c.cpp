#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0216512c_54 = 0x2a };
enum { Enum_ov003_0216512c_804 = 0x20c };
enum { Enum_ov003_0216512c_808 = 0x210 };
enum { Enum_ov003_0216512c_1124 = 0x28c };
enum { Enum_ov003_0216512c_1128 = 0x290 };
enum { Enum_ov003_0216512c_1140 = 0x29c };
enum { Enum_ov003_0216512c_1142 = 0x29e };
enum { Enum_ov003_0216512c_1156 = 0x2ac };
enum { Enum_ov003_0216512c_1164 = 0x2b4 };
enum { Enum_ov003_0216512c_1187 = 0x2cb };
enum { Enum_ov003_0216512c_136 = 0x68 };
#else
enum { Enum_ov003_0216512c_54 = 0x36 };
enum { Enum_ov003_0216512c_804 = 0x324 };
enum { Enum_ov003_0216512c_808 = 0x328 };
enum { Enum_ov003_0216512c_1124 = 0x464 };
enum { Enum_ov003_0216512c_1128 = 0x468 };
enum { Enum_ov003_0216512c_1140 = 0x474 };
enum { Enum_ov003_0216512c_1142 = 0x476 };
enum { Enum_ov003_0216512c_1156 = 0x484 };
enum { Enum_ov003_0216512c_1164 = 0x48c };
enum { Enum_ov003_0216512c_1187 = 0x4a3 };
enum { Enum_ov003_0216512c_136 = 0x88 };
#endif
#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"

struct Struct_0207fe44 {
    char unknown_0_[Enum_ov003_0216512c_54];
    short unknown_36_;
};

struct Struct_ov003_0216512c {
    char unknown_0_[Enum_ov003_0216512c_804];
    struct Struct_0207fe44* unknown_324_;
    char unknown_328_[Enum_ov003_0216512c_1124 - Enum_ov003_0216512c_808];
    unsigned int unknown_464_;
    char unknown_468_[Enum_ov003_0216512c_1140 - Enum_ov003_0216512c_1128];
    short unknown_474_;
    char unknown_476_[Enum_ov003_0216512c_1156 - Enum_ov003_0216512c_1142];
    short unknown_484_;
    short unknown_486_;
    short unknown_488_;
    short unknown_48a_;
    char unknown_48c_[Enum_ov003_0216512c_1187 - Enum_ov003_0216512c_1164];
    unsigned char unknown_4a3_;
    unsigned char unknown_4a4_;
};

extern "C" unsigned char* func_020936f8(void);
extern "C" void func_ov003_021612c0(struct Struct_ov003_0216512c* arg0);
extern "C" int func_ov003_02161344(struct Struct_ov003_0216512c* arg0);
extern "C" void func_0207fe44(struct Struct_0207fe44* arg0);
extern "C" void func_ov017_021cea8c(void);
extern "C" void VectorizedMemset(void* dst, int val, int size);
extern "C" void func_020939fc(unsigned char* arg0);
extern "C" void func_ov003_02166f80(void* arg0, int arg1, int arg2);

// USA: func_ov003_0216512c
extern "C" ARM void func_ov003_0216512c(struct Struct_ov003_0216512c* arg0) {
    unsigned char* var0 = func_020936f8();
    if (arg0->unknown_4a4_ == 0) {
        func_ov003_021612c0(arg0);
        arg0->unknown_4a4_++;
    } else if (arg0->unknown_4a4_ == 1) {
        int var1 = func_ov003_02161344(arg0);
        if (var1 != -1) {
            if (var1 != 1) {
                return;
            }
            func_0207fe44(arg0->unknown_324_);
            arg0->unknown_484_ = 0x13;
            arg0->unknown_4a4_++;
            arg0->unknown_464_ |= 0xc000000;
            func_ov017_021cea8c();
            return;
        }
        arg0->unknown_488_ = 0x1b;
        arg0->unknown_474_ = arg0->unknown_48a_ = 0xaa;
        arg0->unknown_324_->unknown_36_ = arg0->unknown_48a_;
        arg0->unknown_484_ = 0x12;
        arg0->unknown_486_ = 1;
        arg0->unknown_4a4_ = 3;
    } else if (arg0->unknown_4a4_ == 2) {
        GrottoStruct* var2 = GameState::GetInstance()->GetGrottoStruct();
        VectorizedMemset(var2, 0, Enum_ov003_0216512c_136);
        var2->unknown_0[0] = 0;
        var2->unknown_0[1] = 0;
        arg0->unknown_464_ |= 0x82;
        arg0->unknown_4a3_ = 6;
        arg0->unknown_4a4_ = 0;
        func_020939fc(var0);
    } else if (arg0->unknown_4a4_ == 3) {
        func_ov003_02166f80(arg0, arg0->unknown_488_, 0);
        arg0->unknown_4a3_ = 10;
        arg0->unknown_4a4_ = 1;
    }
}
