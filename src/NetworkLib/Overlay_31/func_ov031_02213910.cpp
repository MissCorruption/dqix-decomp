#include <globaldefs.h>

extern "C" int func_ov031_02213800(void* arg0, void* arg1);
extern "C" int strncmp(const void*, const void*, unsigned int);

// USA: func_ov031_02213910
extern "C" ARM int func_ov031_02213910(char* arg0, char* arg1) {
	if (*(unsigned short*)(arg0 + 0xa) == 0x20) {
		int var0 = func_ov031_02213800(arg0, arg1);
		if (var0 > 0) return var0;
	}
	int var1 = 0;
	int var2 = *(unsigned char*)(arg1 + 0xd12);
	if (var2 > 0) {
		char* var3 = arg1;
		char* var4 = arg1 + 0x47c;
		unsigned short var5 = *(unsigned short*)(arg0 + 0xa);
		int var6 = *(unsigned char*)(arg1 + 0xd12);
		do {
			if (var5 == *(unsigned short*)(var3 + 0x47a)) {
				if (strncmp(arg0 + 0xc, var4, var5) == 0) {
					return *(unsigned char*)(arg1 + 0x445 + var1 * 4);
				}
			}
			var1++;
			var3 += 0xc0;
			var4 += 0xc0;
		} while (var1 < var6);
	}
	return -1;
}
