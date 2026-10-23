#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Resource/CharacterCreationUI.h"

struct Struct_0205ba68;
extern "C" void func_0205ba68(Struct_0205ba68*, int, int, int);
struct Struct_0205bacc;
extern "C" void func_0205bacc(Struct_0205bacc*, int);
struct Struct_0205bcdc;
extern "C" void func_0205bcdc(Struct_0205bcdc*, int);
extern "C" void func_0205bb04(void*, int);
struct Struct_02000c9c_8;
extern "C" unsigned char func_0200fb08(Struct_02000c9c_8*);
extern "C" void func_ov023_021da100(char*, char*, int);
#if defined(jpn)
extern "C" void func_0205d304(void*, void*, int, int, int, int, int);
#else
extern "C" void func_0205d304(void*, void*, int, int, int, int, int, int);
#endif

// USA: func_ov023_021d9f88
extern "C" ARM void func_ov023_021d9f88(void* arg0) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
    Struct_ov023_021d9c7c* var1 = &var0->unknown_1f8_[1];
    var0->unknown_d84_ = 0;
    func_0205ba68((Struct_0205ba68*)var1->unknown_4_, 1, 2, 0);
    func_0205ba68((Struct_0205ba68*)var1->unknown_54_, 1, 2, 0);
    func_0205bacc((Struct_0205bacc*)var1->unknown_4_, 2);
    func_0205bacc((Struct_0205bacc*)var1->unknown_54_, 2);
    var0->unknown_1f8_[1].unknown_4_[1] = 1;
    var0->unknown_1f8_[1].unknown_54_[1] = 1;
    signed char var2 = var0->unknown_d84_;
    func_0205bcdc((Struct_0205bcdc*)var1->unknown_4_, var2);
    func_0205bb04(var0->unknown_1f8_[1].unknown_54_, var2);
    var0->unknown_1f8_[1].unknown_94_[0] = 1;
    var0->unknown_1f8_[1].unknown_94_[1] = 1;

#if defined(jpn)
    int var3 = 0xe;
    var0->unknown_1f8_[1].unknown_a0_[0] = 7;
    var0->unknown_1f8_[1].unknown_a0_[1] = 5;
    var0->unknown_1f8_[1].unknown_a0_[2] = 0x18;
    var0->unknown_1f8_[1].unknown_a0_[3] = 0xa;
    var0->unknown_1f8_[1].unknown_a0_[4] = var3;
    var0->unknown_1f8_[1].unknown_a0_[5] = 0;
    var0->unknown_1f8_[1].unknown_a0_[6] = 0xc;
    var0->unknown_1f8_[1].unknown_a0_[7] = 0x10;
    var0->unknown_1f8_[1].unknown_b1_ = 1;
    var0->unknown_1f8_[1].unknown_b7_ = 0xc;
    var0->unknown_1f8_[1].unknown_b5_ = 1;
    var0->unknown_1f8_[1].unknown_b6_ = 0;
    memset(var0->unknown_f8_, 0, 0x800);
    func_ov023_021da100((char*)var0, var0->unknown_f8_, 0);
    func_0205d304(&var0->unknown_1f8_[1], var0->unknown_f8_, 0, 0, 0, 0, 0);
#else
    int var4 = 0x10;
    unsigned char var5 = func_0200fb08((Struct_02000c9c_8*)GameState::GetInstance());
    switch (var5) {
        case 2: var4 = 0xe; break;
        case 4: var4 = 0x15; break;
        case 3: var4 = 0xa; break;
        case 5: var4 = 0x15; break;
        default: break;
    }
    Struct_ov023_021d9c7c* var6 = &var0->unknown_1f8_[1];
    var6->unknown_a0_[0] = 6;
    var6->unknown_a0_[1] = 5;
    var6->unknown_a0_[2] = 0x1a;
    var6->unknown_a0_[3] = 0xa;
    var6->unknown_a0_[4] = var4;
    var6->unknown_a0_[5] = 0;
    var6->unknown_a0_[6] = 0xc;
    var6->unknown_a0_[7] = 0x10;
    var6->unknown_b1_ = 1;
    var6->unknown_b7_ = 0xc;
    var6->unknown_b5_ = 1;
    var6->unknown_b6_ = 0;
    void* var7 = var0->unknown_f8_;
    memset(var7, 0, 0x960);
    func_ov023_021da100((char*)var0, (char*)var7, 0);
    func_0205d304(var6, var7, 0, 0, 0, 0, 0, 1);
#endif
}
