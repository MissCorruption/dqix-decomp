#include <globaldefs.h>

extern void* data_02111304;

// USA: func_ov031_02203178
extern "C" ARM void func_ov031_02203178(void) {
	void* var0 = *((void**)&data_02111304 + 1);
	*(int*)((char*)var0 + 0xa4) = 0;
}
