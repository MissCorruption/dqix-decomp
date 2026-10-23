#if defined(jpn)
#define R(j,u) (j)
#define data_ov006_02160010 data_ov006_02161364
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void* func_ov006_02157368(void* arg0, int arg1);
extern "C" void func_ov006_0215f4dc(void* arg0);
extern "C" void func_020813ec(void* arg0, int arg1);
struct Struct_02080fa8;
extern "C" void func_02080fa8(struct Struct_02080fa8* arg0, int arg1, int arg2);

struct Struct_ov006_021596f0 {
	unsigned char unknown_0_[R(0xc, 0x14)];
	void* unknown_14_;
	unsigned char unknown_18_[0x100 - 0x18];
	unsigned char unknown_100_[1];
	unsigned char unknown_101_[R(0x36e - 0xf9, 0x36e - 0x101)];
	unsigned short unknown_36e_;
	unsigned char unknown_370_[0x38b - 0x370];
	unsigned char unknown_38b_;
	unsigned char unknown_38c_[0x394 - 0x38c];
	unsigned short unknown_394_;
};

// USA: func_ov006_021596f0
extern "C" ARM void func_ov006_021596f0(struct Struct_ov006_021596f0* arg0) {
	void* var0;
	var0 = func_ov006_02157368(&arg0->unknown_100_, 0x50);
	if (var0 != NULL) ((unsigned char*)var0)[0x16] |= 1;
	var0 = func_ov006_02157368(&arg0->unknown_100_, 0x4f);
	if (var0 != NULL) ((unsigned char*)var0)[0x16] &= ~1;
	var0 = func_ov006_02157368(&arg0->unknown_100_, 0xe);
	if (var0 != NULL) ((unsigned char*)var0)[0x16] &= ~1;
	var0 = func_ov006_02157368(&arg0->unknown_100_, 0xf);
	if (var0 != NULL) ((unsigned char*)var0)[0x16] &= ~1;
	var0 = func_ov006_02157368(&arg0->unknown_100_, 0x15);
	if (var0 != NULL) ((unsigned char*)var0)[0x16] &= ~1;
	var0 = func_ov006_02157368(&arg0->unknown_100_, 0x1f);
	if (var0 != NULL) ((unsigned char*)var0)[0x16] &= ~1;
	var0 = func_ov006_02157368(&arg0->unknown_100_, 0x20);
	if (var0 != NULL) ((unsigned char*)var0)[0x16] &= ~1;
	var0 = func_ov006_02157368(&arg0->unknown_100_, 0x21);
	if (var0 != NULL) ((unsigned char*)var0)[0x16] &= ~1;
	var0 = func_ov006_02157368(&arg0->unknown_100_, 0x22);
	if (var0 != NULL) ((unsigned char*)var0)[0x16] &= ~1;
	func_ov006_0215f4dc(arg0);
	arg0->unknown_394_ |= 8;
	arg0->unknown_36e_ = 6;
	{
		int var1 = arg0->unknown_38b_;
		struct Struct_02080fa8* var2 = (struct Struct_02080fa8*)arg0->unknown_14_;
		func_02080fa8(var2, 0x1f, var1);
	}
	func_020813ec(arg0->unknown_14_, 6);
}
