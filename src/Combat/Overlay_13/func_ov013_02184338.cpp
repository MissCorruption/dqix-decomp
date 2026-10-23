#include <globaldefs.h>

// USA: func_ov013_02184338
extern "C" ARM void* func_ov013_02184338(void* arg0, unsigned int arg1) {
	void* var0 = NULL;
	char* var1 = *(char**)((char*)arg0 + 0x40);
	if (var1 != NULL) {
		unsigned short var2 = *(unsigned short*)((char*)arg0 + 0x4e);
		if (arg1 < var2) {
			var0 = var1 + arg1 * 0x28;
		}
	}
	return var0;
}
