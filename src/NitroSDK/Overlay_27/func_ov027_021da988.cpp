#include <globaldefs.h>

extern int data_ov027_021dd8b8[3];

// USA: func_ov027_021da988
extern "C" ARM int func_ov027_021da988(int arg0, unsigned int arg1, unsigned int arg2) {
	int var0 = data_ov027_021dd8b8[arg0];
	if (var0 == 0) goto case0;
	if (var0 == 1) goto case1;
	if (var0 != 2) goto defaultCase;
	{
		unsigned int var1 = 0x27ffe00;
		if (arg1 < var1) goto fail;
		if (arg1 + arg2 > var1 + 0x160) goto fail;
		return 1;
	}
case0:
	if (arg1 < 0x2000000) goto fail;
	if (arg1 + arg2 > 0x22c0000) goto fail;
	return 1;
case1:
	if (arg1 >= 0x22c0000) {
		if (arg1 + arg2 <= 0x2300000) return 1;
	}
	if (arg1 < 0x2000000) goto fail;
	if (arg1 + arg2 > 0x2300000) goto fail;
	return 1;
defaultCase:
	return 0;
fail:
	return 0;
}
