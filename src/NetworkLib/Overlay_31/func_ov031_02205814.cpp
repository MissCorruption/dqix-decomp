#include <globaldefs.h>

extern "C" int func_ov031_02207180(void* arg0);
extern "C" ARM int func_ov031_02205814(void* arg0);

struct Struct_ov031_022056bc {
    char unknown_0_[0x70];
    short unknown_70_;
    char unknown_72_;
    signed char unknown_73_;
    short unknown_74_;
};

// USA: func_ov031_022056bc
extern "C" ARM int func_ov031_022056bc(Struct_ov031_022056bc* arg0, int arg1) {
    if (func_ov031_02207180(arg0)) {
        return ~0x1b;
    }
    int var0 = 0;
    if (arg0 == NULL) goto checkFlag;
    if (!(arg0->unknown_70_ & 1)) goto checkFlag;
    var0 = 1;
checkFlag:
    if (!var0) {
        return ~0x26;
    }
    if (arg0->unknown_70_ & 2) {
        return ~6;
    }
    arg0->unknown_74_ = (short)arg1;
    if (arg0->unknown_73_ != 1) {
        return 0;
    }
    return func_ov031_02205814(arg0);
}
