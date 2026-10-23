#include <globaldefs.h>
#include <NitroSDK/Memory.h>

struct Struct_020b1d70;
extern "C" ARM int func_ov031_0223dd34(unsigned char* arg0, int arg1);
extern "C" void func_ov031_0223c8d4(Struct_020b1d70* arg0, int arg1, int arg2, int arg3, int arg4, unsigned short* arg5, int arg6);

struct Struct_ov031_0222ff34 { unsigned char unknown_0_[0x14]; Struct_020b1d70* unknown_14_; };
struct Struct_ov031_02290ca0_12 { unsigned char unknown_0_[8]; Struct_ov031_0222ff34* unknown_8_; };
extern Struct_ov031_02290ca0_12 data_ov031_02290ca0;

// USA: func_ov031_0222ff34
extern "C" ARM void func_ov031_0222ff34(unsigned char* arg0, int arg1) {
	unsigned short var0[0x11];
	VectorizedMemset(var0, 0, sizeof(var0));
	int var1 = func_ov031_0223dd34(arg0, 0x20);
	int var2 = var1 <= 0x10 ? var1 : 0x10;
	int var3 = 0;
	if (var2 > 0) {
		do {
			unsigned char var4 = arg0[var3];
			if (var4 == ' ') var0[var3] = 0xe01d;
			else var0[var3] = var4;
			var3++;
		} while (var3 < var2);
	}
	int var5 = arg1 * 0x1d + 2;
	if (var1 <= 0x10) var5 += 5;
	func_ov031_0223c8d4(data_ov031_02290ca0.unknown_8_->unknown_14_, 0x48, var5, 2, 8, var0, 1);
	if (var1 <= 0x10) return;
	VectorizedMemset(var0, 0, sizeof(var0));
	var1 -= 0x10;
	int var6 = 0;
	if (var1 > 0) {
		do {
			unsigned char var7 = *(arg0 + var6 + 0x10);
			if (var7 == ' ') var0[var6] = 0xe01d;
			else var0[var6] = var7;
			var6++;
		} while (var6 < var1);
	}
	func_ov031_0223c8d4(data_ov031_02290ca0.unknown_8_->unknown_14_, 0x48, var5 + 0xc, 2, 8, var0, 1);
}
