#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/Overlay_33/Ov33BackgroundLoader.h"
#include "NitroSDK/OverlayId.h"

extern "C" void func_020a1940(unsigned int id);
extern char data_0211e33c;

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020d6c68
ARM void GuardedNotifyOverlay0211e33c020d6c68() {
    if (BackgroundLoader::GetInstance() != NULL) {
        return;
    }
    func_020a1940(OVERLAY_ID(34));
    PopulateOv33BackgroundLoader(&data_0211e33c, 0x30000, 0x14);
}
