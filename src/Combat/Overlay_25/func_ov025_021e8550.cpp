#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e8550_6400 = 0x1800, Enum_ov025_021e8550_218 = 0x0 };
#else
enum { Enum_ov025_021e8550_6400 = 0x1900, Enum_ov025_021e8550_218 = 0xda };
#endif

extern "C" int func_020421a0(void);

struct Struct_ov025_021e8550 { char unknown_0_[8]; short unknown_8_; };

// USA: func_ov025_021e8550
extern "C" ARM int func_ov025_021e8550(struct Struct_ov025_021e8550* arg0) {
    short var0 = arg0->unknown_8_;
    int var1 = func_020421a0();
    *(short*)((char*)var1 + Enum_ov025_021e8550_6400 + Enum_ov025_021e8550_218) = var0;
    return 1;
}
