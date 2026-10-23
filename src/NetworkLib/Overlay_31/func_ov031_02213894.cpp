#include <globaldefs.h>

extern "C" int func_ov031_02213800(void* arg0);
extern "C" int strncmp(const void*, const void*, unsigned int);

struct Struct_ov031_02213694 {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
	unsigned char unknown_2_;
	unsigned char unknown_3_;
	char unknown_4_[0x20];
};

// USA: func_ov031_02213894
extern "C" ARM int func_ov031_02213894(char* arg0, int arg1, struct Struct_ov031_02213694* arg2) {
	if (*(unsigned short*)(arg0 + 0xa) == 0x20) {
		int var0 = func_ov031_02213800(arg0);
		if (var0 > 0) return var0;
	}
	int var1 = 0;
	if (arg1 > 0) {
		unsigned short var2 = *(unsigned short*)(arg0 + 0xa);
		do {
			if ((unsigned char)var2 == arg2->unknown_3_) {
				if (strncmp(arg0 + 0xc, arg2->unknown_4_, var2) == 0) {
					return arg2->unknown_1_;
				}
			}
			var1++;
			arg2++;
		} while (var1 < arg1);
	}
	return -1;
}
