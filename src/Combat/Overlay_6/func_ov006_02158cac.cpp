#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_02154e58 func_ov006_021565b0
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

// USA: func_ov006_02158cac
extern "C" ARM void func_ov006_02158cac(void *arg0) {
	unsigned short var0 = 0;
	void *var1 = *(void**)((char*)arg0 + R(0x24, 0x2c));
	while (var1) {
		var0++;
		var1 = *(void**)((char*)var1 + 0x1c);
	}
	int var2 = (var0 + 15) / 16;
	*(signed char*)((char*)arg0 + 0x389) = var2;
	if ((var2 & 0xff) == 0) {
		*(signed char*)((char*)arg0 + 0x389) = 1;
	}
	*(unsigned char*)((char*)arg0 + 0x388) = 0;
}
