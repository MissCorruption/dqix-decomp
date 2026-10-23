#include <globaldefs.h>

struct Struct_ov031_0223e168_3 {
	int unknown_0_;
	Struct_ov031_0223e168_3* unknown_4_;
	void (*unknown_8_)(Struct_ov031_0223e168_3*, int);
	int unknown_c_;
};

struct Struct_ov031_0223e168_2 {
	int unknown_0_;
	void* unknown_4_;
	char unknown_8_[8];
	Struct_ov031_0223e168_3* unknown_10_;
	char unknown_14_[0x20 - 0x14];
	Struct_ov031_0223e168_3 unknown_20_;
	char unknown_30_[0x34 - 0x30];
	int unknown_34_;
	unsigned char unknown_38_;
	char unknown_39_[0x40 - 0x39];
};

extern Struct_ov031_0223e168_2* data_ov031_02290d9c;

struct Struct_ov031_0223e168;
extern "C" int func_ov031_0223bfa0(Struct_ov031_0223e168* arg0);
extern "C" void func_ov031_0223e2ec(int arg0, void* arg1);

// USA: func_ov031_0223e168
extern "C" ARM void func_ov031_0223e168(int arg0) {
	Struct_ov031_0223e168_2* var0 = data_ov031_02290d9c;
	Struct_ov031_0223e168_2* var1 = &var0[arg0];
	if (var1->unknown_38_ == 0) return;

	Struct_ov031_0223e168_3* var2 = var1->unknown_10_;
	Struct_ov031_0223e168_3* var3 = &var1->unknown_20_;
	if (var2 != var3) {
		do {
			var2->unknown_8_(var2, var2->unknown_c_);
			var0 = data_ov031_02290d9c;
			var3 = &var0[arg0].unknown_20_;
			var2 = var2->unknown_4_;
		} while (var2 != var3);
	}

	Struct_ov031_0223e168_2* var4 = &var0[arg0];
	int var5 = var4->unknown_34_;
	int var6 = arg0 << 6;
	int var7 = 0;
	if (var5 <= 0) return;

	do {
		Struct_ov031_0223e168_2* var8 = (Struct_ov031_0223e168_2*)(var6 + (int)var0);
		void* var9 = (void*)func_ov031_0223bfa0((Struct_ov031_0223e168*)var8->unknown_4_);
		if (var9 == 0) return;
		func_ov031_0223e2ec(arg0, var9);
		var0 = data_ov031_02290d9c;
		var8 = (Struct_ov031_0223e168_2*)(var6 + (int)var0);
		var5 = var8->unknown_34_;
		var7++;
	} while (var7 < var5);
}
