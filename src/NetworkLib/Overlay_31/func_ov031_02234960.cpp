#include <globaldefs.h>

#if defined(jpn)
#define func_020ca390 func_020cbe5c
#endif

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

extern unsigned char data_ov031_02290ce4;
extern "C" ARM void func_ov031_02234960(void);
extern "C" void func_ov031_02223998(int arg0);
extern "C" int func_ov031_02223518(void* arg0);
extern "C" void func_020c99c8(void* arg0);
extern "C" void func_020ca390(int a, void* buf, unsigned int size);
extern "C" int func_020ca3b8(int dst, int src, int size);
extern "C" void func_ov031_02223614(void* arg0, int arg1);
extern "C" void func_ov031_02222b0c(int);
extern "C" void func_ov031_02237448(void* arg0);
extern "C" void func_ov031_02236878(int);
extern "C" void func_ov031_022274c0(int);
extern "C" ARM void func_ov031_02234cac(void);
extern "C" ARM void func_ov031_02234a08(void);

// USA: func_ov031_022348cc
extern "C" ARM void func_ov031_022348cc(void) {
	unsigned char var0[0x6c];
	data_ov031_02290ce4 = 0;
	func_ov031_02234960();
	func_ov031_02223998(8);
	func_ov031_02223518((void*)2);
	func_020c99c8(&var0[0x16]);
	func_020ca390(0, &var0[0], 0x16);
	unsigned short var1 = *(unsigned short*)&var0[0x30];
	func_020ca3b8((int)&var0[0x1a], (int)&var0[0], var1 * 2);
	func_ov031_02223614(&var0[0], 0x28);
	func_ov031_02222b0c(0);
	func_ov031_02237448((void*)func_ov031_02234cac);
	func_ov031_02236878(0xb);
	func_ov031_022274c0((int)func_ov031_02234a08);
}
