#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void** func_ov011_021849c8(void* arg0);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);
extern "C" void func_ov023_021f9c60(void* arg0, unsigned short arg1);

class Struct_ov004_0216d720 {
public:
    virtual void inline_ov004_0216d720(); virtual void inline_ov004_0216d720_2(); virtual void inline_ov004_0216d720_3(); virtual void inline_ov004_0216d720_4();
    virtual void inline_ov004_0216d720_5(); virtual void inline_ov004_0216d720_6(); virtual void inline_ov004_0216d720_7(); virtual void inline_ov004_0216d720_8();
    virtual void inline_ov004_0216d720_9(); virtual void inline_ov004_0216d720_10(); virtual void inline_ov004_0216d720_11(); virtual void inline_ov004_0216d720_12();
    virtual void inline_ov004_0216d720_13(); virtual void inline_ov004_0216d720_14(); virtual void inline_ov004_0216d720_15(); virtual void inline_ov004_0216d720_16();
    virtual void inline_ov004_0216d720_17();
    virtual void inline_ov004_0216d720_18(int arg0);
    virtual void inline_ov004_0216d720_19(); virtual void inline_ov004_0216d720_20(); virtual void inline_ov004_0216d720_21(); virtual void inline_ov004_0216d720_22();
    virtual void inline_ov004_0216d720_23(); virtual void inline_ov004_0216d720_24(); virtual void inline_ov004_0216d720_25(); virtual void inline_ov004_0216d720_26();
    virtual void inline_ov004_0216d720_27(); virtual void inline_ov004_0216d720_28(); virtual void inline_ov004_0216d720_29(); virtual void inline_ov004_0216d720_30();
    virtual void inline_ov004_0216d720_31();
    virtual void inline_ov004_0216d720_32(int arg0);
    char unknown_4_[8];
    unsigned char unknown_c_;
};
extern "C" Struct_ov004_0216d720* func_ov023_021f6880(void** arg0, int arg1);

// USA: func_ov004_0216d720
extern "C" ARM int func_ov004_0216d720(void* arg0) {
    GameState::GetInstance();
    Struct_ov004_0216d720* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x38);
    if (var0) {
        var0->inline_ov004_0216d720_18(0);
        var0->inline_ov004_0216d720_32(0);
        var0->unknown_c_ |= 0x50;
    }
    Struct_ov004_0216d720* var1 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x39);
    if (var1) {
        var1->inline_ov004_0216d720_18(0);
        var1->inline_ov004_0216d720_32(0);
        var1->unknown_c_ |= 0x50;
    }
    Struct_ov004_0216d720* var2 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x12d);
    if (var2) {
        func_ov023_021f9c60(var2, 0);
    }
    func_ov011_021848a0(arg0, 0x2bd);
    return 0;
}
