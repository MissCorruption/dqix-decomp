#include <globaldefs.h>
#include "NitroSDK/Filesystem/NitroVM.h"

struct Obj020bda58;

int NitroVM_ReadSync(NitroVM* vm, void* dst, int capacity);
int NitroVM_Seek(NitroVM* vm, int position, int whence);
typedef void (*NNSSndHeapDisposeCallback)(void* mem, unsigned int size, unsigned int data1, unsigned int data2);
void* AllocateAndLinkEntry020bda58(Obj020bda58* heap, unsigned int size, NNSSndHeapDisposeCallback callback, int data1, int data2);
void ClearField0x8cCallback_020bd8f0(void*, void*, void*);
void ClearField0x84Callback_020bd8fc(void*, void*, void*);
void ClearField0x88Callback_020bd908(void*, void*, void*);

struct ArchiveHeader020bd190 {
    char fileHeader[0x10];
    unsigned long symbolDataOffset;
    unsigned long symbolDataSize;
    unsigned long infoOffset;
    unsigned long infoSize;
    unsigned long fatOffset;
    unsigned long fatSize;
    unsigned long fileImageOffset;
    unsigned long fileImageSize;
};

struct SoundArchive020bd190 {
    ArchiveHeader020bd190 header;
    int fileOpen;
    NitroVM file;
    char unknown_7c[8];
    void* fat;
    void* symbol;
    void* info;
    long loadBlockSize;
};

// USA: func_020bd190
extern "C" ARM int func_020bd190(SoundArchive020bd190* arc, Obj020bda58* heap, int symbolLoadFlag) {
    int result;
    long readSize;

    result = NitroVM_Seek(&arc->file, 0, 0);
    if (!result)
        return 0;

    readSize = NitroVM_ReadSync(&arc->file, &arc->header, sizeof(arc->header));
    if (readSize != sizeof(arc->header))
        return 0;

    if (heap != NULL) {
        arc->info = AllocateAndLinkEntry020bda58(heap, arc->header.infoSize, (NNSSndHeapDisposeCallback)ClearField0x8cCallback_020bd8f0, (int)arc, 0);
        if (arc->info == NULL)
            return 0;

        result = NitroVM_Seek(&arc->file, (long)arc->header.infoOffset, 0);
        if (!result)
            return 0;

        readSize = NitroVM_ReadSync(&arc->file, arc->info, (long)arc->header.infoSize);
        if (readSize != arc->header.infoSize)
            return 0;

        arc->fat = AllocateAndLinkEntry020bda58(heap, arc->header.fatSize, (NNSSndHeapDisposeCallback)ClearField0x84Callback_020bd8fc, (int)arc, 0);
        if (arc->fat == NULL)
            return 0;

        result = NitroVM_Seek(&arc->file, (long)arc->header.fatOffset, 0);
        if (!result)
            return 0;

        readSize = NitroVM_ReadSync(&arc->file, arc->fat, (long)arc->header.fatSize);
        if (readSize != arc->header.fatSize)
            return 0;

        if (symbolLoadFlag && arc->header.symbolDataSize > 0) {
            arc->symbol = AllocateAndLinkEntry020bda58(heap, arc->header.symbolDataSize, (NNSSndHeapDisposeCallback)ClearField0x88Callback_020bd908,
                                                       (int)arc, 0);
            if (arc->symbol == NULL)
                return 0;

            result = NitroVM_Seek(&arc->file, (long)arc->header.symbolDataOffset, 0);
            if (!result)
                return 0;

            readSize = NitroVM_ReadSync(&arc->file, arc->symbol, (long)arc->header.symbolDataSize);
            if (readSize != arc->header.symbolDataSize)
                return 0;
        }
    }
    return 1;
}
