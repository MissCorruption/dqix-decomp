#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };

struct Struct_021e12cc {
    int unknown_0_;
    int unknown_4_;
    short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    unsigned char unknown_e_0_ : 1;
    unsigned char unknown_e_1_ : 1;
    unsigned char unknown_e_2_ : 6;
    unsigned char unknown_f_;
};
extern "C" void func_ov023_021e12cc(struct Struct_021e12cc* arg0);
extern "C" void func_ov023_021e1410(void* arg0, struct Struct_021e12cc* arg1);

struct Struct_ov023_021ffa34_2 {
    short unknown_0_;
    short unknown_2_;
    short* unknown_4_;
    int unknown_8_;
    void* unknown_c_;
};
extern struct Struct_ov023_021ffa34_2 data_ov023_021ffa34;

// USA: func_ov023_021e11ec
extern "C" ARM int func_ov023_021e11ec(void* arg0) {
    struct Struct_0201c1c8* var0 = (struct Struct_0201c1c8*)arg0;
    short var1 = (short)((Script::Parameter*)var0)->ToInt();

    if (data_ov023_021ffa34.unknown_4_ != 0 && data_ov023_021ffa34.unknown_0_ != 0) {
        int var2 = 0;
        short var3;
        for (var3 = 0; var3 < data_ov023_021ffa34.unknown_0_; var3++) {
            if (var1 == data_ov023_021ffa34.unknown_4_[var3]) {
                var2 = 1;
                break;
            }
        }
        if (var2 == 0) return 1;
    }

    struct Struct_021e12cc var4;
    func_ov023_021e12cc(&var4);
    var4.unknown_8_ = var1;
    var4.unknown_a_ = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)var0 + 8)))->ToInt();
    var4.unknown_c_ = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)var0 + 0x10)))->ToInt();
    var4.unknown_e_2_ = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)var0 + 0x18)))->ToInt();
    var4.unknown_f_ = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)var0 + 0x20)))->ToInt();
    func_ov023_021e1410(data_ov023_021ffa34.unknown_c_, &var4);
    return 1;
}
