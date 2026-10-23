#include <globaldefs.h>

#if defined(jpn)
#define func_020ca390 func_020cbe5c
#endif

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

extern "C" void* func_ov031_0223c560(int arg0, int arg1);
extern "C" void func_ov031_0222a794(void);
extern "C" void func_020ca390(int a, void* buf, unsigned int size);
extern "C" int func_020ca3b8(int dst, int src, int size);
extern "C" void func_ov031_0223c980(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, void* arg7);
extern "C" void func_ov031_02237b2c(int, int, int, int, int);
extern "C" void func_ov031_0222a814(void);
extern "C" ARM void func_ov031_0222aa88();
extern unsigned char data_ov031_02290c78[2];
extern "C" void func_ov031_022274c0(int arg0);
extern "C" void func_ov031_0222785c(int arg0);
extern "C" ARM char* func_ov031_02227880(void);
extern "C" ARM void func_ov031_0223caec(void* arg0);

// USA: func_ov031_0222a6c4
// KEEP-NAME: func_ov031_0222a6c4 == symbols.txt func_ov031_0222a6c4 addr:0x0222a6c4
extern "C" ARM void func_ov031_0222a6c4(void) {
	char* var0 = func_ov031_02227880();
	void* var1 = func_ov031_0223c560(0, 0);
	data_ov031_02290c78[1] = 0;
	data_ov031_02290c78[0] = 0;
	func_ov031_0222a794();
	unsigned char var2[0x16];
	func_020ca390(0, &var2[0], 0x16);
	unsigned int var3 = *(unsigned char*)&var0[1];
	func_020ca3b8((int)&var0[2], (int)&var2[0], var3 * 2);
	func_ov031_0223c980(var1, 8, 0x35, 0xf0, 0x1c, 2, 0x480, &var2[0]);
	func_ov031_0223caec(var1);
	func_ov031_0222785c((int)func_ov031_0222aa88);
	func_ov031_02237b2c(0x1d, 4, 0, -1, 0);
	func_ov031_022274c0((int)func_ov031_0222a814);
}
