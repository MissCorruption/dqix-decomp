#include <globaldefs.h>

struct GBACartridgeHeader020d16b0 {
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

struct CartridgeModuleInfo020d16b0 {
    unsigned short moduleID;
    unsigned char exLsiID[3];
    unsigned char isAgbCartridge : 1;
    unsigned char detectPullOut : 1;
    unsigned short makerCode;
    unsigned long gameCode;
};

struct CartridgeWork020d16b0 {
    volatile unsigned short subProcessorInitialized;
    unsigned short lockID;
};

struct Lock020d1540 {
    int locked;
    int priorState;
};

struct InitFlags020d16b0 {
    int moduleInfo;
    int pad[7];
};
inline InitFlags020d16b0& GetInitFlags020d16b0() {
    static InitFlags020d16b0 s;
    return s;
}
extern CartridgeWork020d16b0 data_0211214c;
extern GBACartridgeHeader020d16b0 data_02112180 __attribute__((aligned(32)));
extern unsigned char data_02112184[0x9c];

unsigned int SetSpecificInterruptsEnabled(unsigned int mask);
void SaveAndConfigureExmemcnt_020d1468(int* cycle);
void RestoreExmemcnt_020d14b0(int* cycle);
void InvalidateDataCacheRange(const void* addr, unsigned int size);
void DMAMemcpySynchronous16Bit(int channel, unsigned int src, unsigned int dst, unsigned int size);
void CleanInvalidateDataCache();
void WaitWhileChannelBusy_020d1564(int data);
unsigned int UnlockAndRestoreInterrupts(int lockID, Lock020d1540* lock);

extern "C" {
    void func_020d14e4(unsigned short lockID, Lock020d1540* lock);
    int func_020d135c();
    void func_020ca408(const void* src, void* dst, unsigned int length);
    void WaitByLoop(int count);
}

// USA: func_020d16b0
extern "C" ARM void func_020d16b0() {
    Lock020d1540 lock;
    unsigned int lastInterrupts;
    unsigned short lastMasterEnable;

    if (GetInitFlags020d16b0().moduleInfo) {
        return;
    }
    GetInitFlags020d16b0().moduleInfo = true;

    if (!(*(volatile unsigned short*)0x04000300 & 1)) {
        return;
    }

    lastInterrupts = SetSpecificInterruptsEnabled(0x40000);
    lastMasterEnable = *(volatile unsigned short*)0x04000208;
    *(volatile unsigned short*)0x04000208 = 1;

    func_020d14e4(data_0211214c.lockID, &lock);
    {
        int priority = (*(volatile unsigned short*)0x04000204 & 0x8000) >> 15;
        int cycle[2];

        SaveAndConfigureExmemcnt_020d1468(cycle);
        *(volatile unsigned short*)0x04000204 &= ~0x8000;
        InvalidateDataCacheRange(&((unsigned char*)&data_02112180)[0x80], sizeof(data_02112180) - 0x80);
        DMAMemcpySynchronous16Bit(1, 0x08000000 + 0x80, (unsigned int)&((unsigned char*)&data_02112180)[0x80],
            sizeof(data_02112180) - 0x80);
        *(volatile unsigned short*)0x04000204 =
            (unsigned short)((*(volatile unsigned short*)0x04000204 & ~0x8000) | (priority << 15));
        RestoreExmemcnt_020d14b0(cycle);
    }
    UnlockAndRestoreInterrupts(data_0211214c.lockID, &lock);

    if (*(unsigned char*)0x027fff9b || !*(unsigned char*)0x027fff9a) {
        int i;
        GBACartridgeHeader020d16b0* src = &data_02112180;
        CartridgeModuleInfo020d16b0* info = (CartridgeModuleInfo020d16b0*)0x027ffc30;

        info->moduleID = src->moduleID;
        for (i = 0; i < 3; i++) {
            info->exLsiID[i] = src->exLsiID[i];
        }
        info->makerCode = src->makerCode;
        info->gameCode = src->gameCode;
        *(unsigned char*)0x027fff9b = (unsigned char)(func_020d135c() ? 1 : 0);
        *(unsigned char*)0x027fff9a = true;
    }

    func_020ca408((const void*)0xffff0020, data_02112184, sizeof(data_02112184));
    CleanInvalidateDataCache();
    WaitWhileChannelBusy_020d1564(1 | ((((unsigned long)&data_02112180 - 0x02000000) >> 5) << 6));

    while (data_0211214c.subProcessorInitialized != true) {
        WaitByLoop(1);
    }

    (void)*(volatile unsigned short*)0x04000208;
    *(volatile unsigned short*)0x04000208 = lastMasterEnable;
    SetSpecificInterruptsEnabled(lastInterrupts);
}
