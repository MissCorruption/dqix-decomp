#include "Filesystem/FSInnerDefs.h"
#include "System/Memory.h"
#include <globaldefs.h>

#if defined(jpn)
#define data_020f2288 data_020f23f4
#endif

#define NITROFS_ID_INVALID 0x10000
extern unsigned char data_020f2288[];

// USA: func_020cb764 // KEEP-NAME
int NitroVM_DefaultCommand_GetPath(NitroVM* vm)
{
    NitroHandle* const handle = vm->linkedHandle;
    FileDataStore entry;
    NitroVM tmp;
    unsigned int dirID;
    unsigned int fileID;
    unsigned int id;
    unsigned int len;

    NitroVM_Initialize(&tmp);
    tmp.linkedHandle = vm->linkedHandle;

    if (GET_FLAG_BIT(vm->flags, NITROVM_FLAG_SEARCH_TARGET_IS_DIRECTORY))
    {
        dirID = vm->dirInfo.accessor.dirID;
        fileID = NITROFS_ID_INVALID;
    }
    else
    {
        fileID = vm->fileInfo.fileID;
        if (vm->args_GetPath.numBytesWritten != 0)
        {
            dirID = vm->args_GetPath.directoryID;
        }
        else
        {
            unsigned int pos = 0;
            unsigned int numDirs = 0;
            dirID = NITROFS_ID_INVALID;

            do
            {
                NitroVM_LoadDirectoryDataByIndex(&tmp, pos);
                if (!pos)
                    numDirs = tmp.dirInfo.parentID;

                tmp.args_GetFileOrDirectoryNameData.output = &entry;
                tmp.args_GetFileOrDirectoryNameData.skipStoreString = 1;

                while (NitroVM_ExecuteCommand(&tmp, NITROVM_OPCODE_GET_FILE_OR_DIRECTORY_NAME_DATA) == NITRO_RESULT_SUCCESS)
                {
                    if (!entry.isDirectory && (entry.file.fileID == fileID))
                    {
                        dirID = tmp.dirInfo.accessor.dirID;
                        break;
                    }
                }
            } while ((dirID == NITROFS_ID_INVALID) && (++pos < numDirs));
        }
    }

    if (dirID == NITROFS_ID_INVALID)
    {
        vm->args_GetPath.numBytesWritten = 0;
        return NITRO_RESULT_FAILURE;
    }

    if (vm->args_GetPath.numBytesWritten == 0)
    {
        len = 0;

        if (handle->signature <= 0x000000FF)
            len += 1;
        else if (handle->signature <= 0x0000FF00)
            len += 2;
        else
            len += 3;
        len += 1 + 1;

        if (fileID != NITROFS_ID_INVALID)
            len += entry.stringLength;

        id = dirID;

        if (id != 0)
        {
            NitroVM_LoadDirectoryDataByIndex(&tmp, id);

            do
            {
                NitroVM_LoadDirectoryDataByIndex(&tmp, tmp.dirInfo.parentID);
                tmp.args_GetFileOrDirectoryNameData.output = &entry;
                tmp.args_GetFileOrDirectoryNameData.skipStoreString = 1;
                while (NitroVM_ExecuteCommand(&tmp, NITROVM_OPCODE_GET_FILE_OR_DIRECTORY_NAME_DATA) == NITRO_RESULT_SUCCESS)
                {
                    if (entry.isDirectory && (entry.dir.dirID == id))
                    {
                        len += entry.stringLength + 1;
                        break;
                    }
                }
                id = tmp.dirInfo.accessor.dirID;
            } while (id != 0);
        }

        vm->args_GetPath.numBytesWritten = (unsigned short)(len + 1);
        vm->args_GetPath.directoryID = (unsigned short)dirID;
    }

    if (!vm->args_GetPath.pathOutput)
        return NITRO_RESULT_SUCCESS;

    unsigned int total = vm->args_GetPath.numBytesWritten;
    if (vm->args_GetPath.outputCapacity < total)
        return NITRO_RESULT_FAILURE;

    else
    {
        unsigned char* dst = (unsigned char*)vm->args_GetPath.pathOutput;
        unsigned int pos = 0;

        if (handle->signature <= 0x000000FF)
            len = 1;
        else if (handle->signature <= 0x0000FF00)
            len = 2;
        else
            len = 3;

        VectorizedInvertedMemcpy(&handle->signature, dst + pos, len);
        pos += len;

        VectorizedInvertedMemcpy(data_020f2288, dst + pos, 2);
        pos += 2;

        id = dirID;
        NitroVM_LoadDirectoryDataByIndex(&tmp, id);

        if (fileID != NITROFS_ID_INVALID)
        {
            tmp.args_GetFileOrDirectoryNameData.output = &entry;
            tmp.args_GetFileOrDirectoryNameData.skipStoreString = 0;
            while (NitroVM_ExecuteCommand(&tmp, NITROVM_OPCODE_GET_FILE_OR_DIRECTORY_NAME_DATA) == NITRO_RESULT_SUCCESS)
            {
                if (!entry.isDirectory && (entry.file.fileID == fileID))
                    break;
            }
            len = entry.stringLength + 1;
            VectorizedInvertedMemcpy(entry.name, dst + total - len, len);
            total -= len;
        }
        else
        {
            *(dst + total - 1) = '\0';
            total -= 1;
        }

        if (id != 0)
        {
            do
            {
                NitroVM_LoadDirectoryDataByIndex(&tmp, tmp.dirInfo.parentID);
                tmp.args_GetFileOrDirectoryNameData.output = &entry;
                tmp.args_GetFileOrDirectoryNameData.skipStoreString = 0;

                *(dst + total - 1) = '/';
                total -= 1;

                while (NitroVM_ExecuteCommand(&tmp, NITROVM_OPCODE_GET_FILE_OR_DIRECTORY_NAME_DATA) == NITRO_RESULT_SUCCESS)
                {
                    if (entry.isDirectory && (entry.dir.dirID == id))
                    {
                        len = entry.stringLength;
                        VectorizedInvertedMemcpy(entry.name, dst + total - len, len);
                        total -= len;
                        break;
                    }
                }
                id = tmp.dirInfo.accessor.dirID;
            } while (id != 0);
        }
    }

    return NITRO_RESULT_SUCCESS;
}
