#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

extern int data_ov017_021d65f4[];
extern signed char data_ov017_021d65ec[];
extern short data_ov017_021d6618[];

extern Vector3i data_ov017_021d6600[];

extern "C" void* func_0203cf4c(void);
extern "C" void* func_0203df78(void* arg0, int arg1);
extern "C" int func_02040528(int* arg0);
extern "C" int func_ov017_0218dd18(void* arg0, void* arg1, int arg2);

// USA: func_ov017_021a01f4
extern "C" ARM int func_ov017_021a01f4(void* arg0, int arg1, int arg2, void* arg3, int* arg4) {
	int* var0 = data_ov017_021d65f4;
	for (int var1 = 0; *var0 != -1; var0++, var1++) {
		if (*var0 != arg1) continue;

		signed char var2 = data_ov017_021d65ec[var1];
		if (var2 != arg2 && var2 != 4) continue;

		void* var3 = func_0203cf4c();
		short* var4 = data_ov017_021d6618 + var1 * 8;

		while (*var4 != -1) {
			void* var5 = func_0203df78(var3, *var4);
			if (!var5) { var4++; continue; }

			int var6 = func_02040528((int*)var5);
			if (!var6) { var4++; continue; }

			if (*((unsigned char*)var6 + 2) == 1) { var4++; continue; }

			if (func_ov017_0218dd18(arg3, var5, 0)) {
				*(Vector3i*)arg4 = data_ov017_021d6600[var1];
				return 1;
			}

			var4++;
		}
	}

	return 0;
}
