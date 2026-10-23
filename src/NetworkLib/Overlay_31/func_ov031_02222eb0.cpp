#include <globaldefs.h>

struct Struct_ov031_02222eb0 {
	int unknown_0_[1];
	unsigned char unknown_4_[19];
	unsigned char unknown_17_;
};
extern Struct_ov031_02222eb0* data_ov031_02250ba8;

extern "C" void func_ov031_0223bbd8(void* arg0, int arg1, int arg2, int arg3);
extern unsigned char data_ov031_02248940[];
extern unsigned char data_ov031_02248932[];
extern unsigned short data_ov031_0224891c[];

// USA: func_ov031_02222eb0
extern "C" ARM void func_ov031_02222eb0(void* arg0) {
	Struct_ov031_02222eb0* var0 = data_ov031_02250ba8;
	int var1 = data_ov031_02248940[var0->unknown_17_];
	func_ov031_0223bbd8((void*)var0->unknown_0_[2], -1, 0, (int)arg0);
	int var2 = 0;
	if (var1 <= 0) return;
	int var3 = -1;
	do {
		var0 = data_ov031_02250ba8;
		void* var4 = (void*)((int*)var0)[var2];
		unsigned char var5 = var0->unknown_17_;
		unsigned char* var6 = data_ov031_02248932 + var5 * 2;
		unsigned char var7 = var6[var2];
		unsigned short var8 = data_ov031_0224891c[var7 * 2];
		func_ov031_0223bbd8(var4, var3, var8, (int)arg0 + 4);
		var2++;
	} while (var2 < var1);
}
