#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

#if defined(jpn)
#include "GameState/GameState.h"

enum Enum_02094b30 {
    Enum_02094b30_1000 = 1000,
    Enum_02094b30_5000 = 5000
};

extern "C" int func_020952f4(char* arg0);
extern "C" int func_02001aec(const void*, const void*, unsigned int);
extern "C" int func_0201079c(char* arg0);
#endif

// USA: func_02094b30
extern "C" ARM void func_02094b30(Struct_0208cb08* arg0, int arg1, int arg2) {
#if defined(jpn)
    if (arg1 < 0 || arg0->unknown_34_ >= 0 || arg0->unknown_3c_ == arg1) return;
    if (arg0->unknown_40_ == arg1) {
        int var0 = 1;
        char var1[8] = {};
        switch (arg0->unknown_40_) {
        case Enum_02094b30_5000:
            if (func_02001aec(var1, arg0->unknown_59_, func_020952f4(var1)) != 0) {
                var0 = 0;
            }
            break;
        case Enum_02094b30_1000: {
            int var2 = func_0201079c((char*)GameState::GetInstance());
            var2 &= 0xff;
            if (var2 != arg0->unknown_58_) {
                var0 = 0;
            }
            break;
        }
        }
        if (var0) return;
    }
    func_02094ab0(arg0);
    arg0->unknown_34_ = arg1;
    arg0->unknown_56_ = 0;
    arg0->unknown_57_ = 0;
    arg0->unknown_61_ = arg2;
#endif
}
