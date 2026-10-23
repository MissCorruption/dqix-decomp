#include <globaldefs.h>

extern void* data_ov031_0224e580;

// USA: func_ov031_0220ff34
extern "C" ARM int func_ov031_0220ff34(int* arg0) {
	int var0 = *(int*)((char*)arg0 + 8);
	switch (var0) {
	case 0xc9: {
		int var1 = *(int*)((char*)arg0 + 0xc);
		*(int*)((char*)*(void**)((char*)data_ov031_0224e580 + 0x24) + 0x24) = var1;
		*(int*)((char*)*(void**)((char*)data_ov031_0224e580 + 0x24) + 0x20) = 1;
		break;
	}
	case 0xca:
		break;
	}
	return 1;
}
