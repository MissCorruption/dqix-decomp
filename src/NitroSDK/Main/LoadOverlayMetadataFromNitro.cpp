#include "Filesystem/OverlayFSManagement.h"
#include "Filesystem/FSInnerDefs.h"
#include <globaldefs.h>

struct RomRegion
{
    unsigned int offset;
    unsigned int length;
};

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020ccffc
ARM bool LoadOverlayMetadataFromNitro(OverlayMetadata* into, bool isArm7,
    unsigned int overlayIdx, NitroHandle* romHandle,
    unsigned int arm9OverlayTableStart, unsigned int arm9OverlayTableSize,
    unsigned int arm7OverlayTableStart, unsigned int arm7OverlayTableSize)
{
    RomRegion pr[1];
    unsigned int pos;

    if (!isArm7)
    {
        pr->offset = arm9OverlayTableStart;
        pr->length = arm9OverlayTableSize;
    }
    else
    {
        pr->offset = arm7OverlayTableStart;
        pr->length = arm7OverlayTableSize;
    }

    pos = overlayIdx * 0x20;

    if (pos >= pr->length)
    {
        return false;
    }
    else
    {
        NitroVM vm[1];
        NitroVM_Initialize(vm);

        if (!NitroVM_PrepareRead(vm, romHandle, pr->offset + pos, pr->offset + pr->length, (unsigned int)~0))
        {
            return false;
        }
        else
        {
            if (NitroVM_ReadSync(vm, into, 0x20) != 0x20)
            {
                NitroVM_FinishRead(vm);
                return false;
            }

            NitroVM_FinishRead(vm);
            into->isArm7 = isArm7;

            NitroFileAccessor accessor;
            CreateFileAccessorForOverlay(&accessor, *into);
            if (!NitroVM_PrepareReadFileByID(vm, accessor))
            {
                return false;
            }
            else
            {
                into->romStorageOffset = vm->fileInfo.startOffset;
                into->romStorageSize = vm->fileInfo.endOffset - vm->fileInfo.startOffset;
                NitroVM_FinishRead(vm);
            }
        }
    }

    return true;
}
