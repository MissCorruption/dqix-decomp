#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

#if defined(jpn)
enum { Enum_ov025_021e8748_28636 = 0x71cc, Enum_ov025_021e8748_29144 = 0x71d8 };
#else
enum { Enum_ov025_021e8748_28636 = 0x6fdc, Enum_ov025_021e8748_28648 = 0x6fe8 };
#endif

struct Struct_ov025_021e8748 {
    char unknown_0_[Enum_ov025_021e8748_28636];
    Vector3i unknown_6fdc_;
    unsigned char unknown_6fe8_;
};
extern "C" Struct_ov025_021e8748* func_ov000_02160130(void);

struct Struct_ov025_021e8748_2 {
    char unknown_0_[8];
    Vector3i unknown_8_;
};

// USA: func_ov025_021e8748
extern "C" ARM int func_ov025_021e8748(struct Struct_ov025_021e8748_2* arg0) {
    Struct_ov025_021e8748* var0 = func_ov000_02160130();
    if (var0) {
        Vector3i var1 = arg0->unknown_8_;
        var0->unknown_6fdc_ = var1;
        var0->unknown_6fe8_ = 1;
    }
    return 1;
}
