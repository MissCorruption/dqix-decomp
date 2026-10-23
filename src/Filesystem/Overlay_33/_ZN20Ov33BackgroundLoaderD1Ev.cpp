#include <globaldefs.h>
#include "Filesystem/Overlay_33/Ov33BackgroundLoader.h"

extern "C" int _ZTV16BackgroundLoader[];

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag. Defined under
// USA: func_ov033_022a2998
extern "C" ARM Ov33BackgroundLoader* _ZN20Ov33BackgroundLoaderD1Ev(Ov33BackgroundLoader* arg0)
{
    *(int**)arg0 = &_ZTV16BackgroundLoader[2];
    arg0->InitializeOrReset();
    return arg0;
}
