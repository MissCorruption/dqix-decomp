#include <globaldefs.h>

#define REG_DIVCNT (*(volatile unsigned short*)0x04000280)
#define REG_DIV_NUMER_32 (*(unsigned long*)0x04000290)
#define REG_DIV_DENOM (*(unsigned long long*)0x04000298)
#define REG_DIV_RESULT_32 (*(unsigned long*)0x040002a0)

#define DIVCNT_MODE_32_32 0
#define DIVCNT_BUSY 0x8000

struct TouchPanelCalibration
{
    short x0;
    short y0;
    short xDotSize;
    short yDotSize;
};

struct TouchPanelData
{
    unsigned short x;
    unsigned short y;
    unsigned short touch;
    unsigned short validity;
};

typedef void (*TouchPanelCallback)(int command, int result, unsigned short index);

struct Calibration
{
    long x0;
    long xDotSize;
    long xDotSizeInverse;
    long y0;
    long yDotSize;
    long yDotSizeInverse;
};

struct TouchPanelState
{
    TouchPanelCallback callback;
    TouchPanelData sample;
    unsigned short index;
    unsigned short frequency;
    TouchPanelData* buffers;
    unsigned short bufferCount;
    Calibration calibration;
    unsigned short isCalibrated;
    volatile unsigned short tpState;
    volatile unsigned short errors;
    volatile unsigned short busy;
};

struct TouchPanelStatics
{
    unsigned short isInitialized;
    TouchPanelState state;
};

extern TouchPanelStatics data_021117b0;

#define state data_021117b0.state

int DisableIRQInterrupts();
int SetIRQInterruptState(int);

static inline void StartDivision32_32(unsigned long numerator, unsigned long denominator)
{
    REG_DIVCNT = DIVCNT_MODE_32_32;
    REG_DIV_NUMER_32 = numerator;
    REG_DIV_DENOM = denominator;
}

static inline long GetDivisionResult32()
{
    while (REG_DIVCNT & DIVCNT_BUSY)
    {
    }
    return (long)REG_DIV_RESULT_32;
}

// USA: func_020cd99c
extern "C" ARM void func_020cd99c(const TouchPanelCalibration* calibration)
{
    int priorState;

    if (calibration == NULL)
    {
        state.isCalibrated = false;
        return;
    }

    priorState = DisableIRQInterrupts();

    if (calibration->xDotSize != 0)
    {
        StartDivision32_32(0x10000000, (unsigned long)calibration->xDotSize);
        state.calibration.x0 = calibration->x0;
        state.calibration.xDotSize = calibration->xDotSize;
        state.calibration.xDotSizeInverse = GetDivisionResult32();
    }
    else
    {
        state.calibration.x0 = 0;
        state.calibration.xDotSize = 0;
        state.calibration.xDotSizeInverse = 0;
    }

    if (calibration->yDotSize != 0)
    {
        StartDivision32_32(0x10000000, (unsigned long)calibration->yDotSize);
        state.calibration.y0 = calibration->y0;
        state.calibration.yDotSize = calibration->yDotSize;
        state.calibration.yDotSizeInverse = GetDivisionResult32();
    }
    else
    {
        state.calibration.y0 = 0;
        state.calibration.yDotSize = 0;
        state.calibration.yDotSizeInverse = 0;
    }

    SetIRQInterruptState(priorState);

    state.isCalibrated = true;
}
