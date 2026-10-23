#include <globaldefs.h>

extern "C" int func_ov031_02214520(int arg0);
extern "C" int func_ov031_02215150(char* arg0);
extern "C" int func_ov031_02214d38(char* arg0);
extern "C" void func_ov031_02214b64(int arg0);

// USA: func_ov031_02214fc8
extern "C" ARM int func_ov031_02214fc8(char* arg0, int arg1) {
	switch (arg1) {
	case 3: {
		unsigned char var0 = *(unsigned char*)(arg0 + 0xd12);
		if (var0 != 0 || *(unsigned short*)(arg0 + 0xd00 + 0x16) != 0) {
			if (func_ov031_02214520(1) != 0) {
				arg1 = 4;
			} else {
				arg1 = func_ov031_02215150(arg0);
			}
		} else {
			unsigned int var1 = ((unsigned int)(unsigned char)arg0[0xd0b] << 24) >> 28;
			if (var1 >= 1) {
				arg1 = 6;
			} else {
				arg1 = func_ov031_02214d38(arg0);
			}
		}
		break;
	}
	case 4:
		arg1 = func_ov031_02215150(arg0);
		break;
	case 5: {
		unsigned int var2 = ((unsigned int)(unsigned char)arg0[0xd0b] << 24) >> 28;
		if (var2 >= 1) {
			arg1 = 6;
		} else {
			arg1 = func_ov031_02214d38(arg0);
		}
		break;
	}
	}

	func_ov031_02214b64(arg1);
	return arg1;
}
