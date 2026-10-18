#include "Filesystem/OverlayFSManagement.h"
#include "Filesystem/FSInnerDefs.h"
#include "System/BiosData.h"
#include "System/Memory.h"
#include <globaldefs.h>

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020cd0f4
ARM bool LoadOverlayMetadata(OverlayMetadata* into, bool isArm7, unsigned int idx)
{
    Struct_0211173c::ArmOverlayDataTableData* const pr = (!isArm7) ? &data_0211173c.arm9Data : &data_0211173c.arm7Data;

    if (pr->start)
    {
        const unsigned int pos = idx * 0x20;

        if (pos >= pr->size)
        {
            return false;
        }
        else
        {
            VectorizedInvertedMemcpy((const void*)((unsigned int)pr->start + pos), into, 0x20);
            into->isArm7 = isArm7;

            {
                NitroVM vm[1];
                NitroVM_Initialize(vm);

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
            return true;
        }
    }
    else
    {
        const CartridgeHeader::OverlayTableValues* ovt =
            &((const CartridgeHeader*)BIOS_ADDR_CARTRIDGE_HEADER)->overlayTableValues;
        return LoadOverlayMetadataFromNitro(into, isArm7, idx, &data_02111754,
            ovt->arm9TableStart, ovt->arm9TableSize, ovt->arm7TableStart, ovt->arm7TableSize);
    }
}
