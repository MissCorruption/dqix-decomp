#include <globaldefs.h>

struct Struct_ov000_02155a04 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned short unknown_4_; };

// USA: func_ov000_02155a04
extern "C" ARM float func_ov000_02155a04(char* arg0) {
    struct Struct_ov000_02155a04* var0 = *(struct Struct_ov000_02155a04**)(arg0 + 0x138);
    if ((float)var0->unknown_0_ == 0.0f) return 0.0f;
    return (float)var0->unknown_0_ / (float)var0->unknown_4_;
}
