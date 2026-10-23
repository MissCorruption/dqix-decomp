#include <globaldefs.h>
#include "Resource/CharacterCreationUI.h"
#include "Input/Input.h"

struct Struct_0205d81c;
struct Struct_0205d0e0 {
    unsigned char unknown_0_[0xac];
    short unknown_ac_, unknown_ae_;
};
extern "C" Struct_0205d0e0* func_0205d81c(Struct_0205d81c* arg0, int arg1);

#if defined(jpn)
enum { Enum_ov023_021e63bc_4977 = 0x1341, Enum_ov023_021e63bc_172 = 0x90 };
#else
enum { Enum_ov023_021e63bc_4977 = 0x1371, Enum_ov023_021e63bc_172 = 0xac };
#endif
namespace {
struct Struct_ov023_021e63bc {
    unsigned char unknown_0_[Enum_ov023_021e63bc_172];
    Struct_ov023_021d9c7c unknown_ac_;
    unsigned char unknown_168_[Enum_ov023_021e63bc_4977 - Enum_ov023_021e63bc_172 - sizeof(Struct_ov023_021d9c7c)];
    unsigned char unknown_1371_;
};
}

// USA: func_ov023_021e63bc
// JPN: func_ov023_021e6630
extern "C" ARM int func_ov023_021e63bc(unsigned char* arg0) {
    Struct_ov023_021e63bc* var0 = ((Struct_ov023_021e63bc*)(arg0));
    int var1 = var0->unknown_1371_;
    Struct_0205d0e0* var2 = func_0205d81c(((Struct_0205d81c*)(&var0->unknown_ac_)), var1);
    int var3 = g_touchInput.prevX_;
    int var4 = var2->unknown_ac_;
    int var5 = var2->unknown_ae_;
    var4 = (short)(var4 << 3) + 0xa;
    var5 = (short)(var5 << 3) + 0x10;
    int var6 = g_touchInput.prevY_;
    if (var4 <= var3 && var3 <= var4 + 0x10 && var5 <= var6 && var6 <= var5 + 8)
        return 1;
    if (var4 <= var3 && var3 <= var4 + 0x10 && var5 + 0xc <= var6 && var6 <= var5 + 0x14)
        return -1;
    return 0;
}
