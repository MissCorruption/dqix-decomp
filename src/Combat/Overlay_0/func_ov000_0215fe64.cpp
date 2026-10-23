#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_ov000_0215fe64
extern "C" ARM void func_ov000_0215fe64(void* arg0) {
	memset(arg0, 0, 0x30);
	*(short*)((char*)arg0 + 0x1c) = -1;
}
