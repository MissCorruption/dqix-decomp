#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020dbcc4_2112 = 0x860 };
#else
enum { Enum_020dbcc4_2112 = 0x840 };
#endif

#include "GameState/GameState.h"

extern "C" void* func_02012fe4(void);
extern "C" void* func_0202ae24(void);
struct Struct_0205e7d0;
extern "C" int func_0205e7d0(struct Struct_0205e7d0* arg0);
extern "C" int func_ov017_021d3d40(void* arg0, int arg1, int arg2, unsigned char arg3, int arg4);

struct Struct_020dbcc4 {
    unsigned char unknown_0_[1];
    unsigned char unknown_1_;
    unsigned char unknown_2_[6];
    unsigned char unknown_8_;
    unsigned char unknown_9_[3];
    int unknown_c_;
    int unknown_10_;
};

// USA: func_020dbcc4
extern "C" ARM void func_020dbcc4(struct Struct_020dbcc4* arg0, void* arg1) {
    int var0;
    int var1;
    GameState::GetInstance();
    char* var2 = (char*)func_02012fe4() + Enum_020dbcc4_2112;
    if (arg0->unknown_10_ != 0) return;
    if (func_0205e7d0((struct Struct_0205e7d0*)func_0202ae24()) < 0x76) return;

    var0 = 0;
    for (var1 = 0; var1 < 4; var1++) {
        int var3 = arg0->unknown_c_;
        if (var3 + 0xd > 0x1b30) {
            var0 = 1;
            func_ov017_021d3d40(var2 + var3, (0x1b30 - var3) & 0xff, 1, arg0->unknown_8_, var3);
            break;
        } else {
            func_ov017_021d3d40(var2 + var3, 0xd, 0, arg0->unknown_8_, var3);
            arg0->unknown_c_ = arg0->unknown_c_ + 0xd;
        }
    }

    if (var0 != 0) {
        arg0->unknown_1_ = 1;
    }
}
