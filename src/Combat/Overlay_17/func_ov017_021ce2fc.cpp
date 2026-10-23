#include <globaldefs.h>
#include "Resource/GameResources.h"

// USA: func_ov017_021ce2fc
extern "C" ARM void func_ov017_021ce2fc(int arg0, unsigned char* arg1, int arg2, GameResources* arg3) {
	unsigned char* var0 = (unsigned char*)arg3->unknown_ptr_array_3afc[13];
	signed char* var1 = (signed char*)(arg1 + 4);
	for (int var2 = 0; var2 < 4; var2++) {
		*(signed char*)(var0 + var2 + 0x1b) = var1[var2];
	}
}
