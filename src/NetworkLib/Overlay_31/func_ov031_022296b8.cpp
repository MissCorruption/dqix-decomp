#include <globaldefs.h>

extern unsigned char data_ov031_02290c5c;
extern unsigned short data_ov031_02248e12[];
extern unsigned short data_ov031_02248e16[];
extern unsigned short data_ov031_02248e14[];
extern unsigned short data_ov031_02248e18[];

extern "C" int FastIntModulus(int arg0, int arg1);
extern "C" int func_ov031_02236878(int arg0);
extern "C" void func_ov031_022237dc(unsigned short, unsigned short, unsigned short, unsigned short);

// USA: func_ov031_022296b8
extern "C" ARM void func_ov031_022296b8(int arg0) {
	if (arg0 == 1) {
		int var0 = FastIntModulus(data_ov031_02290c5c + 2, 3);
		data_ov031_02290c5c = (unsigned char)var0;
	} else {
		int var1 = FastIntModulus(data_ov031_02290c5c + 1, 3);
		data_ov031_02290c5c = (unsigned char)var1;
	}
	func_ov031_02236878(8);
	int var2 = data_ov031_02290c5c << 3;
	unsigned short var3 = *(unsigned short*)((char*)data_ov031_02248e12 + var2);
	unsigned short var4 = *(unsigned short*)((char*)data_ov031_02248e16 + var2);
	unsigned short var5 = *(unsigned short*)((char*)data_ov031_02248e14 + var2);
	unsigned short var6 = *(unsigned short*)((char*)data_ov031_02248e18 + var2);
	func_ov031_022237dc(var3, var4, var5, var6);
}
