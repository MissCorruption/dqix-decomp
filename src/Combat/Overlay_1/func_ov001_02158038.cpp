#include <globaldefs.h>

// USA: func_ov001_02158038
extern "C" ARM int func_ov001_02158038(char* arg0, char* arg1) {
	if (*(int*)(arg1 + 0x70) != 0) {
		*(int*)(arg1 + 0x88) = *(int*)(arg0 + 0x4);
		*(int*)(arg1 + 0x8c) = *(int*)(arg0 + 0x8);
		*(int*)(arg1 + 0x90) = *(int*)(arg0 + 0xc);
	} else {
		*(int*)(arg1 + 0x64) = *(int*)(arg0 + 0x4);
		*(int*)(arg1 + 0x68) = *(int*)(arg0 + 0x8);
		*(int*)(arg1 + 0x6c) = *(int*)(arg0 + 0xc);
	}
	*(int*)(arg1 + 0xa24) = 1;
	return 0;
}
