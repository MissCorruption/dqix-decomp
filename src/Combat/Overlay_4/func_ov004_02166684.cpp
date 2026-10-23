#include <globaldefs.h>

extern "C" void* func_ov023_021f6524(int arg0, int arg1);
extern "C" int func_ov023_021f9bc8(void);

// USA: func_ov004_02166684
extern "C" ARM short func_ov004_02166684(int arg0) {
	short var0 = 0;
	void* var1 = func_ov023_021f6524(arg0, 0x5b);
	if (var1 != NULL) {
		var0 = *(short*)((char*)var1 + 0x5c);
	}
	short var2 = (short)func_ov023_021f9bc8();
	short var3 = var0 * 8;
	return var3 + var2;
}
