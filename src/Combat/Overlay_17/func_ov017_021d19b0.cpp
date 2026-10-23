#include <globaldefs.h>
#include "World/ZoneChest.h"

extern "C" void* func_02012fe4(void);
struct Struct_020fdd44;
extern "C" struct Struct_020fdd44* func_02027ca4(void);
extern "C" struct Struct_020fdd44* func_02028bd0(struct Struct_020fdd44* arg0, int arg1);

struct Struct_02018300_2;
extern "C" void func_02028c64(struct Struct_02018300_2* arg0, int arg1);

struct Struct_ov017_021d19b0 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned int unknown_8_;
};

// USA: func_ov017_021d19b0
extern "C" ARM void func_ov017_021d19b0(int arg0, struct Struct_ov017_021d19b0* arg1) {
    Zone3D* var0 = (Zone3D*)func_02012fe4();
    if (arg1->unknown_4_ == var0->currentZoneID_) {
        Struct_020134e0::Struct_02018300* var1 = func_02018c20(var0, arg1->unknown_6_);
        if (var1 == NULL)
            return;
        func_02018300(var0, var1, arg1->unknown_8_, 0, 0);
    } else {
        struct Struct_020fdd44* var2 = func_02027ca4();
        struct Struct_020fdd44* var3 = func_02028bd0(var2, arg1->unknown_4_);
        if (var3 == NULL)
            return;
        func_02028c64((struct Struct_02018300_2*)var3, arg1->unknown_6_);
    }
}
