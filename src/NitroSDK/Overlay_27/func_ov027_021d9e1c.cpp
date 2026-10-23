#include <globaldefs.h>
#include "NitroSDK/Filesystem/NitroVM.h"
#include "NitroSDK/Filesystem/FileAccessor.h"

#pragma optimize_for_size off

// USA: func_ov027_021d9e1c
extern "C" ARM int func_ov027_021d9e1c(NitroVM* arg0) {
	char var0[0x60];
	char* var1 = NULL;
	int var2 = 0;
	if (arg0 != NULL) {
		int var3 = *(int*)((char*)arg0 + 0x2c);
		int var4 = *(int*)((char*)arg0 + 0x24);
		int var5 = var3 - var4;
		int var6 = NitroVM_ReadSync(arg0, var0, 0x60);
		if ((unsigned int)var6 >= 0x60) var1 = var0;
		NitroVM_Seek(arg0, var5, 0);
	} else {
		var1 = (char*)0x27ffe00;
	}
	if (var1 != NULL) {
		int var7 = *(int*)(var1 + 0x2c);
		int var8 = *(int*)(var1 + 0x3c);
		var2 = var7 + 0x268 + var8;
		if ((unsigned int)var2 < 0x10000) var2 = 0x10000;
	}
	return var2;
}
