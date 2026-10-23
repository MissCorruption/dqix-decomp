#include <globaldefs.h>

extern "C" int func_ov031_02214520(int);
extern "C" int func_ov031_02214afc(unsigned int);
extern "C" int func_ov031_02214d38(void*);

// USA: func_ov031_02215150
extern "C" ARM int func_ov031_02215150(char* arg0) {
	unsigned short var0 = *(unsigned short*)(arg0 + 0xd00 + 0x16);
	if (var0 != 0) {
		if (func_ov031_02214520(2) != 0) {
			arg0[0xd11] = (unsigned char)func_ov031_02214afc(0);
			return 5;
		}
	}
	unsigned int var1 = ((unsigned int)(unsigned char)arg0[0xd0b] << 24) >> 28;
	if (var1 >= 1) {
		return 6;
	}
	return func_ov031_02214d38(arg0);
}
