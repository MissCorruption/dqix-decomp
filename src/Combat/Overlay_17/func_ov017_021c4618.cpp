#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

#if defined(jpn)
extern char data_020ef078;
#endif

extern "C" void func_02052958(char* arg0, char* arg1, int arg2);

struct Struct_ov017_021c4618 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned char unknown_4_;
    char unknown_5_[15];
};

struct Struct_ov017_021c4618_2 {
    char unknown_0_[0x134];
    char* unknown_134_;
};

extern "C" ARM void func_ov017_021c4618(int arg0, char* arg1, GameState* arg2, GameResources* arg3) {
    Struct_ov017_021c4618* var0 = (Struct_ov017_021c4618*)arg1;
    unsigned char var1 = var0->unknown_4_;
    GameObject* var2 = func_0200ff1c(arg2, var1);
    if (var2 == NULL) return;
#if defined(jpn)
    sprintf(((Struct_ov017_021c4618_2*)var2)->unknown_134_, &data_020ef078, var0->unknown_5_);
    strcpy(arg3->unknown_435c_[var1], var0->unknown_5_);
#else
    func_02052958((char*)var2, var0->unknown_5_, 1);
    strcpy(arg3->unknown_435c_[var1], ((Struct_ov017_021c4618_2*)var2)->unknown_134_);
#endif
}
