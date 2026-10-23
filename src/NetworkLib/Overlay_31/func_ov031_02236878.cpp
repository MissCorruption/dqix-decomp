#include <globaldefs.h>

extern "C" int func_020be7a8(void*, int, int);
extern void* data_ov031_02290d00;

// USA: func_ov031_02236878
extern "C" ARM int func_ov031_02236878(int arg0) {
	return func_020be7a8((char*)data_ov031_02290d00 + 0x94, 0, arg0);
}
