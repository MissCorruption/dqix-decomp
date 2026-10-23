#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern "C" int func_ov031_0220a800(char* arg0);

// USA: func_ov031_02203b1c
extern "C" ARM int func_ov031_02203b1c(void) {
	char* var0 = (char*)data_02111304.activeContext->unknown_A4;
	if (var0 == NULL) {
		goto ret_zero;
	}
	if (*(unsigned char*)(var0 + 9) != 0) {
		return func_ov031_0220a800(var0);
	}
	{
		int var1 = *(int*)(var0 + 0x44);
		if (var1 != 0) {
			goto ret_f44;
		}
		if (*(unsigned char*)(var0 + 8) == 4) {
			goto ret_f44;
		}
		{
			unsigned char var2 = (unsigned char)(*(unsigned char*)(var0 + 8) + 0xf6);
			if (var2 > 1) {
				goto ret_neg1;
			}
		}
	ret_f44:
		return var1;
	}
ret_neg1:
	return -1;
ret_zero:
	return 0;
}
