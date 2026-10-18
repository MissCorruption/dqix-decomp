#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

#define SPI_END 0x1000000
#define SPI_DATA_MASK 0xffff

#define SPI_SUCCESS 0
#define SPI_INVALID_COMMAND 1
#define SPI_INVALID_PARAMETER 2
#define SPI_ILLEGAL_STATUS 3
#define SPI_EXCLUSIVE 4

#define STATE_READY 0
#define STATE_AUTO_SAMPLING 2

#define SYSTEM_TOUCH_PANEL ((unsigned short*)0x027fffaa)

#define TOUCH_PANEL_SAMPLING 0
#define TOUCH_PANEL_AUTO_ON 1
#define TOUCH_PANEL_AUTO_OFF 2
#define TOUCH_PANEL_AUTO_SAMPLING 0x10

#define TOUCH_PANEL_SUCCESS 0
#define TOUCH_PANEL_INVALID_PARAMETER 1
#define TOUCH_PANEL_ILLEGAL_STATUS 2
#define TOUCH_PANEL_EXCLUSIVE 3
#define TOUCH_PANEL_PXI_BUSY 4

struct TouchPanelData
{
    unsigned short x;
    unsigned short y;
    unsigned short touch;
    unsigned short validity;
};

typedef void (*TouchPanelCallback)(int command, int result, unsigned short index);

union SPITouchPanelData
{
    struct
    {
        unsigned long x : 12;
        unsigned long y : 12;
        unsigned long touch : 1;
        unsigned long validity : 2;
        unsigned long unused : 5;
    } e;
    unsigned long raw;
    unsigned short halves[2];
};

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

static inline void CopySystemSample(TouchPanelData* result)
{
    SPITouchPanelData sample;

    sample.halves[0] = SYSTEM_TOUCH_PANEL[0];
    sample.halves[1] = SYSTEM_TOUCH_PANEL[1];
    result->x = (unsigned short)sample.e.x;
    result->y = (unsigned short)sample.e.y;
    result->touch = (unsigned char)sample.e.touch;
    result->validity = (unsigned char)sample.e.validity;
}

static inline void OnSendError(int command)
{
    state.errors |= 1 << command;
    if (state.callback)
    {
        state.callback(command, TOUCH_PANEL_PXI_BUSY, 0);
    }
}

extern "C" void func_020c9be0();

// USA: func_020cd610
extern "C" ARM void func_020cd610(unsigned int command, unsigned int data, unsigned int error)
{
    unsigned short result;
    unsigned short tpCommand;

    result = (unsigned short)(data & SPI_DATA_MASK);
    tpCommand = (unsigned short)((result & 0x7f00) >> 8);

    if (error)
    {
        OnSendError(tpCommand);
        return;
    }

    if (tpCommand == TOUCH_PANEL_AUTO_SAMPLING)
    {
        state.index++;
        if (state.index >= state.bufferCount)
        {
            state.index = 0;
        }

        CopySystemSample(&state.buffers[state.index]);

        if (state.callback)
        {
            state.callback(tpCommand, TOUCH_PANEL_SUCCESS, (unsigned char)state.index);
        }
        return;
    }

    if (!(data & SPI_END))
    {
        return;
    }

    switch ((unsigned char)(result & 0xff))
    {
    case SPI_SUCCESS:
        switch (tpCommand)
        {
        case TOUCH_PANEL_SAMPLING:
            CopySystemSample(&state.sample);
            state.tpState = STATE_READY;
            break;
        case TOUCH_PANEL_AUTO_ON:
            state.tpState = STATE_AUTO_SAMPLING;
            break;
        case TOUCH_PANEL_AUTO_OFF:
            state.tpState = STATE_READY;
            break;
        }

        state.busy &= ~(1 << tpCommand);

        if (state.callback)
        {
            state.callback(tpCommand, TOUCH_PANEL_SUCCESS, 0);
        }
        break;

    case SPI_EXCLUSIVE:
        result = TOUCH_PANEL_EXCLUSIVE;
        goto common;

    case SPI_INVALID_PARAMETER:
        result = TOUCH_PANEL_INVALID_PARAMETER;
        goto common;

    case SPI_ILLEGAL_STATUS:
        result = TOUCH_PANEL_ILLEGAL_STATUS;

    common:
        state.errors |= 1 << tpCommand;
        state.busy &= ~(1 << tpCommand);

        if (state.callback)
        {
            state.callback(tpCommand, result & 0xff, 0);
        }
        break;

    case SPI_INVALID_COMMAND:
    default:
        func_020c9be0();
        return;
    }
}
