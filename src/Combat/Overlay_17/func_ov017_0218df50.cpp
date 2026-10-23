#include <globaldefs.h>
#include "Combat/EntryGetterTypes.h"
#include "Resource/Brightness.h"

extern "C" void* func_0203cf4c(void);

struct Struct_0203dce4;
struct Struct_0203dce4_2;
extern "C" struct Struct_0203dce4* func_0203dce4(struct Struct_0203dce4_2* arg0, int arg1);
extern "C" int func_02040528(int* arg0);

extern "C" int func_ov017_0218dd18(void* arg0, struct Struct_0203dce4* arg1, void* arg2);

#pragma optimize_for_size off
// USA: func_ov017_0218df50
extern "C" ARM int func_ov017_0218df50(void* arg0, void* arg1) {
	int var0 = 0;
	GameResources* var1 = GetGameResources();
	if (TestFlags00(var1, 0x100) == 0) {
		void* var2 = func_0203cf4c();
		for (int var3 = 0; var3 < 0x20; var3++) {
			struct Struct_0203dce4* var4 = func_0203dce4((struct Struct_0203dce4_2*)var2, var3);
			if (!var4) continue;
			int var5 = func_02040528(&var4->unknown_0_);
			if (*((unsigned char*)var5 + 2) == 1) continue;
			if (func_ov017_0218dd18(arg0, var4, arg1) != 0) {
				var0 = 1;
			}
		}
	}
	return var0;
}
