#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov004_021630a4_2 { unsigned int unknown_0_[3]; };

class Struct_ov004_021630a4 {
    char unknown_4_[8];
public:
    unsigned char unknown_c_;
    virtual void inline_ov004_021630a4(); virtual void inline_ov004_021630a4_2(); virtual void inline_ov004_021630a4_3(); virtual void inline_ov004_021630a4_4();
    virtual void inline_ov004_021630a4_5(); virtual void inline_ov004_021630a4_6(); virtual void inline_ov004_021630a4_7();
    virtual void inline_ov004_021630a4_8(const Struct_ov004_021630a4_2& arg0);
    virtual Struct_ov004_021630a4_2 inline_ov004_021630a4_9();
};

extern "C" Struct_ov004_021630a4* func_ov004_0215e47c(void* arg0, int arg1);
extern "C" void func_020100c4(GameState* arg0, int arg1);

extern int data_ov004_021707e8;

// USA: func_ov004_021630a4
extern "C" ARM int func_ov004_021630a4(void* arg0) {
#if defined(jpn)
    enum { Enum_ov004_021630a4_16 = 0x18 };
#else
    enum { Enum_ov004_021630a4_16 = 0x10 };
#endif
    Struct_ov004_021630a4* var0 = func_ov004_0215e47c(arg0, 9);
    var0->unknown_c_ &= ~0x80;
    Struct_ov004_021630a4_2 var1;
    const Struct_ov004_021630a4_2& var2 = var0->inline_ov004_021630a4_9();
    var1 = var2;
    var1.unknown_0_[0] = 0;
    var1.unknown_0_[1] = 0;
    var1.unknown_0_[2] = 0;
    var0->inline_ov004_021630a4_8(var1);
    func_020100c4(GameState::GetInstance(), *(int*)((char*)&data_ov004_021707e8 + Enum_ov004_021630a4_16));
    return 0;
}
