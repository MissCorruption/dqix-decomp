#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02173ea8_236 = 0xe8 };
enum { Enum_ov003_02173ea8_238 = 0xea };
#else
enum { Enum_ov003_02173ea8_236 = 0xec };
enum { Enum_ov003_02173ea8_238 = 0xee };
#endif

extern "C" int* func_020936f8(void);
extern "C" void func_02093f68(char* arg0);
extern "C" void func_ov003_02173b4c(void* arg0);
extern "C" void func_ov003_02173bd8(void* arg0);

// USA: func_ov003_02173ea8
extern "C" ARM void func_ov003_02173ea8(unsigned char* arg0) {
	unsigned char var0;
	func_02093f68((char*)func_020936f8());
	var0 = arg0[Enum_ov003_02173ea8_236];
	if (var0 == 0) return;
	if (var0 == 1) {
		if (arg0[Enum_ov003_02173ea8_238] < 2) return;
	}
	if (var0 == 6) return;
	func_ov003_02173b4c(arg0);
	func_ov003_02173bd8(arg0);
}
