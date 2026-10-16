#include <globaldefs.h>

#define IME (*(volatile unsigned short*)0x04000208)
#define IF (*(volatile unsigned long*)0x04000214)
#define IE_TIMER0 0x8
#define IE_FIFO_RECV 0x40000
#define IE_CARD_IREQ 0x100000
#define IE_ALL 0x3fffff

#define VBLANK_COUNT (*(volatile unsigned long*)0x027ffc3c)
#define BOOT_TYPE (*(volatile unsigned short*)0x027ffc40)
#define BOOT_TYPE_MULTIBOOT 2

#define DISPCNT (*(volatile unsigned int*)0x04000000)
#define DISPCNTSUB (*(volatile unsigned int*)0x04001000)

#define PM_SUCCESS 0
#define PM_LCD_ALL 2
#define PM_BACKLIGHT_OFF 0
#define PM_LCD_POWER_ON 1
#define PM_LED_ON 1
#define PM_TRIGGER_CARD 0x8
#define PM_TRIGGER_CARTRIDGE 0x10

#define BACKLIGHT_RECOVER_TOP_ON 0x40
#define BACKLIGHT_RECOVER_BOTTOM_ON 0x80

#define RETRY_WAIT_CYCLES 0xa3a47
#define LCD_POWER_WAIT_CYCLES 0x360000

struct CallbackNodeCEF0C;

struct PMStatics
{
    unsigned short isInit;
    unsigned long lcdCount;
    unsigned long initCount;
    volatile int sleepEndFlag;
    unsigned long command16Value;
    CallbackNodeCEF0C* postSleepCallbackList;
    CallbackNodeCEF0C* preSleepCallbackList;
};

extern PMStatics data_021117ec;

static inline int DisableIrq()
{
    const unsigned short prep = IME;
    IME = 0;
    return prep;
}

static inline int EnableIrq()
{
    const unsigned short prep = IME;
    IME = 1;
    return prep;
}

static inline int RestoreIrq(int enable)
{
    const unsigned short prep = IME;
    IME = enable;
    return prep;
}

static inline unsigned long GetVBlankCount()
{
    return VBLANK_COUNT;
}

extern "C" void func_020c976c(unsigned long cycles);
extern "C" void func_020c9bf0();
extern "C" int func_020d135c();
extern "C" int func_020ceba8(int sw, int led, int skip, int isSync);
void RunCallbackList_020cef0c(CallbackNodeCEF0C* list);
int DisableIRQInterrupts();
int SetIRQInterruptState(int);
unsigned int DisableSpecificInterrupts(unsigned int mask);
unsigned int SetSpecificInterruptsEnabled(unsigned int mask);
int Is64BitTimerInitialized();
int IsPowcntBit0Set_020cede0();
unsigned long ReadTwoBitFlags_020ce810(int* top, int* bottom);
unsigned long IssueCategorizedRequestAndPumpHandler020ce6d0(int target, int sw);
unsigned long IssueRequestAndPumpHandler020ce614(int status);
unsigned long SendEncodedMessagePair_020ce45c(int trigger, int keyIntrData);
unsigned long TerminateSystem020ce7a4();

// USA: func_020ce89c
extern "C" ARM void func_020ce89c(int trigger, int logic, unsigned short keyPattern)
{
    int prepIrq;
    int prepIntrMode;
    unsigned int prepIntrMask;
    int powerOffFlag = false;
    int preTop;
    int preBottom;
    unsigned long preGX;
    unsigned long preGXS;
    int preLCDPower;

    RunCallbackList_020cef0c(data_021117ec.preSleepCallbackList);

    prepIrq = DisableIrq();
    prepIntrMode = DisableIRQInterrupts();
    prepIntrMask = DisableSpecificInterrupts(IE_ALL);
    SetSpecificInterruptsEnabled(IE_FIFO_RECV | (Is64BitTimerInitialized() ? IE_TIMER0 : 0));
    SetIRQInterruptState(prepIntrMode);
    EnableIrq();

    if (trigger & PM_TRIGGER_CARD)
    {
        if (BOOT_TYPE == BOOT_TYPE_MULTIBOOT)
            trigger &= ~PM_TRIGGER_CARD;
    }
    if (trigger & PM_TRIGGER_CARTRIDGE)
    {
        if (!func_020d135c())
            trigger &= ~PM_TRIGGER_CARTRIDGE;
    }

    preGX = DISPCNT;
    preGXS = DISPCNTSUB;
    preLCDPower = IsPowcntBit0Set_020cede0();
    if (ReadTwoBitFlags_020ce810(&preTop, &preBottom) != PM_SUCCESS)
        do
            func_020c976c(RETRY_WAIT_CYCLES);
        while (ReadTwoBitFlags_020ce810(&preTop, &preBottom) != PM_SUCCESS);
    if (IssueCategorizedRequestAndPumpHandler020ce6d0(PM_LCD_ALL, PM_BACKLIGHT_OFF) != PM_SUCCESS)
        do
            func_020c976c(RETRY_WAIT_CYCLES);
        while (IssueCategorizedRequestAndPumpHandler020ce6d0(PM_LCD_ALL, PM_BACKLIGHT_OFF) != PM_SUCCESS);

    {
        volatile unsigned long vcount = GetVBlankCount();
        while (vcount == GetVBlankCount())
        {
        }
        vcount = GetVBlankCount();
        DISPCNT = DISPCNT & ~0x30000;
        DISPCNTSUB = DISPCNTSUB & ~0x10000;
        while (vcount == GetVBlankCount())
        {
        }
        vcount = GetVBlankCount();
        while (vcount == GetVBlankCount())
        {
        }
    }

    data_021117ec.sleepEndFlag = false;
    SendEncodedMessagePair_020ce45c(
        (unsigned short)(trigger | (preTop ? BACKLIGHT_RECOVER_TOP_ON : 0) | (preBottom ? BACKLIGHT_RECOVER_BOTTOM_ON : 0)),
        (unsigned short)(logic | keyPattern));
    if (!data_021117ec.sleepEndFlag)
        do
            func_020c9bf0();
        while (!data_021117ec.sleepEndFlag);

    if ((trigger & PM_TRIGGER_CARD) && (IF & IE_CARD_IREQ))
        powerOffFlag = true;

    if (!powerOffFlag)
    {
        if (preLCDPower == PM_LCD_POWER_ON)
        {
            while (func_020ceba8(PM_LCD_POWER_ON, PM_LED_ON, true, true) != true)
            {
            }
        }
        else
        {
            if (IssueRequestAndPumpHandler020ce614(PM_LED_ON) != PM_SUCCESS)
                do
                    func_020c976c(RETRY_WAIT_CYCLES);
                while (IssueRequestAndPumpHandler020ce614(PM_LED_ON) != PM_SUCCESS);
        }
        DISPCNT = preGX;
        DISPCNTSUB = preGXS;
    }

    func_020c976c(LCD_POWER_WAIT_CYCLES);

    DisableIRQInterrupts();
    SetSpecificInterruptsEnabled(prepIntrMask);
    SetIRQInterruptState(prepIntrMode);
    RestoreIrq(prepIrq);

    if (powerOffFlag)
        TerminateSystem020ce7a4();

    RunCallbackList_020cef0c(data_021117ec.postSleepCallbackList);
}
