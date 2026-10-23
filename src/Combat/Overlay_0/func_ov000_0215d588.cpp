#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0208977c;
extern "C" void func_0208977c(struct Struct_0208977c* arg0);

struct Struct_ov000_0215d588 {
    char unknown_0_[0x138];
    struct Struct_0208977c* unknown_138_;
};

struct Struct_ov000_0215d588_2 {
    char unknown_0_[0xf];
    unsigned char unknown_f_;
    char unknown_10_[0x18 - 0x10];
};

struct Struct_ov000_0215d588_3 {
    char unknown_0_[0x81b0];
    struct Struct_ov000_0215d588_2 unknown_81b0_[3];
};

struct Struct_ov000_02182c74 { short unknown_0_[16]; };
extern Struct_ov000_02182c74 data_ov000_02182d14;

extern "C" void func_ov000_0215d090(struct Struct_ov000_0215d588_3* arg0);
extern "C" int func_ov000_02153e40(void* arg0, short* arg1, int arg2, int arg3);

// USA: func_ov000_0215d588
extern "C" ARM void func_ov000_0215d588(struct Struct_ov000_0215d588_3* arg0) {
    func_ov000_0215d090(arg0);
    for (int var0 = 0; var0 < 3; var0++) {
        arg0->unknown_81b0_[var0].unknown_f_ = 0;
    }
    Struct_ov000_02182c74 var1 = data_ov000_02182d14;
    int var2 = func_ov000_02153e40(arg0, var1.unknown_0_, 0x10, 0);
    for (int var3 = 0; var3 < var2; var3++) {
        int var4 = var1.unknown_0_[var3];
        GameState* var5 = GameState::GetInstance();
        Struct_ov000_0215d588* var6 = (Struct_ov000_0215d588*)var5->GetCombatantByIndex(var4);
        if (var6 != NULL) {
            func_0208977c(var6->unknown_138_);
        }
    }
}
