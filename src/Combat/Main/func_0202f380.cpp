#include <globaldefs.h>

struct Struct_0202f380 { char unknown_0_[8]; int unknown_8_; char unknown_c_[8]; int unknown_14_; };

// USA: func_0202f380
extern "C" ARM void func_0202f380(void* arg0, int arg1) {
    Struct_0202f380* var0 = *(Struct_0202f380**)((char*)arg0 + 0x440);
    if (arg1 == 0) arg1 = 1;
    if (var0 == 0) return;
    switch (var0->unknown_8_) {
    case 1:
        var0->unknown_8_ = 2;
        (*(Struct_0202f380**)((char*)arg0 + 0x440))->unknown_14_ = 0x1000;
        break;
    case 3:
        var0->unknown_14_ -= arg1 * 0x199;
        if ((*(Struct_0202f380**)((char*)arg0 + 0x440))->unknown_14_ <= 0) {
            (*(Struct_0202f380**)((char*)arg0 + 0x440))->unknown_8_ = 0;
            (*(Struct_0202f380**)((char*)arg0 + 0x440))->unknown_14_ = 0;
        }
        break;
    case 0:
    case 2:
    default:
        return;
    }
}
