#include <globaldefs.h>

struct Struct_ov031_02230330 { unsigned short unknown_0_, unknown_2_; };
struct Struct_ov031_02248f60 { Struct_ov031_02230330 unknown_0_; Struct_ov031_02230330 unknown_4_; };
struct Struct_ov031_02290ca0_15 {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
	unsigned char unknown_2_;
	unsigned char unknown_3_;
	unsigned short unknown_4_;
};

extern "C" int FastIntDivide(int arg0, unsigned int arg1);
extern "C" int func_ov031_0223d49c(Struct_ov031_02248f60* arg0);
extern "C" int func_ov031_0223d634(Struct_ov031_02248f60* arg0);

extern Struct_ov031_02248f60 data_ov031_022493b8;
extern Struct_ov031_02290ca0_15 data_ov031_02290ca0;
extern const unsigned char data_ov031_02248f5c[4] = {2, 3, 7, 8};
extern const Struct_ov031_02248f60 data_ov031_02248f60 = {{204, 52}, {28, 24}};
extern const Struct_ov031_02248f60 data_ov031_02248f68 = {{143, 52}, {44, 24}};
extern const Struct_ov031_02248f60 data_ov031_02248f70 = {{192, 52}, {44, 24}};
extern unsigned char data_ov031_0224903c[];
extern Struct_ov031_02248f60 data_ov031_02248fea[3];

// USA: func_ov031_02230330
extern "C" ARM int func_ov031_02230330(void) {
	Struct_ov031_02248f60 var0;

	if (!func_ov031_0223d49c(&data_ov031_022493b8)) return 0xe;

	{
		int var1 = FastIntDivide(data_ov031_02290ca0.unknown_4_, 0x1d);
		int var2 = 0;
		var0 = data_ov031_02248f60;
		do {
			if (var1 != 2 && var1 != 6) {
				if (func_ov031_0223d634(&var0)) return data_ov031_0224903c[var1];
			}
			var0.unknown_0_.unknown_2_ += 0x1d;
			var2++;
			var1++;
		} while (var2 < 4);
	}
	{
		int var3 = FastIntDivide(data_ov031_02290ca0.unknown_4_, 0x1d);
		int var4 = 0;
		do {
			if (var3 == 2) {
				int var5 = var4 * 0x1d;
				var0 = data_ov031_02248f70;
				var0.unknown_0_.unknown_2_ += var5;
				if (func_ov031_0223d634(&var0)) return 2;
				var0 = data_ov031_02248f68;
				var0.unknown_0_.unknown_2_ += var5;
				if (func_ov031_0223d634(&var0)) return 3;
				break;
			}
			var4++;
			var3++;
		} while (var4 < 4);
	}
	{
		int var6 = FastIntDivide(data_ov031_02290ca0.unknown_4_, 0x1d);
		int var7 = 0;
		do {
			if (var6 == 6) {
				int var8 = var7 * 0x1d;
				var0 = data_ov031_02248f70;
				var0.unknown_0_.unknown_2_ += var8;
				if (func_ov031_0223d634(&var0)) return 7;
				var0 = data_ov031_02248f68;
				var0.unknown_0_.unknown_2_ += var8;
				if (func_ov031_0223d634(&var0)) return 8;
				break;
			}
			var7++;
			var6++;
		} while (var7 < 4);
	}
	{
		Struct_ov031_02248f60* var9 = data_ov031_02248fea;
		int var10 = 0;
		do {
			if (func_ov031_0223d49c(var9)) return var10 + 0xb;
			var10++;
			var9++;
		} while (var10 < 3);
	}
	return 0xe;
}
