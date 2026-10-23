#include <globaldefs.h>

extern void* data_ov031_0224e580;

// USA: func_ov031_0220ff78
extern "C" ARM int func_ov031_0220ff78(int* arg0) {
	int var0 = *(int*)((char*)arg0 + 8);
	switch (var0) {
	case 0xc9: {
		int var1 = *(int*)((char*)arg0 + 0xc);
		*(int*)((char*)*(void**)((char*)data_ov031_0224e580 + 0x24) + 0x24) = var1;
		*(int*)((char*)*(void**)((char*)data_ov031_0224e580 + 0x24) + 0x20) = 1;
		break;
	}
	case 0xca: {
		unsigned int var2 = (unsigned int)(*(int*)((char*)arg0 + 0xc) - 2);
		if (var2 <= 1) {
			*(int*)((char*)*(void**)((char*)data_ov031_0224e580 + 0x24) + 0x24) = 0;
			*(int*)((char*)*(void**)((char*)data_ov031_0224e580 + 0x24) + 0x20) = 1;
		}
		break;
	}
	}
	return 1;
}
