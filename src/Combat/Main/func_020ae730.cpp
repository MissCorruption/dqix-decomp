#include <globaldefs.h>

#include "World/Zone3D.h"

extern "C" void* func_02012fe4(void);
extern "C" void func_020ae694(int arg0, int arg1, unsigned short arg2);
extern "C" void func_020ae4ec(int arg0, int arg1);

// USA: func_020ae730
extern "C" ARM void func_020ae730(int arg0) {
    if (((Zone3D*)func_02012fe4())->currentZoneID_ != 0x1edd) {
        return;
    }
    Zone3D* var0 = (Zone3D*)func_02012fe4();
    Struct_020134e0::Struct_02018300* var1 = func_0201e664(&var0->substruct_6c_, 3);
    Struct_020134e0::Struct_02018300* var2 = func_0201e664(&var0->substruct_6c_, 4);
    if (var1 == NULL || var2 == NULL) {
        return;
    }
    if (arg0 != 0) {
        var1->unknown_28_ &= ~8;
        var2->unknown_28_ &= ~8;
    } else {
        var1->unknown_28_ |= 8;
        var2->unknown_28_ |= 8;
    }
    func_020ae694(arg0, 0, 0x10);
    func_020ae4ec(6, arg0 != 0);
}
