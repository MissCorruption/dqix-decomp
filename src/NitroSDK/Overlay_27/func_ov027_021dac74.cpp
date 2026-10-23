#include <globaldefs.h>
#include "NitroSDK/Filesystem/NitroVM.h"
#include "NitroSDK/Filesystem/FileAccessor.h"
#include "NitroSDK/Filesystem/LowNitroHandle.h"

#pragma optimize_for_size off

// USA: func_ov027_021dac74
extern "C" ARM CBool func_ov027_021dac74(const char* arg0, void* arg1, int arg2)
{
    unsigned int var0 = arg2 ? 0x200 : 0x20;
    char* var1 = arg2 ? (char*)arg1 + 0x20 : (char*)arg1;

    if (arg0 == NULL)
        return false;

    NitroVM var2;
    NitroVM_Initialize(&var2);

    if (!NitroVM_PrepareReadFileByPath(&var2, arg0))
        return false;

    unsigned int var3 = var2.fileInfo.unknown_8_ - var2.fileInfo.unknown_4_;
    if (var0 != var3)
    {
        NitroVM_FinishRead(&var2);
        return false;
    }

    NitroVM_ReadSync(&var2, var1, var0);
    NitroVM_FinishRead(&var2);
    return true;
}
