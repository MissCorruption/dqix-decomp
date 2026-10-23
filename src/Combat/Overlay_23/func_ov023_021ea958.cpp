#include <globaldefs.h>

extern "C" void* func_02012fe4(void);
extern "C" void func_ov017_021d6134(void*, unsigned short);

// USA: func_ov023_021ea958
extern "C" ARM int func_ov023_021ea958(void* arg0) {
	void* var0 = func_02012fe4();
	unsigned short var1 = *(unsigned short*)var0;
	func_ov017_021d6134(arg0, var1);
	return 1;
}
