#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

#if defined(jpn)
enum { Enum_ov003_021685dc_1444 = 0x5a0 };
#else
enum { Enum_ov003_021685dc_1444 = 0x5a4 };
#endif

struct Struct_ov003_021685dc { char unknown_0_[Enum_ov003_021685dc_1444]; unsigned char unknown_5a4_; unsigned char unknown_5a5_; };

// USA: func_ov003_021685dc
extern "C" ARM void func_ov003_021685dc(Struct_ov003_021685dc* arg0) {
    if (arg0->unknown_5a4_ == 0) return;
    if (arg0->unknown_5a5_ == 0) {
        Struct_0208cb08* var0 = func_02094a00();
        func_02094b34(var0, 0x1f5, 0x66, 0, 0);
        arg0->unknown_5a5_ = arg0->unknown_5a5_ + 1;
    } else if (arg0->unknown_5a5_ == 1) {
        if (func_02094b4c(func_02094a00()) != 0) {
            arg0->unknown_5a4_ = 0;
            arg0->unknown_5a5_ = 0;
        }
    }
}
