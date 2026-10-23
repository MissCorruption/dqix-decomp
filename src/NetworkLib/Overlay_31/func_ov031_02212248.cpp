#include <globaldefs.h>

extern int data_ov031_0224e5b4[];

// USA: func_ov031_02212248
extern "C" ARM int func_ov031_02212248(void) {
	int *var0 = (int*)data_ov031_0224e5b4[1];
	if (var0 != NULL) {
		unsigned short var1 = *(unsigned short*)((char*)var0 + 4);
		if (var1 == 6) return 1;
	}
	return 0;
}
