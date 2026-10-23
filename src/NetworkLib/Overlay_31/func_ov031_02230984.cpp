#include <globaldefs.h>

extern "C" int func_ov031_022305a4(int);
extern "C" void func_ov031_022307fc(void);
extern unsigned char data_ov031_02290ca0;
extern unsigned char data_ov031_02249054;

// USA: func_ov031_02230984
extern "C" ARM void func_ov031_02230984(int arg0) {
	(&data_ov031_02290ca0)[0] = (unsigned char)arg0;
	int var0 = (&data_ov031_02249054)[arg0];
	int var1 = func_ov031_022305a4(var0);
	(&data_ov031_02290ca0)[2] = (unsigned char)var1;
	func_ov031_022307fc();
}
