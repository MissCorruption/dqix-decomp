#include <globaldefs.h>

extern void* data_02111304;

// USA: func_ov031_02203270
extern "C" ARM void func_ov031_02203270(void* arg0) {
	void* var0 = *((void**)&data_02111304 + 1);
	*(int*)((char*)arg0 + 0xa4) = *(int*)((char*)var0 + 0xa4);
}
