#include <globaldefs.h>

// USA: func_ov031_02211644
extern "C" ARM int func_ov031_02211644(void* arg0) {
	return (*(unsigned int*)((char*)arg0 + 0x20) & 1) != 0;
}
