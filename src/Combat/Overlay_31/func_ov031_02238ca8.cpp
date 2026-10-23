#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

extern "C" void func_ov031_02239108(unsigned short arg0);
#if defined(jpn)
extern "C" void func_ov027_021dcd5c(void* arg0);
#else
extern "C" void func_ov025_021dcd5c(void* arg0);
#endif
extern "C" int func_ov027_021d8b40(int arg0, int arg1);
extern unsigned short* data_ov031_02290d14;

// USA: func_ov031_02238ca8
extern "C" ARM void func_ov031_02238ca8(void) {
	unsigned short var0 = 1;
	unsigned short var1 = 0;
	do {
		if (data_ov031_02290d14[5] & (1 << var0)) {
			if (func_ov027_021d8b40(var0, 3) != 0) {
				var1 |= (1 << var0);
			} else {
				unsigned short var2 = (unsigned short)~(1 << var0);
				int var3 = DisableIRQInterrupts();
				data_ov031_02290d14[1] &= var2;
				data_ov031_02290d14[2] &= var2;
				data_ov031_02290d14[3] &= var2;
				data_ov031_02290d14[4] &= var2;
				data_ov031_02290d14[5] &= var2;
				data_ov031_02290d14[6] &= var2;
				SetIRQInterruptState(var3);
#if defined(jpn)
				func_ov027_021dcd5c((void*)var0);
#else
				func_ov025_021dcd5c((void*)var0);
#endif
			}
		}
		var0++;
	} while (var0 < 0x10);

	if (var1 == 0) {
		func_ov031_02239108(7);
	} else {
		func_ov031_02239108(4);
	}
}
