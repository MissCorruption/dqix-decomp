#include <globaldefs.h>

extern "C" int func_ov031_02207180(void* arg0);
extern "C" int func_ov031_02205814(void* arg0);
extern int data_ov031_022496a8;

// USA: func_ov031_0220572c
extern "C" ARM int func_ov031_0220572c(void* arg0, short arg1, int arg2) {
	if (func_ov031_02207180(arg0) != 0) {
		goto errorNeg28;
	}
	if ((*(volatile short*)((char*)arg0 + 0x70) & 8) == 0) {
		goto continueBody;
	}
errorNeg28:
	return -28;
continueBody:
	;
	int var0 = 0;
	if (arg0 == 0) goto checkFlag1;
	if (!(*(volatile short*)((char*)arg0 + 0x70) & 1)) goto checkFlag1;
	var0 = 1;
checkFlag1:
	if (!var0) {
		return -39;
	}
	signed char var1 = *(signed char*)((char*)arg0 + 0x73);
	int var2 = 1;
	if (var1 != 0 && var1 != 4) var2 = 0;
	if (!var2) goto storeAndReturn0;
	if ((*(volatile short*)((char*)arg0 + 0x70) & 4) != 0) {
		return (*(signed char*)((char*)arg0 + 0x72) == 1) ? -30 : 0;
	}
	if ((*(volatile short*)((char*)arg0 + 0x70) & 2) != 0) {
		if ((*(volatile short*)((char*)arg0 + 0x70) & 0x40) != 0) {
			return *(int*)((char*)arg0 + 0x6c);
		}
		return data_ov031_022496a8;
	}
	*(short*)((char*)arg0 + 0x76) = arg1;
	*(int*)((char*)arg0 + 0x78) = arg2;
	int var3 = func_ov031_02205814(arg0);
	if (*(signed char*)((char*)arg0 + 0x72) != 1) {
		var3 = -26;
	}
	return var3;

storeAndReturn0:
	*(short*)((char*)arg0 + 0x76) = arg1;
	*(int*)((char*)arg0 + 0x78) = arg2;
	return 0;
}
