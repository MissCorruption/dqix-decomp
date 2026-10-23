#include <globaldefs.h>

extern "C" void* func_ov031_0223cf4c(unsigned int arg0, int arg1);
extern "C" int func_ov031_0223be70(int arg0, int arg1, int arg2);
extern unsigned char data_ov031_02248940[];
extern unsigned char data_ov031_02248924[];
extern void* data_ov031_02250ba8;
extern "C" void func_ov031_02222eb0(void*);
extern "C" void func_ov031_02222f44(void*);
extern "C" ARM void* func_ov031_0223e218(void* arg0, void* arg1, void* arg2, int arg3);

struct Struct_ov031_02222ce4;
extern "C" void func_ov031_0223bcc8(Struct_ov031_02222ce4* arg0, int arg1, int arg2);

// USA: func_ov031_02222ce4
extern "C" ARM void func_ov031_02222ce4(int arg0) {
	int var0 = data_ov031_02248940[arg0];

	void* var1 = func_ov031_0223cf4c(0x1c, 4);
	data_ov031_02250ba8 = var1;
	int var2 = -2;
	((signed char*)var1)[0x16] = (signed char)var2;
	((unsigned char*)data_ov031_02250ba8)[0x17] = (unsigned char)arg0;

	int var3 = 0;
	if (var0 > 0) {
		unsigned char* var4 = data_ov031_02248924 + arg0 * 2;
		int var5 = 1;
		do {
			unsigned char var6 = *var4++;
			int var7 = func_ov031_0223be70(0, var6, var5);
			((int*)data_ov031_02250ba8)[var3] = var7;
			func_ov031_0223bcc8((Struct_ov031_02222ce4*)((int*)data_ov031_02250ba8)[var3], var2 + 1, var5);
			var3++;
		} while (var3 < var0);
	}

	int var8 = func_ov031_0223be70(0, 1, 1);
	((int*)data_ov031_02250ba8)[2] = var8;
	func_ov031_0223bcc8((Struct_ov031_02222ce4*)((int*)data_ov031_02250ba8)[2], var2 + 1, 1);

	func_ov031_02222eb0((void*)0xc0);

	void* var9 = func_ov031_0223e218((void*)0, (void*)func_ov031_02222f44, (void*)0, 0x78);
	((int*)data_ov031_02250ba8)[3] = (int)var9;
}
