#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_ov001_02157bfc
extern "C" ARM int func_ov001_02157bfc(void* arg0, void* arg1) {
	memcpy((char*)arg1 + 0x4c, (char*)arg0 + 4, 0xc);
	return 0;
}
