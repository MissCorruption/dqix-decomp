#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov013_021870c0_105 = 0x55 };
#define func_ov013_021878b0 func_ov013_021888c0
#else
enum { Enum_ov013_021870c0_105 = 0x69 };
#endif

extern "C" void func_ov013_021878b0(void* arg0);
extern "C" void func_ov013_02187784(void* arg0);

// USA: func_ov013_021870c0
extern "C" ARM void func_ov013_021870c0(void* arg0) {
	unsigned char* var0 = (unsigned char*)arg0;
	if (var0[Enum_ov013_021870c0_105] & 1) {
		func_ov013_021878b0(arg0);
	}
#if !defined(jpn)
	if (var0[0x64] == 1) {
		func_ov013_02187784(arg0);
	}
#endif
}
