#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/OverlayId.h"

extern int data_ov000_02184220;
extern "C" void func_020a1fd4(unsigned char arg0);

#if defined(jpn)
enum { Enum_ov000_02160e48_3752 = 0xe24, Enum_ov000_02160e48_30512 = 0x7920 };
#else
enum { Enum_ov000_02160e48_3752 = 0xea8, Enum_ov000_02160e48_30512 = 0x7730 };
#endif

// USA: func_ov000_02160e48
extern "C" ARM void func_ov000_02160e48(void* arg0) {
    *(int*)((char*)arg0 + Enum_ov000_02160e48_3752) = 0x13;
    *(int*)((char*)arg0 + Enum_ov000_02160e48_3752 + 4) = 0;
    data_ov000_02184220 = 1;
    *(short*)((char*)arg0 + Enum_ov000_02160e48_30512) = BackgroundLoader::GetInstance()->QueueLoadOverlay(OVERLAY_ID(25));
    func_020a1fd4(4);
}
