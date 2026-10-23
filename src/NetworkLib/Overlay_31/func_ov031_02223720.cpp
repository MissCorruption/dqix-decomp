#include <globaldefs.h>

extern unsigned char data_ov031_02248998[];
extern int* data_ov031_02250bf0;

extern "C" void func_ov031_022238cc(void);
extern "C" int func_ov031_0223be70(int arg0, int arg1, int arg2);
extern "C" void func_ov031_0223bbd8(void* arg0, int arg1, int arg2, int arg3);

struct Struct_ov031_02222ce4 { unsigned char unknown_0_[8]; void* unknown_8_; unsigned char unknown_c_; };
extern "C" void func_ov031_0223bcc8(Struct_ov031_02222ce4* arg0, int arg1, int arg2);

// USA: func_ov031_02223720
extern "C" ARM void func_ov031_02223720(int arg0, int arg1, int arg2, int arg3) {
	func_ov031_022238cc();
	unsigned char* var0 = &data_ov031_02248998[arg0 * 2];
	int var1 = 0;
	int var2 = 0;
	int var3 = 1;
	int var4 = -1;
	int var5 = var3;
	do {
		int var6 = func_ov031_0223be70(var2, *var0++, var3);
		data_ov031_02250bf0[var1] = var6;
		func_ov031_0223bcc8((Struct_ov031_02222ce4*)data_ov031_02250bf0[var1], var4, var5);
		var1++;
	} while (var1 < 2);
	func_ov031_0223bbd8((void*)data_ov031_02250bf0[0], -1, arg1, arg3);
	func_ov031_0223bbd8((void*)data_ov031_02250bf0[1], -1, arg2, arg3);
}
