#include <globaldefs.h>

struct Struct_ov023_021eea98 {
    #if defined(jpn)
    char unknown1_0_[0x8b8];
#else
    char unknown_0_[0x950];
#endif
    int unknown_950_;
};

struct Struct_ov023_021edf54 {
    #if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    struct Struct_ov023_021eea98* unknown_150_;
};

// USA: func_ov023_021eea98
extern "C" ARM int func_ov023_021eea98(struct Struct_ov023_021edf54* arg0) {
    struct Struct_ov023_021eea98* var0 = arg0->unknown_150_;
    return *(int*)((char*)var0 + (var0->unknown_950_ * 4) + 0x138);
}
