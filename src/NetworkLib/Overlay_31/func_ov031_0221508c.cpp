#include <globaldefs.h>

extern "C" void func_ov031_022134cc(int arg0);
extern "C" int func_ov031_0220cf6c(void);

// USA: func_ov031_0221508c
extern "C" ARM int func_ov031_0221508c(char* arg0, int arg1) {
	if (arg1 == 0x11) return arg1;
	unsigned char var0 = 0;
	unsigned char var1 = *(unsigned char*)(arg0 + 0xd12);
	if (var0 < var1) {
		do {
			if (*(unsigned char*)(arg0 + var0 * 4 + 0x444) == 0) break;
			var0++;
		} while (var0 < var1);
	}
	if (arg1 == 6) {
		if (var1 == var0) {
			if (var0 == 0) {
				func_ov031_022134cc(5);
			} else {
				func_ov031_022134cc(6);
			}
			return 0x11;
		}
	} else {
		if (var1 == 0) return arg1;
		if (var1 == var0) return arg1;
		unsigned char var2 = *(unsigned char*)(arg0 + var0 * 4 + 0x446);
		if (var2 < 0x14) return arg1;
	}
	*(unsigned char*)(arg0 + 0xd13) = (unsigned char)var0;
	if (func_ov031_0220cf6c() != 1) {
		*(unsigned char*)(arg0 + 0xd0e) = (unsigned char)arg1;
		arg1 = 7;
	}
	return arg1;
}
