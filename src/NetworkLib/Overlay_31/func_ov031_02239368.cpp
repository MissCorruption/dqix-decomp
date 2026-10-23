#include <globaldefs.h>
#include "NitroSDK/RequestSubmission.h"

extern "C" ARM void func_ov031_02239368(int arg0);
extern "C" ARM void func_ov031_022393e4(int arg0);

struct Struct_ov031_02290d18_3 { unsigned char unknown_0_[4]; unsigned char* unknown_4_; };
extern Struct_ov031_02290d18_3 data_ov031_02290d18;

// USA: func_ov031_022398e8
extern "C" ARM int func_ov031_022398e8(void) {
    func_ov031_02239368(6);
    int var0 = func_020d68b4(data_ov031_02290d18.unknown_4_ + 0x1e00, 0xd);
    if (var0 == 2) {
        return 1;
    }
    func_ov031_022393e4(var0);
    return 0;
}
