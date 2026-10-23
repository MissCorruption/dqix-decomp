#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020ac9ac_14076 = 0x34ec };
#else
enum { Enum_020ac9ac_14076 = 0x36fc };
#endif
#include "GameState/GameState.h"

extern "C" void* func_02012fe4(GameState* arg0);
struct Struct_0200ffd0;
extern "C" void* func_0200ffd0(struct Struct_0200ffd0* arg0);
struct Struct_02015438;
extern "C" int func_02046b24(struct Struct_02015438** arg0);
struct Struct_02046b1c;
extern "C" int func_02046b1c(struct Struct_02046b1c* arg0);
struct GameResources;
int IsBrightnessTransitionActive(GameResources*);
extern "C" void func_020ad61c(void* arg0);
extern "C" void func_ov017_02193dc4(void* arg0);

struct Struct_020ac9ac { char unknown_0_[Enum_020ac9ac_14076]; void* unknown_36fc_; };

// USA: func_020ac9ac
extern "C" ARM void func_020ac9ac(struct Struct_020ac9ac* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1;
    int var2;
    void* var3 = arg0->unknown_36fc_;
    func_02012fe4(var0);
    var1 = func_0200ffd0((struct Struct_0200ffd0*)var0);
    var2 = func_02046b24((struct Struct_02015438**)var3);
    int var4 = func_02046b1c((struct Struct_02046b1c*)var3);
    if (var1 == NULL) return;
    if (var2 == 0xa) {
        if (*((unsigned char*)var4 + 3) != 0) return;
    }
    if (var2 == 3) {
        if (IsBrightnessTransitionActive((GameResources*)arg0) == 0) return;
    }
    func_020ad61c(var1);
    func_ov017_02193dc4(var1);
}
