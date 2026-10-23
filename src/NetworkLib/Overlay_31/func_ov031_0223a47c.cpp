#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" ARM void func_020c9be0(void);
extern "C" ARM void func_ov031_02239368(int arg0);
extern "C" int func_020d503c(int arg0);
extern "C" void func_ov031_02239b98(short* arg0);

struct Struct_ov031_0223a47c { unsigned char unknown_0_[0x40]; int unknown_40_; };
struct Struct_ov031_02290d18_28 { unsigned char unknown_0_[4]; struct Struct_ov031_0223a47c* unknown_4_; };
extern struct Struct_ov031_02290d18_28 data_ov031_02290d18;

// USA: func_ov031_0223a47c
extern "C" ARM int func_ov031_0223a47c(void) {
    if (data_ov031_02290d18.unknown_4_->unknown_40_ != 1) {
        func_020c9be0();
    }
    func_ov031_02239368(3);
    int var0 = func_020d503c((int)func_ov031_02239b98);
    if (var0 == 2) {
        return 1;
    }
    func_ov031_02239368(9);
    return 0;
}
