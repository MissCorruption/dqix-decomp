#include <globaldefs.h>
#include "Filesystem/Overlay_33/Ov33BackgroundLoader.h"

extern "C" int _ZTV16BackgroundLoader[];
extern "C" int _ZTV20Ov33BackgroundLoader[];

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_ov033_022a296c
extern "C" ARM Ov33BackgroundLoader* _ZN20Ov33BackgroundLoaderC1Ev(Ov33BackgroundLoader* arg0)
{
    *(int**)arg0 = &_ZTV16BackgroundLoader[2];
    arg0->InitializeOrReset();
    *(int**)arg0 = &_ZTV20Ov33BackgroundLoader[2];
    return arg0;
}
