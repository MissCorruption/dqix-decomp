#include <globaldefs.h>

struct GBACartridgeHeader020d135c {
    unsigned long startAddress;
    unsigned char nintendoLogo[0x9c];
    char title[12];
    unsigned long gameCode;
    unsigned short makerCode;
    unsigned char isRomCode;
    unsigned char machineCode;
    unsigned char deviceType;
    unsigned char exLsiID[3];
    unsigned char reserved[4];
    unsigned char softVersion;
    unsigned char complement;
    unsigned short moduleID;
};

struct CartridgeModuleInfo020d135c {
    unsigned short moduleID;
    unsigned char exLsiID[3];
    unsigned char isAgbCartridge : 1;
    unsigned char detectPullOut : 1;
    unsigned short makerCode;
    unsigned long gameCode;
};

struct CartridgeWork020d135c {
    int isEnabled;
    volatile unsigned short subProcessorInitialized;
    unsigned short lockID;
};

struct Lock020d1540 {
    int locked;
    int priorState;
};

extern CartridgeWork020d135c data_02112148;

extern "C" void func_020d14e4(unsigned short lockID, Lock020d1540* lock);
void SaveAndConfigureExmemcnt_020d1468(int* cycle);
void RestoreExmemcnt_020d14b0(int* cycle);
unsigned int UnlockAndRestoreInterrupts(int lockID, Lock020d1540* lock);

// USA: func_020d135c
extern "C" ARM int func_020d135c() {
    int result = true;
    Lock020d1540 lock;
    GBACartridgeHeader020d135c* header = (GBACartridgeHeader020d135c*)0x08000000;
    CartridgeModuleInfo020d135c* info = (CartridgeModuleInfo020d135c*)0x027ffc30;

    if (info->moduleID == 0xffff) {
        return false;
    }
    if (info->detectPullOut == true) {
        return false;
    }

    func_020d14e4(data_02112148.lockID, &lock);
    {
        int cycle[2];
        unsigned char isRomCode;

        SaveAndConfigureExmemcnt_020d1468(cycle);
        isRomCode = header->isRomCode;
        if (isRomCode == 0x96 && info->moduleID != header->moduleID ||
            isRomCode != 0x96 && info->moduleID != *(unsigned short*)0x0801fffe ||
            info->gameCode != header->gameCode && info->isAgbCartridge) {
            info->detectPullOut = true;
            result = false;
        }
        RestoreExmemcnt_020d14b0(cycle);
    }
    UnlockAndRestoreInterrupts(data_02112148.lockID, &lock);
    return result;
}
