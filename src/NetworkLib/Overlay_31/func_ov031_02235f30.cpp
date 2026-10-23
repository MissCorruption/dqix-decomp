#include <globaldefs.h>

extern "C" int func_020c7130(char*, const char*, ...);
extern char* data_ov031_02290cfc;
extern const char data_ov031_0224be50[];

// USA: func_ov031_02235f30
extern "C" ARM void func_ov031_02235f30(char* arg0) {
	unsigned char var0 = data_ov031_02290cfc[0x4c0];
	unsigned char var1 = data_ov031_02290cfc[0x4c1];
	unsigned char var2 = data_ov031_02290cfc[0x4c2];
	unsigned char var3 = data_ov031_02290cfc[0x4c3];
	func_020c7130(arg0, data_ov031_0224be50, var0, var1, var2, var3);
}
