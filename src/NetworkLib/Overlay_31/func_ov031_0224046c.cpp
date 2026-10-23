#include <globaldefs.h>

// USA: func_ov031_0224046c
extern "C" ARM signed char func_ov031_0224046c(void* arg0, void** arg1, int* arg2) {
	if (*arg1 == 0) {
		if (*arg2 < 0x400) {
			int var0 = *arg2;
			*arg2 = var0 + 1;
			return *((signed char*)arg0 + var0 + 0x20);
		}
		*arg2 = 0;
		*arg1 = *(void**)((char*)arg0 + 0x1c);
	} else {
		if (*arg2 == 0x200) {
			*arg2 = 0;
			*arg1 = *(void**)*arg1;
		}
	}
	int var1 = *arg2;
	*arg2 = var1 + 1;
	return *((signed char*)*arg1 + var1 + 4);
}
