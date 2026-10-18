#include <globaldefs.h>

struct Obj0223ffb0 {
	char pad0[0x44];
	char boundary[0x14];
};

extern "C" int func_ov031_02242f84(const signed char* text, int textLength, const signed char* pattern, int patternLength);
extern "C" char func_ov031_0223ff7c(unsigned char c);
extern char data_ov031_022494c0[];

// USA: func_ov031_0223ffb0
extern "C" ARM int func_ov031_0223ffb0(Obj0223ffb0* obj, const signed char* text, int len) {
	if (func_ov031_02242f84(text, len, (const signed char*)&obj->boundary[2], 0x12) < 0) {
		return 1;
	}

	for (int i = 0x13; i >= 2; i--) {
		char c = obj->boundary[i];
		for (;;) {
			c = func_ov031_0223ff7c(c);
			obj->boundary[i] = c;
			if (c == data_ov031_022494c0[i]) {
				break;
			}
			if (func_ov031_02242f84(text, len, (const signed char*)&obj->boundary[2], 0x12) < 0) {
				return 1;
			}
		}
	}

	return 0;
}
