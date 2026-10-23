#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov006_0215fd60_332 = 0x140 };
#else
enum { Enum_ov006_0215fd60_332 = 0x14c };
#endif

extern "C" void __clear(void* arg0, int arg1);
extern "C" void func_02071da4(void* arg0, short* arg1, unsigned char* arg2, int arg3);

// USA: func_ov006_0215fd60
extern "C" ARM void func_ov006_0215fd60(void* arg0, short* arg1, unsigned char* arg2, int arg3) {
	short var0[3];
	unsigned char var1[3];
	__clear(var0, 6);
	__clear(var1, 3);
	for (unsigned char var2 = 0; var2 < 3; var2++) {
		short var3 = arg1[var2];
		if (var3 > 0) {
			for (unsigned char var4 = 0; var4 < 3; var4++) {
				short var5 = var0[var4];
				if (var3 == var5) {
					var0[var4] = var3;
					var1[var4] = (unsigned char)(var1[var4] + arg2[var2]);
					break;
				}
				if (var5 <= 0) {
					var0[var4] = var3;
					var1[var4] = arg2[var2];
					break;
				}
			}
		}
	}
	func_02071da4((char*)arg0 + Enum_ov006_0215fd60_332, var0, var1, arg3);
}
