#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_ov001_02157c1c
extern "C" ARM int func_ov001_02157c1c(void* arg0, void* arg1) {
	memcpy((char*)arg1 + 0x58, (char*)arg0 + 0x10, 0xc);
	return 0;
}
