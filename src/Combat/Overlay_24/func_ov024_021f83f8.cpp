#include <globaldefs.h>

struct Struct_02053dc0 { char unknown_0_[0x19c]; void* unknown_19c_; };
extern "C" void* func_02053dc0(struct Struct_02053dc0* arg0);

extern "C" void func_ov024_021f9660(void* arg0);
extern "C" int func_ov024_021f8628(void* arg0, void* arg1, void* arg2, void* arg3);
extern "C" int func_ov024_021f691c(void* arg0, unsigned short* arg1, void* arg2, int arg3);

struct Struct_ov024_021f83f8 { char unknown_0_[4]; short unknown_4_; };

// USA: func_ov024_021f83f8
extern "C" ARM int func_ov024_021f83f8(struct Struct_ov024_021f83f8* arg0, void* arg1, struct Struct_02053dc0* arg2, unsigned short* arg3) {
	void* var0 = func_02053dc0(arg2);
	if (!var0) return (int)var0;
	*(float*)((char*)arg0 + 0x124) = 0.6f;
	func_ov024_021f9660(arg0);
	int var1 = func_ov024_021f691c((char*)arg0 + 0xc8 + 0x400, arg3, var0, arg0->unknown_4_);
	if (var1) return var1;
	var1 = func_ov024_021f691c((char*)arg0 + 0x98 + 0x400, arg3, var0, arg0->unknown_4_);
	if (var1) return var1;
	if (*(int*)((char*)arg0 + 0xc) >= 2) {
		var1 = func_ov024_021f691c((char*)arg0 + 0x128 + 0x400, arg3, var0, arg0->unknown_4_);
		if (var1) return var1;
		var1 = func_ov024_021f691c((char*)arg0 + 0x3d8, arg3, var0, arg0->unknown_4_);
		if (var1) return var1;
	}
	var1 = func_ov024_021f691c((char*)arg0 + 0x38 + 0x400, arg3, var0, arg0->unknown_4_);
	if (var1) return var1;
	return func_ov024_021f8628(arg0, arg1, arg2, arg3);
}
