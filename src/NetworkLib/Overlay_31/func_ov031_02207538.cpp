#include <globaldefs.h>

extern "C" int func_ov031_02206f08(int arg0, int arg1);

// USA: func_ov031_02207538
extern "C" ARM int func_ov031_02207538(unsigned int* arg0, unsigned int* arg1) {
	unsigned int var0 = *arg1;
	unsigned int var1 = *arg0;
	unsigned int var2 = ((var1 >> 24) & 0xff) | ((var1 >> 8) & 0xff00) | ((var1 << 8) & 0xff0000) | ((var1 << 24) & 0xff000000);
	unsigned int var3 = ((var0 >> 24) & 0xff) | ((var0 >> 8) & 0xff00) | ((var0 << 8) & 0xff0000) | ((var0 << 24) & 0xff000000);
	return func_ov031_02206f08((int)var2, (int)var3);
}
