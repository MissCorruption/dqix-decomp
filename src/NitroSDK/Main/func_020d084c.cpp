#include "Filesystem/FSInnerDefs.h"
#include "System/BiosData.h"
#include "System/Memory.h"
#include "System/Interrupts.h"
#include "System/Cache.h"
#include "System/DMA.h"
#include <globaldefs.h>
#include <asmhacks.h>

#define ADDR_ITCM_START 0x01ff8000
#define ADDR_ITCM_END 0x02000000

#define ADDR_GAMECARD_BUS_ROMCTRL 0x040001a4
#define ADDR_GAMECARD_RECEIVED_DATA 0x04100010
#define GAMECARD_BUS_COMMAND_BYTE(n) *(unsigned char*)(0x040001a8 + n)

#define ROMCTRL_FLAG_WORD_READY (1u << 23)
#define ROMCTRL_FLAG_BUSY (1u << 31)

void SendTaskToReadContext(CardReadManager::ReadProc);

unsigned int GetDataTcmRegionBase_020c89e4(void);
void StartDmaWithFlush020ca8e8(unsigned int chan, unsigned int addr, unsigned int len, unsigned int size);
void RegisterType0x11Handler_020d1118(void);
void SyncIfBufferValueChanged_020d1234(unsigned int id);

void WaitForReadManagerIdle_Internal();
Struct_02111f20::LowLevelReadProc GetLowLevelCartridgeReadProc();

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020d084c
extern "C" bool TransferScratchBuffer(Struct_02111f20* input)
{
    CardReadManager* ptr = &data_021118e0;
    unsigned int romCurrentBlockStart = ptr->cartridgeReadOffset & 0xfffffe00;
    if (romCurrentBlockStart == (unsigned int)input->alignedWrite)
    {
        unsigned int offsetFromAlignment = ptr->cartridgeReadOffset
            - romCurrentBlockStart;
        unsigned int usefulLength = 0x200 - offsetFromAlignment;
        if (usefulLength > ptr->writeLength)
            usefulLength = ptr->writeLength;

        VectorizedInvertedMemcpy(input->scratchBuffer + offsetFromAlignment,
            ptr->writeDst, usefulLength);
        ptr->cartridgeReadOffset += usefulLength;
        ptr->writeDst += usefulLength;
        ptr->writeLength -= usefulLength;
    }
    return ptr->writeLength != 0;
}

void SendGamecardBusCommand(unsigned int firstWord, unsigned int secondWord);

void ReadSingleSegmentFromCartridge();

void DMAChainSegmentInterruptHandler();

extern "C" bool TryReadViaDMA(Struct_02111f20* handler);

extern "C" void ReadBlocksFromCartridge(Struct_02111f20* handler);

unsigned int SetupNormalGamecardBusCommandMode();

extern "C" void SafeReadBlocksFromCartridge(CardReadManager*);

void LoadDataFromCartridgeToMemory(unsigned int dmaChannel,
    unsigned int cartridgeOffset, void* dest, unsigned int length,
    CardReadManager::CompletionCallback onComplete, NitroHandle* handle, CBool async);

void InitializeCardReading();

void WaitForReadManagerIdle_Internal();

Struct_02111f20::LowLevelReadProc GetLowLevelCartridgeReadProc();

void IPCCommand11Proc(unsigned int command, unsigned int argument, unsigned int flag);

void CartridgeReadContextLoop();
