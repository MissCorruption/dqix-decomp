#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_ov001_0215929c
extern "C" ARM int func_ov001_0215929c(void* arg0, void* arg1) {
	memcpy((char*)arg1 + 0x74, (char*)arg0 + 4, 0xc);
	return 0;
}
