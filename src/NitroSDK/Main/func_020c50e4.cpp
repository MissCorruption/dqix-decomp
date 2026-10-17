// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020c50e4
#include "System/Graphics.h"
#include "System/ColorEffects.h"
#include <asmhacks.h>

// despite seeming like an sdk function, this matches better at O2 than O2,p
//#pragma optimize_for_size off

void ColorEffect_ConfigureAlphaBlend(intptr_t control,
    unsigned int pixel1Source, unsigned int pixel2Source,
    unsigned int pixel1Alpha, unsigned int pixel2Alpha)
{
    *(volatile unsigned int*)(control) = pixel1Source | 0x40 | (pixel2Source << 8)
        | (pixel1Alpha | (pixel2Alpha << 8)) << 16;
}

void ColorEffect_ConfigureBrightnessAdjust(intptr_t control, unsigned int pixelSource, int adjust);


void ColorEffect_ChangeBrightness(intptr_t control, int newBrightness);
