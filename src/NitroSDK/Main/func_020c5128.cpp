#include "System/Graphics.h"
#include "System/ColorEffects.h"
#include <asmhacks.h>

// despite seeming like an sdk function, this matches better at O2 than O2,p
//#pragma optimize_for_size off

void ColorEffect_ConfigureAlphaBlend(intptr_t control,
    unsigned int pixel1Source, unsigned int pixel2Source,
    unsigned int pixel1Alpha, unsigned int pixel2Alpha);


void ColorEffect_ConfigureBrightnessAdjust(intptr_t control, unsigned int pixelSource, int adjust);


// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020c5128
void ColorEffect_ChangeBrightness(intptr_t control, int newBrightness)
{
    unsigned short ctrlValue = *(volatile unsigned short*)control;
    int currentEffect = ctrlValue & 0xc0;
    if (newBrightness < 0)
    {
        // swap from brightness increase to brightness decrease if needed
        if (currentEffect == 0x80)
            *(volatile unsigned short*)control = (ctrlValue & ~0xc0) | 0xc0;
        *(volatile unsigned short*)(control + 4) = -newBrightness;
    }
    else
    {
        if (currentEffect == 0xc0)
            *(volatile unsigned short*)control = (ctrlValue & ~0xc0) | 0x80;
        *(volatile unsigned short*)(control + 4) = newBrightness;
    }
}