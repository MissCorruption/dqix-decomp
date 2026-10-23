#include <globaldefs.h>

extern "C" int func_ov027_021da988(int arg0, unsigned int arg1, unsigned int arg2);
extern int data_ov027_021dd8b8[3];

// USA: func_ov027_021daa34
extern "C" ARM int func_ov027_021daa34(int arg0, unsigned int arg1, unsigned int arg2) {
	int var0 = data_ov027_021dd8b8[arg0];
	if (var0 == 0) goto case0;
	if (var0 == 1) goto case1;
	if (var0 != 2) goto defaultCase;
case0:
	return func_ov027_021da988(arg0, arg1, arg2);
case1:
	if (arg1 < 0x2000000) goto rangeB;
	if (arg1 >= 0x23fe800) goto rangeB;
	{
		unsigned int var1 = arg1 + arg2;
		if (arg1 >= 0x2300000) goto rangeC;
		if (var1 > 0x2300000) return 0;
	rangeC:
		if (var1 <= 0x2300000) return 1;
		if (var1 >= 0x23fe800) goto rangeCFail;
		if (arg2 <= 0x40000) return 1;
	rangeCFail:
		return 0;
	}
rangeB:
	{
		unsigned int var2 = 0x37f8000;
		if (arg1 < var2) goto rangeBFail;
		unsigned int var3 = var2 + 0x17000;
		if (arg1 >= var3) goto rangeBFail;
		unsigned int var4 = arg1 + arg2;
		return (var4 <= var3) ? 1 : 0;
	}
defaultCase:
	return 0;
rangeBFail:
	return 0;
}
