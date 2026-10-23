#include <globaldefs.h>

// USA: func_ov031_02241540
extern "C" ARM int func_ov031_02241540(const char* arg0, const char* arg1, int arg2) {
	if (arg2 > 0) {
		do {
			signed char var0 = *arg0++;
			signed char var1 = *arg1++;
			if (var0 == 0 || var1 == 0) {
				if (var0 == 0 && var1 == 0) {
					arg2 = 0;
				}
				break;
			}
			int var2 = var1;
			if (var2 >= 'A' && var2 <= 'Z') {
				var2 += 0x20;
			}
			int var3 = var0;
			if (var3 >= 'A' && var3 <= 'Z') {
				var3 += 0x20;
			}
			if (var3 != var2) {
				break;
			}
			arg2--;
		} while (arg2 > 0);
	}
	return arg2;
}
