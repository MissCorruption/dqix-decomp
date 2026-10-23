#include <globaldefs.h>

extern "C" int func_ov031_022134b0(void);
extern "C" void* func_ov031_022133f8(unsigned int arg0);
extern "C" int func_ov031_02213ce0(void* arg0);
extern "C" int func_ov031_02213dd8(void* arg0);

// USA: func_ov031_02213c9c
extern "C" ARM int func_ov031_02213c9c(void) {
	int var0 = func_ov031_022134b0();
	void* var1 = func_ov031_022133f8(0x10);
	switch (var0) {
	case 7:
		var0 = func_ov031_02213ce0(var1);
		break;
	case 8:
		var0 = func_ov031_02213dd8(var1);
		break;
	}
	return var0;
}
