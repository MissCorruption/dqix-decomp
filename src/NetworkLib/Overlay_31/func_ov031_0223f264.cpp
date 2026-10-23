#include <globaldefs.h>

typedef void* (*Type_ov031_02212c3c)(int, int);
extern Type_ov031_02212c3c data_ov031_02290dac;
extern void (*data_ov031_02290dc0)(void*);
extern int data_ov031_02290dbc;
extern int data_ov031_02249424;
extern int data_ov031_0224c748;
extern int data_ov031_0224c750;

extern "C" {
	int func_ov031_0223fb98(void* arg0, int arg1);
	int func_ov031_0223e454(void* arg0, void* arg1, int arg2);
	int func_ov031_02240074(void* arg0, void* arg1, int arg2);
	int func_ov031_0223ede0(void** arg0, void** arg1, void* arg2, void* arg3, int arg4, const char* arg5);
	int func_ov031_0223f188(void* arg0, void* arg1);
}
struct Struct_ov031_0223edb4;
extern "C" ARM void func_ov031_0223edb4(void* arg0, struct Struct_ov031_0223edb4* arg1);
extern "C" ARM int func_ov031_0223e438(int arg0);

struct Struct_ov031_0223f264 {
	unsigned char unknown_0_[4];
	int unknown_4_;
	unsigned char unknown_8_[8];
	void* unknown_10_;
	int unknown_14_;
	void* unknown_18_;
	void* unknown_1c_;
	void* unknown_20_;
};

// USA: func_ov031_0223f264
extern "C" ARM void* func_ov031_0223f264(void* arg0, int arg1, int arg2) {
	unsigned char var0[0xc];

	int var1 = arg2 << 8;
	if (var1 < 0x80) {
		var1 = 0x80;
	}
	void* var2 = data_ov031_02290dac(var1, 4);
	if (!var2) {
		data_ov031_02290dbc = 1;
		return 0;
	}

	int var3 = func_ov031_0223fb98(var0, arg1);
	void* var4 = data_ov031_02290dac(func_ov031_0223e438(var3) + 1, 4);
	if (!var4) {
		data_ov031_02290dc0(var2);
		data_ov031_02290dbc = 1;
		return 0;
	}
	int var5 = func_ov031_0223e454(var4, var0, var3);
	((unsigned char*)var4)[var5] = 0;

	int var6 = func_ov031_0223fb98(var0, arg2);
	void* var7 = data_ov031_02290dac(func_ov031_0223e438(var6) + 1, 4);
	if (!var7) {
		data_ov031_02290dc0(var4);
		data_ov031_02290dc0(var2);
		data_ov031_02290dbc = 1;
		return 0;
	}
	int var8 = func_ov031_0223e454(var7, var0, var6);
	((unsigned char*)var7)[var8] = 0;

	struct Struct_ov031_0223f264* var9;
	void* var10;
	if (!func_ov031_0223ede0((void**)&var9, &var10, &data_ov031_02249424, var2, var1, 0)) {
		data_ov031_02290dc0(var7);
		data_ov031_02290dc0(var4);
		data_ov031_02290dc0(var2);
		return 0;
	}

	if (!func_ov031_02240074(var10, &data_ov031_0224c748, (int)var4)) {
		goto fail;
	}
	if (!func_ov031_02240074(var10, &data_ov031_0224c750, (int)var7)) {
		goto fail;
	}
	var9->unknown_4_ = 2;
	var9->unknown_10_ = arg0;
	var9->unknown_1c_ = var4;
	var9->unknown_20_ = var7;
	var9->unknown_14_ = arg2;
	var9->unknown_18_ = var2;
	if (func_ov031_0223f188(var9, var10)) {
		return (void*)1;
	}
	data_ov031_02290dc0(var7);
	data_ov031_02290dc0(var4);
	data_ov031_02290dc0(var2);
	return 0;

fail:
	data_ov031_02290dc0(var7);
	data_ov031_02290dc0(var4);
	data_ov031_02290dc0(var2);
	func_ov031_0223edb4(var9, (struct Struct_ov031_0223edb4*)var10);
	data_ov031_02290dbc = 1;
	return 0;
}
