#include <globaldefs.h>

struct Struct_ov031_02240210 {
	struct Struct_ov031_02240210* unknown_0_;
	struct Struct_ov031_02240210* unknown_4_;
	int unknown_8_;
	void* unknown_c_;
	int unknown_10_;
};

extern struct Struct_ov031_02240210* volatile data_ov031_02290fdc;
extern "C" void (* volatile data_ov031_02290fc8)(void*);
extern "C" void* func_ov031_022401b8(void* arg0);

struct Struct_ov031_02240210_2 {
	char unknown_0_[0x2c];
	void* unknown_2c_;
	void* unknown_30_;
	char unknown_34_[0x3c - 0x34];
	void* unknown_3c_;
};

extern "C" int func_ov031_02240e70(void* arg0);

// USA: func_ov031_02240210
extern "C" ARM int func_ov031_02240210(void* arg0) {
	int var0 = 0;
	struct Struct_ov031_02240210* var1 = (struct Struct_ov031_02240210*)func_ov031_022401b8(arg0);
	if (var1 == NULL) {
		goto done;
	}
	struct Struct_ov031_02240210* var2 = data_ov031_02290fdc;
	if (var2 != var2->unknown_0_) {
		var1->unknown_0_->unknown_4_ = var1->unknown_4_;
		var1->unknown_4_->unknown_0_ = var1->unknown_0_;
		if (data_ov031_02290fdc == var1) {
			data_ov031_02290fdc = var1->unknown_4_;
		}
	} else {
		data_ov031_02290fdc = NULL;
	}
	{
		struct Struct_ov031_02240210_2* var3 = (struct Struct_ov031_02240210_2*)var1->unknown_c_;
		void (*var4)(int, void*, void*) = (void (*)(int, void*, void*))var3->unknown_3c_;
		void* var5 = var3->unknown_30_;
		void* var6 = var3->unknown_2c_;
		func_ov031_02240e70(var3);
		data_ov031_02290fc8(var1);
		var4(8, var5, var6);
	}
	var0 = 1;
done:
	return var0;
}
