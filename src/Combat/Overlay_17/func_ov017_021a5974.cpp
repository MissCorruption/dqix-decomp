#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_02038598_5;
extern "C" int func_02046b60(struct Struct_02038598_5* arg0, int arg1);
extern "C" void func_ov002_021556fc(int arg0);
extern "C" void func_020a1e54(int arg0);
extern "C" void func_020a1f4c(int arg0);
extern "C" void func_ov017_021a55b0(void* arg0);

extern int data_ov017_021d83ac;

// USA: func_ov017_021a5974
extern "C" ARM void func_ov017_021a5974(char* arg0) {
#if defined(jpn)
 enum {Enum_ov017_021a5974_14076=0x34ec};
#else
 enum {Enum_ov017_021a5974_14076=0x36fc};
#endif
    int var0 = data_ov017_021d83ac;
    if (var0 != 0) {
        func_ov002_021556fc(var0);
        data_ov017_021d83ac = 0;
    }
    int var1 = (int)GetGameResources();
    struct Struct_02038598_5* var2 = *(struct Struct_02038598_5**)(var1 + Enum_ov017_021a5974_14076);
    if (var2 != NULL
        && (func_02046b60(var2, 0x2) || func_02046b60(var2, 0x2f) || func_02046b60(var2, 0x2d)))
    {
        func_020a1e54(0);
        func_020a1f4c(0);
    } else {
        func_020a1e54(1);
        func_020a1f4c(1);
    }
    func_ov017_021a55b0(arg0);
    arg0[0x1] = 1;
}
