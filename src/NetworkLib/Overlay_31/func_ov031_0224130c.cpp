#include <globaldefs.h>

extern "C" ARM void func_ov031_0224130c(void);
extern "C" ARM void func_ov031_02241318(void);
struct Struct_ov031_022078f0;
extern "C" ARM int func_ov031_022078f0(Struct_ov031_022078f0* arg0, void* arg1);
extern "C" ARM int func_ov031_02207434(int arg0);
extern "C" ARM int func_ov031_022071d8(int arg0, int arg1);

struct Struct_ov031_02241338 {
    char unknown_0_[0x810];
    void (*unknown_810_)(void);
    int unknown_814_;
    int unknown_818_;
};

struct Struct_ov031_02241338_2 {
    char unknown_0_[0x8];
    int unknown_8_;
    char unknown_c_[0x18 - 0xc];
    int unknown_18_;
    int unknown_1c_;
    Struct_ov031_02241338* unknown_20_;
};

// USA: func_ov031_02241338
extern "C" ARM int func_ov031_02241338(Struct_ov031_02241338_2* arg0) {
    typedef int (*Type_ov031_02241338)(int, int, int);
    int var0 = ((Type_ov031_02241338)func_ov031_022071d8)(2, 1, 0);
    if (var0 >= 0) {
        if (arg0->unknown_8_ != 0) {
            func_ov031_02241318();
            arg0->unknown_20_->unknown_814_ = arg0->unknown_1c_;
            arg0->unknown_20_->unknown_818_ = arg0->unknown_18_;
            arg0->unknown_20_->unknown_810_ = func_ov031_0224130c;
            if (func_ov031_022078f0((Struct_ov031_022078f0*)var0, arg0->unknown_20_) < 0) {
                func_ov031_02207434(var0);
                var0 = -1;
            }
        }
    }
    return var0;
}
