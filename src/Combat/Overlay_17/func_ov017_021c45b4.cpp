#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

extern "C" void* func_0202ae24(void);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" void* func_02052a10(char* arg0);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c45b4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned char unknown_4_;
    char unknown_5_[15];
};

// USA: func_ov017_021c45b4
extern "C" ARM void func_ov017_021c45b4(int arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0202ae24();
    GameObject* var2 = func_0200ff1c(var0, arg0);
    if (!var2) return;

    struct Struct_ov017_021c45b4 var3;
    var3.unknown_0_ = 3;
    var3.unknown_4_ = (unsigned char)arg0;
#if defined(jpn)
    char* var4 = *(char**)((char*)var2 + 0x134);
#else
    char* var4 = (char*)func_02052a10((char*)var2);
#endif
    strcpy(var3.unknown_5_, var4);
    func_0205e330(var1, &var3, 0);
}
