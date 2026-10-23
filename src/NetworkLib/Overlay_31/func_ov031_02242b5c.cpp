#include <globaldefs.h>

// USA: func_ov031_02242b5c
extern "C" ARM int func_ov031_02242b5c(const char* arg0) {
	int var0 = 0;
	signed char var1 = *arg0++;
	if (var1 != 0) {
		do {
			if ((var1 >= '0' && var1 <= '9') || (var1 >= 'A' && var1 <= 'Z') || (var1 >= 'a' && var1 <= 'z') || var1 == ' ') {
				var0 += 1;
			} else {
				var0 += 3;
			}
			var1 = *arg0++;
		} while (var1 != 0);
	}
	return var0;
}
