#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

extern "C" void func_ov023_021e13b0(void* arg0, void* arg1, int arg2);

struct Struct_ov023_021ffa34 {
    short unknown_0_;
    short unknown_2_;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
};
extern struct Struct_ov023_021ffa34 data_ov023_021ffa34;

// USA: func_ov023_021e1194
extern "C" ARM int func_ov023_021e1194(struct Struct_0201c1c8* arg0) {
    short var0 = (short)((Script::Parameter*)arg0)->ToInt();
    if (data_ov023_021ffa34.unknown_4_ != 0 && data_ov023_021ffa34.unknown_0_ != 0) {
        func_ov023_021e13b0(data_ov023_021ffa34.unknown_c_, data_ov023_021ffa34.unknown_8_, data_ov023_021ffa34.unknown_0_);
    } else {
        func_ov023_021e13b0(data_ov023_021ffa34.unknown_c_, data_ov023_021ffa34.unknown_8_, var0);
    }
    return 1;
}
