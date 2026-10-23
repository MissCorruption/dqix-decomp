#include <globaldefs.h>
#include "Graphics/Vector.h"

#if defined(jpn)
enum { Enum_ov023_021f7d48_80 = 0x4c, Enum_ov023_021f7d48_78 = 0x4e };
#else
enum { Enum_ov023_021f7d48_80 = 0x50, Enum_ov023_021f7d48_82 = 0x52 };
#endif

struct Struct_ov023_021f7d48 {
    unsigned char unknown_0_[Enum_ov023_021f7d48_80];
    short unknown_50_;
    short unknown_52_;
};

// USA: func_ov023_021f7d48
extern "C" ARM Vector3fix func_ov023_021f7d48(void* arg0) {
    const Struct_ov023_021f7d48* var0 = (const Struct_ov023_021f7d48*)arg0;
    Vector3fix var1;
    var1.x = var0->unknown_50_ * 4096;
    var1.y = var0->unknown_52_ * 4096;
    var1.z = 0;
    return var1;
}
