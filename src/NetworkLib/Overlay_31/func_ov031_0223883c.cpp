#include <globaldefs.h>
#include "NitroSDK/Filesystem/NitroVM.h"
#include "NitroSDK/Filesystem/FileAccessor.h"
#include "NitroSDK/Filesystem/LowNitroHandle.h"

struct Struct_ov031_0223883c { char* unknown_0_; };

extern void* data_ov031_02290d14;
extern "C" int func_ov027_021d9e1c(NitroVM* arg0);
extern "C" int func_ov027_021d9e9c(NitroVM* arg0, void* arg1, unsigned int arg2);
extern "C" int func_ov027_021da38c(Struct_ov031_0223883c* arg0, void* arg1);

// USA: func_ov031_0223883c
extern "C" ARM int func_ov031_0223883c(Struct_ov031_0223883c* arg0) {
	NitroVM var0;
	NitroVM* var1;
	int var2 = 0;

	if (arg0->unknown_0_ == NULL) {
		var1 = NULL;
	} else {
		NitroVM_Initialize(&var0);
		if (!NitroVM_PrepareReadFileByPath(&var0, arg0->unknown_0_)) {
			return var2;
		}
		var1 = &var0;
	}

	if (func_ov027_021d9e1c(var1) != 0) {
		*(void**)((char*)data_ov031_02290d14 + 0x1b000 + 0x144) = (char*)data_ov031_02290d14 + 0x2c;
		void* var3 = *(void**)((char*)data_ov031_02290d14 + 0x1b000 + 0x144);
		if (var3 != NULL) {
			if (func_ov027_021d9e9c(var1, var3, 0x10000) != 0) {
				if (func_ov027_021da38c(arg0, *(void**)((char*)data_ov031_02290d14 + 0x1b000 + 0x144)) != 0) {
					var2 = 1;
				}
			}
		}
	}

	if (var1 == &var0) {
		NitroVM_FinishRead(&var0);
	}
	return var2;
}
