#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

extern "C" int func_ov027_021d8b40(int arg0, int arg1);
#if defined(jpn)
extern "C" void func_ov027_021dcd5c(void* arg0);
#else
extern "C" void func_ov025_021dcd5c(void* arg0);
#endif
extern unsigned short* data_ov031_02290d14;

// USA: func_ov031_022389b0
extern "C" ARM void func_ov031_022389b0(int arg0) {
	if (func_ov027_021d8b40(arg0, 0) == 0) {
		unsigned short var0 = (unsigned short)~(1 << arg0);
		int var1 = DisableIRQInterrupts();
		data_ov031_02290d14[1] &= var0;
		data_ov031_02290d14[2] &= var0;
		data_ov031_02290d14[3] &= var0;
		data_ov031_02290d14[4] &= var0;
		data_ov031_02290d14[5] &= var0;
		data_ov031_02290d14[6] &= var0;
		SetIRQInterruptState(var1);
#if defined(jpn)
		func_ov027_021dcd5c((void*)arg0);
#else
		func_ov025_021dcd5c((void*)arg0);
#endif
	} else {
		int var2 = DisableIRQInterrupts();
		int var3 = ~(1 << arg0);
		data_ov031_02290d14[2] &= var3;
		data_ov031_02290d14[1] &= var3;
		SetIRQInterruptState(var2);
	}
}
