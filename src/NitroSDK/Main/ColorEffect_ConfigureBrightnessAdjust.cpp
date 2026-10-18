#include <globaldefs.h>
#include "System/ColorEffects.h"

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020c5100
ARM void ColorEffect_ConfigureBrightnessAdjust(intptr_t control,
    unsigned int pixelSource, int adjust)
{
    unsigned short* reg = (unsigned short*)control;

    if (adjust < 0)
    {
        reg[0] = (unsigned short)(0xC0 | pixelSource);
        reg[2] = (unsigned short)-adjust;
    }
    else
    {
        reg[0] = (unsigned short)(0x80 | pixelSource);
        reg[2] = (unsigned short)adjust;
    }
}
