#include <globaldefs.h>

typedef void* (*Type_ov031_02212c3c)(int, int);
extern Type_ov031_02212c3c data_ov031_02290dac;
extern void (*data_ov031_02290dc0)(void*);
extern int data_ov031_02290dbc;
extern int data_ov031_02249430;
extern int data_ov031_0224c754;

extern "C" {
	int func_ov031_0223fb48(const char* arg0);
	int func_ov031_0223e454(void* arg0, const void* arg1, int arg2);
	int func_ov031_02240074(void* arg0, void* arg1, void* arg2);
	int func_ov031_0223ede0(void** arg0, void** arg1, void* arg2, void* arg3, int arg4, const char* arg5);
}
struct Struct_ov031_0223f188 { int unknown_0_; };
extern "C" int func_ov031_0223f188(Struct_ov031_0223f188* arg0, void* arg1);
struct Struct_ov031_0223edb4;
extern "C" ARM void func_ov031_0223edb4(void* arg0, struct Struct_ov031_0223edb4* arg1);
extern "C" ARM int func_ov031_0223e438(int arg0);

struct Struct_ov031_0223f528 {
	unsigned char unknown_0_[4];
	int unknown_4_;
	unsigned char unknown_8_[8];
	void* unknown_10_;
	int unknown_14_;
};

struct Struct_ov031_0223f528_2 {
	unsigned char unknown_0_[0xac];
	unsigned int unknown_ac_;
};

// USA: func_ov031_0223f528
extern "C" ARM int func_ov031_0223f528(const char* arg0, void* arg1, unsigned int arg2, const char* arg3) {
	if (arg2 < ((Struct_ov031_0223f528_2*)arg0)->unknown_ac_) {
		data_ov031_02290dbc = 7;
		return 0;
	}

	int var0 = func_ov031_0223fb48(arg0);
	if (var0 > 0x20) {
		data_ov031_02290dbc = 7;
		return 0;
	}

	int var1;
	if (var0 <= 0) {
		var1 = 0;
	} else {
		var1 = func_ov031_0223e438(var0);
	}

	void* var2 = data_ov031_02290dac(var1 + 1, 4);
	if (!var2) {
		data_ov031_02290dbc = 1;
		return 0;
	}

	Struct_ov031_0223f528* var3;
	void* var4;
	if (!func_ov031_0223ede0((void**)&var3, &var4, &data_ov031_02249430, arg1, ((Struct_ov031_0223f528_2*)arg0)->unknown_ac_, arg3)) {
		data_ov031_02290dc0(var2);
		return 0;
	}

	if (var1 > 0) {
		int var5 = func_ov031_0223e454(var2, arg0, var0);
		((unsigned char*)var2)[var5] = 0;
		if (!func_ov031_02240074(var4, &data_ov031_0224c754, var2)) {
			goto cleanup;
		}
	}

	var3->unknown_4_ = 3;
	var3->unknown_10_ = var2;
	var3->unknown_14_ = ((Struct_ov031_0223f528_2*)arg0)->unknown_ac_;
	if (func_ov031_0223f188((Struct_ov031_0223f188*)var3, var4)) {
		return 1;
	}
	data_ov031_02290dc0(var2);
	return 0;

cleanup:
	func_ov031_0223edb4(var3, (struct Struct_ov031_0223edb4*)var4);
	data_ov031_02290dc0(var2);
	data_ov031_02290dbc = 1;
	return 0;
}
