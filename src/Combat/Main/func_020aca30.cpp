#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020aca30_14076 = 0x34ec };
#else
enum { Enum_020aca30_14076 = 0x36fc };
#endif
#include "GameState/GameState.h"

extern "C" void func_020ae074(void* arg0);
struct Struct_0200ffd0;
extern "C" void* func_0200ffd0(struct Struct_0200ffd0* arg0);
struct Struct_02015438;
extern "C" int func_02046b24(struct Struct_02015438** arg0);
struct Struct_02046b1c;
extern "C" int func_02046b1c(struct Struct_02046b1c* arg0);

struct Struct_020aca30 { char unknown_0_[Enum_020aca30_14076]; void* unknown_36fc_; };

// USA: func_020aca30
extern "C" ARM void func_020aca30(struct Struct_020aca30* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1;
    void* var2 = arg0->unknown_36fc_;
    var1 = func_0200ffd0((struct Struct_0200ffd0*)var0);
    int var3 = func_02046b24((struct Struct_02015438**)var2);
    int var4 = func_02046b1c((struct Struct_02046b1c*)var2);
    if (var1 == NULL) return;
    if (var3 == 0xa) {
        if (*((unsigned char*)var4 + 3) != 0) return;
    }
    func_020ae074(var1);
}
