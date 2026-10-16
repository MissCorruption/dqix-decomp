#include <globaldefs.h>
#include "Filesystem/NitroVM.h"

int NitroVM_ReadSync(NitroVM* vm, void* dst, int capacity);
int NitroVM_Seek(NitroVM* vm, int position, int whence);

struct ArchiveFileInfo020bd7c4 {
    unsigned long offset;
    unsigned long size;
    void* mem;
    unsigned long reserved;
};

struct ArchiveFat020bd7c4 {
    unsigned long kind;
    unsigned long blockSize;
    unsigned long count;
    ArchiveFileInfo020bd7c4 files[1];
};

struct SoundArchive020bd7c4 {
    char header[0x34];
    NitroVM file;
    char unknown_7c[8];
    ArchiveFat020bd7c4* fat;
    void* symbol;
    void* info;
    long loadBlockSize;
};

extern SoundArchive020bd7c4* data_02110370;

// USA: func_020bd7c4
extern "C" ARM long func_020bd7c4(unsigned long fileId, void* buffer, long size, long offset) {
    long total;
    long blockSize;
    long readSize;
    SoundArchive020bd7c4* arc;
    long result;

    arc = data_02110370;
    if (fileId >= arc->fat->count)
        return -1;

    const ArchiveFileInfo020bd7c4* file = &arc->fat->files[fileId];

    blockSize = arc->loadBlockSize;
    if (blockSize == 0)
        blockSize = size;

    total = 0;
    if (total < size) do {
        readSize = size - total;
        if (readSize > blockSize)
            readSize = blockSize;
        if (readSize > file->size - offset)
            readSize = (long)(file->size - offset);
        if (readSize == 0)
            break;

        if (!NitroVM_Seek(&arc->file, (long)(file->offset + offset), 0))
            return -1;

        result = NitroVM_ReadSync(&arc->file, buffer, readSize);
        if (result < 0)
            return result;

        total += result;
        offset += result;
        buffer = (unsigned char*)buffer + result;
    } while (total < size);
    return total;
}
