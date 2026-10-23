#include <globaldefs.h>

extern "C" int func_ov027_021d9de8(int arg0);
extern void* data_ov027_021e33ec;

// USA: func_ov027_021d8aec
extern "C" ARM int func_ov027_021d8aec(int arg0) {
	if (data_ov027_021e33ec != NULL && func_ov027_021d9de8(arg0) != 0) {
		int var0 = *(int*)((char*)data_ov027_021e33ec + (arg0 - 1) * 4 + 0x1000 + 0x4e8);
		if (var0 == 7) return 1;
	}
	return 0;
}
