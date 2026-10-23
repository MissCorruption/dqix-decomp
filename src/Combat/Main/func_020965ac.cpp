#include <globaldefs.h>

struct Struct_02065990_3 { unsigned char unknown_0_[0xac]; unsigned char unknown_ac_[0xcc]; };

// USA: func_020965ac
extern "C" ARM unsigned char func_020965ac(Struct_02065990_3* arg0, unsigned char arg1) {
    if (arg1 < 0xcc) {
        return arg0->unknown_ac_[arg1];
    }
    return 0xff;
}
