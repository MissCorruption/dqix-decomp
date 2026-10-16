#include <globaldefs.h>

#define REG_DIVCNT (*(volatile unsigned short*)0x04000280)
#define REG_DIV_NUMER_32 (*(unsigned long*)0x04000290)
#define REG_DIV_DENOM (*(unsigned long long*)0x04000298)
#define REG_DIV_RESULT_32 (*(unsigned long*)0x040002a0)

#define DIVCNT_MODE_32_32 0
#define DIVCNT_BUSY 0x8000

#define RAW_MAX 0x1000
#define DOT_SCALE_SHIFT 8
#define ORIGIN_SCALE_SHIFT 2

#define SCREEN_WIDTH 256
#define SCREEN_HEIGHT 192

#define IN_SHORT_RANGE(x) ((x) < 0x8000 && (x) >= -0x8000)

struct TouchPanelCalibration
{
    short x0;
    short y0;
    short xDotSize;
    short yDotSize;
};

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

// USA: func_020cddec
extern "C" ARM unsigned long func_020cddec(TouchPanelCalibration* calibration, unsigned short rawX1, unsigned short rawY1,
    unsigned short x1, unsigned short y1, unsigned short rawX2, unsigned short rawY2, unsigned short x2,
    unsigned short y2)
{
    long rawWidth, width, rawHeight, height;
    long value;
    int priorState;

    if (rawX1 >= RAW_MAX || rawY1 >= RAW_MAX || rawX2 >= RAW_MAX || rawY2 >= RAW_MAX)
    {
        return 1;
    }
    if (x1 >= SCREEN_WIDTH || x2 >= SCREEN_WIDTH || y1 >= SCREEN_HEIGHT || y2 >= SCREEN_HEIGHT)
    {
        return 1;
    }
    if (x1 == x2 || y1 == y2 || rawX1 == rawX2 || rawY1 == rawY2)
    {
        return 1;
    }

    rawWidth = rawX1 - rawX2;
    width = x1 - x2;

    priorState = DisableIRQInterrupts();

    StartDivision32_32((unsigned long)rawWidth << DOT_SCALE_SHIFT, (unsigned long)width);

    rawHeight = rawY1 - rawY2;
    height = y1 - y2;

    value = GetDivisionResult32();
    StartDivision32_32((unsigned long)rawHeight << DOT_SCALE_SHIFT, (unsigned long)height);

    if (!IN_SHORT_RANGE(value))
    {
        SetIRQInterruptState(priorState);
        return 1;
    }
    calibration->xDotSize = (short)value;
    value = (short)((((long)(rawX1 + rawX2) << DOT_SCALE_SHIFT) - ((long)(x1 + x2) * calibration->xDotSize)) >>
        (DOT_SCALE_SHIFT - ORIGIN_SCALE_SHIFT + 1));
    if (!IN_SHORT_RANGE(value))
    {
        SetIRQInterruptState(priorState);
        return 1;
    }
    calibration->x0 = (short)value;

    value = GetDivisionResult32();
    SetIRQInterruptState(priorState);

    if (!IN_SHORT_RANGE(value))
    {
        return 1;
    }
    calibration->yDotSize = (short)value;
    value = (short)((((long)(rawY1 + rawY2) << DOT_SCALE_SHIFT) - ((long)(y1 + y2) * calibration->yDotSize)) >>
        (DOT_SCALE_SHIFT - ORIGIN_SCALE_SHIFT + 1));
    if (!IN_SHORT_RANGE(value))
    {
        return 1;
    }
    calibration->y0 = (short)value;

    return 0;
}
