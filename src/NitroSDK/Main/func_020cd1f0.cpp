#include "Filesystem/OverlayFSManagement.h"
#include "Filesystem/FSInnerDefs.h"
#include "System/Cache.h"
#include "System/Memory.h"
#include "System/BiosData.h"
#include <globaldefs.h>



#if defined(jpn)
#define data_020f2e44 data_020f2e58
#define data_020f2290 data_020f23fc

#define func_020c0c3c func_020c2708
#endif

// might be some kind of overlay-like thing for download play
extern struct UnknownDownloadPlayStruct
{
    unsigned int unknown[5];
} data_020f2e44[];

#if defined(usa)
#define ADDR_FIRST_DOWNLOAD_PLAY_STRUCT 0x020f2e44
#elif defined(jpn)
#define ADDR_FIRST_DOWNLOAD_PLAY_STRUCT 0x020f2e58
#endif

extern struct {
    const void* pointer;
    unsigned int length;
} data_020f2290;

extern "C"
{
    int func_02000970(unsigned int);
    void func_020c9be0();
    void func_020c0c3c(UnknownDownloadPlayStruct*, unsigned, unsigned, unsigned char*, unsigned);
}

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020cd1f0
bool LoadCompressedOverlay(const OverlayMetadata &overlay, NitroVM *machine)
{
    NitroVM_Initialize(machine);
    NitroFileAccessor accessor;
    CreateFileAccessorForOverlay(&accessor, overlay);
    if (!NitroVM_PrepareReadFileByID(machine, accessor))
        return false;

    unsigned int cartridgeSize = GetOverlaySizeOnCartridge(overlay);
    InvalidateCacheAndZeroOverlay(overlay);
    if (NitroVM_ReadAsync(machine, (void*)overlay.loadAddress, cartridgeSize) != cartridgeSize)
    {
        NitroVM_FinishRead(machine);
        return false;
    }

    return true;
}

bool LoadCompressedOverlay(const OverlayMetadata& overlay);


bool VerifyDownloadPlayStruct(const UnknownDownloadPlayStruct& data,
    unsigned int loadAddress, unsigned int size);


void DecompressAndStaticInitializeOverlay(const OverlayMetadata& overlay);

