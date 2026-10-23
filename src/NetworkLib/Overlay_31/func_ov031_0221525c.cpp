#include <globaldefs.h>

extern "C" int func_ov031_022134b0(void);
extern "C" char* func_ov031_022133f8(int);
extern "C" int func_ov031_0220d540(void);
extern "C" int func_ov031_02215358(char*);
extern "C" int func_ov031_022153bc(char*);
extern "C" int func_ov031_0221544c(void);
extern "C" int func_ov031_02215478(char*);
extern "C" int func_ov031_022154e4(void*);
extern "C" int func_ov031_022154f8(void);
extern "C" void func_ov031_02219178(void);
extern "C" void func_ov031_02219080(void);

// USA: func_ov031_0221525c
extern "C" ARM int func_ov031_0221525c(void) {
	int var0 = func_ov031_022134b0();
	char* var1 = func_ov031_022133f8(0x10);

	if (func_ov031_0220d540() == 9) {
		unsigned int var2 = var0 - 0xa;
		if (var2 <= 5) {
			switch (var2) {
			case 0:
				var0 = func_ov031_02215358(var1);
				break;
			case 2:
				var0 = func_ov031_022153bc(var1);
				break;
			case 3:
				var0 = func_ov031_0221544c();
				break;
			case 4:
				var0 = func_ov031_02215478(var1);
				break;
			case 5:
				var0 = func_ov031_022154e4(var1);
				break;
			case 1:
				var0 = func_ov031_022154f8();
				break;
			}
		}
		goto done;
	}

	if (var0 == 0xb) goto handle_b;
	if (var0 == 0xe) goto handle_e;
	if (var0 != 0xf) goto common;
	var0 = func_ov031_022154e4(var1);
	goto done;
handle_b:
	var0 = func_ov031_022154f8();
	goto done;
handle_e:
	func_ov031_02219178();
	func_ov031_02219080();
common:
	{
		unsigned char var3 = *(unsigned char*)(var1 + 0xd13);
		*(unsigned char*)(var1 + var3 * 4 + 0x444) = 2;
	}
	var0 = 0xb;
done:
	return var0;
}
