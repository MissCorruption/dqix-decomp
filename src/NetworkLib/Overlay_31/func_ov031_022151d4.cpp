#include <globaldefs.h>

extern "C" int func_ov031_0220d540(void);
extern "C" char* func_ov031_022133f8(unsigned int arg0);
extern "C" int func_ov031_02214520(int);
extern "C" int func_ov031_0220cae0(void* arg0, void (*arg1)(void));
extern "C" void func_ov031_02213c10(void);
extern "C" void func_ov031_022134cc(int arg0);

struct Struct_ov031_022151d4 { unsigned int unknown_0_, unknown_4_, unknown_8_, unknown_c_; };

// USA: func_ov031_022151d4
extern "C" ARM int func_ov031_022151d4(void) {
	int var0 = func_ov031_0220d540();
	char* var1 = func_ov031_022133f8(0x10);
	if (var0 == 1) {
		Struct_ov031_022151d4 var2;
		var2.unknown_0_ = (unsigned char)var1[0xd0a];
		var2.unknown_4_ = 0;
		var2.unknown_8_ = 0;
		var2.unknown_c_ = 0;
		func_ov031_02214520(0);
		int var3 = func_ov031_0220cae0(&var2, func_ov031_02213c10);
		if (var3 == 1 || var3 >= 4) {
			func_ov031_022134cc(1);
			return 0x11;
		}
	} else {
		return 1;
	}
	return 2;
}
