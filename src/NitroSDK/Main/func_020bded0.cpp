#include <globaldefs.h>

struct ArchiveBankInfo020bded0 {
    unsigned long fileId;
    unsigned short waveArcNo[4];
};

struct ArchiveWaveArchiveInfo020bded0 {
    unsigned long fileId : 24;
    unsigned long flags : 8;
};

ArchiveBankInfo020bded0* GetOffsetEntry0x10_020bd51c(int bankNo);
void* PostEvent0x1FForIndex_020be214(unsigned int fileId, int heap, int setAddress);
void* GetListEntryWord8020bd8ac(unsigned int fileId);
ArchiveWaveArchiveInfo020bded0* GetOffsetEntry0x14_020bd580(int waveArcNo);
int DispatchEventEntryForIndex_020be010(int waveArcNo, unsigned int loadFlag, int heap, int setAddress, int* data);
int ProcessEntries020be604(void* waveArc, void* bank, int waveArcNo, int fileId, int heap);
extern "C" void func_020d2b34(void* bank, int index, void* waveArc);

// USA: func_020bded0
extern "C" ARM int func_020bded0(int bankNo, unsigned long loadFlag, int heap, int setAddress, void** data) {
    const ArchiveBankInfo020bded0* bankInfo;
    const ArchiveWaveArchiveInfo020bded0* waveArcInfo;
    void* bank = NULL;
    void* waveArc;
    int result;
    int i;

    bankInfo = GetOffsetEntry0x10_020bd51c(bankNo);
    if (bankInfo == NULL)
        return 4;

    if (loadFlag & 2) {
        bank = PostEvent0x1FForIndex_020be214(bankInfo->fileId, heap, setAddress);
        if (bank == NULL)
            return 8;
    } else {
        bank = GetListEntryWord8020bd8ac(bankInfo->fileId);
    }

    for (i = 0; i < 4; i++) {
        if (bankInfo->waveArcNo[i] == 0xffff)
            continue;

        waveArcInfo = GetOffsetEntry0x14_020bd580(bankInfo->waveArcNo[i]);
        if (waveArcInfo == NULL)
            return 5;

        result = DispatchEventEntryForIndex_020be010(bankInfo->waveArcNo[i], loadFlag, heap, setAddress, (int*)&waveArc);
        if (result != 0)
            return result;

        if (waveArcInfo->flags & 1) {
            if (loadFlag & 4) {
                if (!ProcessEntries020be604(waveArc, bank, i, waveArcInfo->fileId, heap))
                    return 9;
            }
        }

        if (bank != NULL && waveArc != NULL)
            func_020d2b34(bank, i, waveArc);
    }

    if (data != NULL)
        *data = bank;
    return 0;
}
