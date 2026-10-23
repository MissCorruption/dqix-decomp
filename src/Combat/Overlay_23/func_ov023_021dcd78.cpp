#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" unsigned int GetMainBG1ScreenBase(void);

// USA: func_ov023_021dcd78
extern "C" ARM void func_ov023_021dcd78(void*) {
	memset((void*)GetMainBG1ScreenBase(), 0, 0x800);
}
