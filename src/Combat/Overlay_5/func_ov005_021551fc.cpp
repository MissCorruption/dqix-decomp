#if defined(jpn)
#define R(j,u) (j)
#define func_ov012_02189d68 func_ov012_0218a804
#define data_ov009_0218ac04 data_ov009_0218bb6c
#define data_ov013_02187d94 data_ov013_02188cd0
#define func_ov008_02187b20 func_ov008_021888fc
#define func_ov012_0218432c func_ov012_021853a0
#define func_ov012_0218930c func_ov012_02189be8
#define func_ov012_0218adac func_ov012_0218bba0
#define func_ov013_02185900 func_ov013_02186aec
#define func_ov023_021e6de4 func_ov023_021e7148
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void func_ov023_021dcba4(void* arg0, int arg1);
extern "C" void func_ov023_021dcae0(void* arg0, int arg1);

// USA: func_ov005_021551fc
extern "C" ARM void func_ov005_021551fc(char* arg0, int arg1, int arg2) {
	signed char var0 = *(signed char*)(arg0 + 0x3d00 + R(0x33,0xbb));
	short var1 = *(short*)(arg0 + var0 * 0x1c + 0x2d00 + R(0x8,0x90));
	*(unsigned char*)(arg0 + 0x1000 + R(0x936,0x9be)) = arg1;
	unsigned short* var2 = (unsigned short*)(arg0 + 0x1900 + R(0x30,0xb8));
	*var2 = *var2 | 0x80;
	if (arg2 != 0) {
		func_ov023_021dcba4(arg0 + R(0x1240,0x1244), var1);
	} else {
		func_ov023_021dcae0(arg0 + R(0x1240,0x1244), var1);
	}
}
