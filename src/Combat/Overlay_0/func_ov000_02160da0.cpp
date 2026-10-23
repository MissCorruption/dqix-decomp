#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/OverlayId.h"

extern int data_ov000_02184220;

struct Struct_ov000_02160da0 {
#if defined(jpn)
    char unknown_0_[0xe24];
#else
    char unknown1_0_[0xea8];
#endif
    int unknown_ea8_;
    int unknown_eac_;
#if defined(jpn)
    char unknown_e2c_[0x7920 - 0xe2c];
#else
    char unknown_eb0_[0x7730 - 0xeb0];
#endif
    short unknown_7730_;
};

// USA: func_ov000_02160da0
extern "C" ARM void func_ov000_02160da0(Struct_ov000_02160da0* arg0) {
    arg0->unknown_ea8_ = 0x12;
    arg0->unknown_eac_ = 0;
    data_ov000_02184220 = 1;
    arg0->unknown_7730_ = BackgroundLoader::GetInstance()->QueueLoadOverlay(OVERLAY_ID(24));
}
