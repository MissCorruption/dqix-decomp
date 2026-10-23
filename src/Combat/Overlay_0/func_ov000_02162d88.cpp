#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0xe34
#else
#define REGION_OFFSET_0 0xeb8
#endif


struct Struct_ov000_02162d88 { char unknown_0_[2]; short unknown_2_; };

// USA: func_ov000_02162d88
extern "C" ARM void* func_ov000_02162d88(void* arg0, short arg1) {
    int var0;
    for (var0 = 0; var0 < 4; var0++) {
        struct Struct_ov000_02162d88* var1 = *(struct Struct_ov000_02162d88**)((char*)arg0 + var0 * 4 + REGION_OFFSET_0);
        if (var1 == 0) continue;
        if (arg1 == var1->unknown_2_) return var1;
    }
    return 0;
}
