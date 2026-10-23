#include <globaldefs.h>

extern int data_ov031_02250c0c;

// USA: func_ov031_022275a0
extern "C" ARM int func_ov031_022275a0(void) {
	unsigned char var0 = *(unsigned char*)&data_ov031_02250c0c;
	if (var0 == 6) return 0x38;
	if (var0 == 1) {
		unsigned int var1 = *(unsigned int*)((char*)&data_ov031_02250c0c + 8);
		if (((var1 >> 4) & 2) == 0) return 0x37;
	}
	return (var0 + 0x31) & 0xff;
}
