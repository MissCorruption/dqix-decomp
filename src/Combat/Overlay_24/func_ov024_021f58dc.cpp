#include <globaldefs.h>

struct Struct_ov024_021fea1c { int unknown_0_[2]; };
extern "C" int func_ov000_0215fb54(int arg0, int arg1, Struct_ov024_021fea1c* arg2);
extern "C" void* func_ov000_02160130();
extern "C" void* func_ov000_02162d88(void* arg0, int arg1);

struct Struct_ov024_021f58dc { char unknown_0_; unsigned char unknown_1_0_ : 4; unsigned char unknown_1_4_ : 4; };
struct Struct_ov024_021f58dc_2 { int unknown_0_; };
struct Struct_ov024_021f58dc_3 {
    char unknown_0_[4];
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    char unknown_8_[0x18 - 0x8];
    unsigned int unknown_18_0_ : 5;
    unsigned int unknown_18_5_ : 7;
    unsigned int unknown_19_4_ : 20;
};
extern Struct_ov024_021fea1c data_ov024_021fea1c[];

// USA: func_ov024_021f58dc
extern "C" ARM int func_ov024_021f58dc(Struct_ov024_021f58dc_2* arg0, int arg1, Struct_ov024_021f58dc_3* arg2, int* arg3, short* arg4) {
    void* var0;
    Struct_ov024_021f58dc* var1 = (Struct_ov024_021f58dc*)((char*)arg0->unknown_0_ + 0x81b0);
    if (!var1) return 0;
    var0 = func_ov000_02160130();
    if (!var0) return 0;
    if (arg2->unknown_18_5_ == 0xc) {
        Struct_ov024_021fea1c var2;
        var2.unknown_0_[1] = data_ov024_021fea1c[30].unknown_0_[1];
        var2.unknown_0_[0] = data_ov024_021fea1c[30].unknown_0_[0];
        int var3 = func_ov000_0215fb54(arg0->unknown_0_, arg2->unknown_4_0_, &var2);
        for (int var4 = 0; var4 < var3; var4++) {
            if (!func_ov000_02162d88(var0, var2.unknown_0_[var4])) return 0;
        }
    }
    if (var1->unknown_1_0_ >= 2) return 0;
    *arg3 = 1;
    *arg4 = arg1;
    return 1;
}
