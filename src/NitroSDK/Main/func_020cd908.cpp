#include <globaldefs.h>

#define USER_SETTINGS ((UserSettings*)0x027ffc80)

struct TouchPanelCalibration
{
    short x0;
    short y0;
    short xDotSize;
    short yDotSize;
};

struct UserCalibration
{
    unsigned short rawX1;
    unsigned short rawY1;
    unsigned char x1;
    unsigned char y1;
    unsigned short rawX2;
    unsigned short rawY2;
    unsigned char x2;
    unsigned char y2;
};

struct UserSettings
{
    char unknown_0[0x58];
    UserCalibration touchPanel;
};

extern "C" unsigned long func_020cddec(TouchPanelCalibration* calibration, unsigned short rawX1, unsigned short rawY1,
    unsigned short x1, unsigned short y1, unsigned short rawX2, unsigned short rawY2, unsigned short x2,
    unsigned short y2);

// USA: func_020cd908
extern "C" ARM int func_020cd908(TouchPanelCalibration* calibration)
{
    UserSettings* settings = USER_SETTINGS;
    unsigned short rawX1, rawY1, rawX2, rawY2, x1, y1, x2, y2;

    rawX1 = settings->touchPanel.rawX1;
    rawY1 = settings->touchPanel.rawY1;
    x1 = (unsigned short)settings->touchPanel.x1;
    y1 = (unsigned short)settings->touchPanel.y1;
    rawX2 = settings->touchPanel.rawX2;
    rawY2 = settings->touchPanel.rawY2;
    x2 = (unsigned short)settings->touchPanel.x2;
    y2 = (unsigned short)settings->touchPanel.y2;

    if (rawX1 == 0 && rawX2 == 0 && rawY1 == 0 && rawY2 == 0 ||
        func_020cddec(calibration, rawX1, rawY1, x1, y1, rawX2, rawY2, x2, y2) != 0)
    {
        calibration->x0 = 0;
        calibration->y0 = 0;
        calibration->xDotSize = 0;
        calibration->yDotSize = 0;
        return true;
    }
    return true;
}
