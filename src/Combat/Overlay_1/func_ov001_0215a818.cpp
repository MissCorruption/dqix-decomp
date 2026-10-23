#include <globaldefs.h>

extern int data_ov001_02165958[16];

// USA: func_ov001_0215a818
extern "C" ARM int* func_ov001_0215a818(int* arg0) {
	int var0;
	for (var0 = 0; var0 < 0x10; var0++) {
		if (data_ov001_02165958[var0] == 0) {
			*arg0 = var0;
			return &data_ov001_02165958[var0];
		}
	}
	return NULL;
}
