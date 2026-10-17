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

extern "C" bool TransferScratchBuffer(Struct_02111f20* input);

void SendGamecardBusCommand(unsigned int firstWord, unsigned int secondWord);

void ReadSingleSegmentFromCartridge();

void DMAChainSegmentInterruptHandler();

extern "C" bool TryReadViaDMA(Struct_02111f20* handler);

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020d0be8
extern "C" void ReadBlocksFromCartridge(Struct_02111f20* handler)
{
    CardReadManager* readManager = &data_021118e0;
    while (true)
    {
        unsigned int alignedOffset = readManager->cartridgeReadOffset & 0xfffffe00;
        unsigned int* practicalWriteLoc;
        if (alignedOffset != readManager->cartridgeReadOffset ||
            ((unsigned int)readManager->writeDst & 3) ||
            readManager->writeLength < 0x200)
        {
            handler->alignedWrite = (unsigned int*)alignedOffset;
            practicalWriteLoc = (unsigned int*)handler->scratchBuffer;
        }
        else
            practicalWriteLoc = (unsigned int*)readManager->writeDst;
        SendGamecardBusCommand(0xb7000000 | (alignedOffset >> 8), alignedOffset << 24);
        *(volatile unsigned int*)ADDR_GAMECARD_BUS_ROMCTRL = handler->control_4;

        unsigned int control;
        int wordIndex = 0;
        unsigned int bytesCopied = 0;
        do {
            control = *(volatile unsigned int*)ADDR_GAMECARD_BUS_ROMCTRL;
            if (control & ROMCTRL_FLAG_WORD_READY)
            {
                unsigned int data = *(volatile unsigned int*)ADDR_GAMECARD_RECEIVED_DATA;
                if (bytesCopied < 0x200)
                {
                    practicalWriteLoc[wordIndex] = data;
                    bytesCopied += 4;
                    wordIndex++;
                }
            }
        } while (control & ROMCTRL_FLAG_BUSY);

        if (practicalWriteLoc == (unsigned int*)readManager->writeDst)
        {
            unsigned int remainingLength;
            CardReadManager* manager = &data_021118e0;
            manager->cartridgeReadOffset += 0x200;
            manager->writeDst += 0x200;
            remainingLength = manager->writeLength - 0x200;
            manager->writeLength = remainingLength;
            if (remainingLength != 0)
                continue;
            break;
        }
        else if (!TransferScratchBuffer(handler))
            break;
    }
}

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
