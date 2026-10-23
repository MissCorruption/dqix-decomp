#include <globaldefs.h>

#if defined(jpn)
#define func_020ca390 func_020cbe5c
#endif

struct Struct_ov027_021e33ec_4 {
	void *unknown_0_;
};

extern struct Struct_ov027_021e33ec_4 data_ov027_021e33ec;

extern "C" int func_ov027_021d96c4(unsigned char arg0, int arg1);
extern "C" int func_ov027_021d9704(void);
extern "C" int func_ov027_021d9940(void);
extern "C" void func_020ca390(int val, void *dst, unsigned int nBytes);

// USA: func_ov027_021d9bdc
#pragma optimize_for_size off
extern "C" ARM int func_ov027_021d9bdc(void) {
	unsigned short var0[5];
	func_020ca390(0, var0, 0xa);

	unsigned short var1 = 1;
	char *var2 = (char*)data_ov027_021e33ec.unknown_0_;
	do {
		int var3 = *(int*)(var2 + (var1 << 2) + 0x14e4);
		switch (var3) {
		case 2: var0[0] |= 1 << var1; break;
		case 5: var0[1] |= 1 << var1; break;
		case 4: var0[2] |= 1 << var1; break;
		case 8: var0[3] |= 1 << var1; break;
		case 11: var0[4] |= 1 << var1; break;
		default: break;
		}
		var1++;
	} while (var1 <= 0xf);

	int var4;
	if (var0[3] != 0) {
		var4 = func_ov027_021d96c4(5, var0[3]);
	} else if (var0[0] != 0) {
		var4 = func_ov027_021d96c4(1, var0[0]);
	} else if (var0[4] != 0) {
		var4 = func_ov027_021d96c4(6, var0[4]);
	} else if (var0[2] != 0) {
		var4 = func_ov027_021d96c4(2, var0[2]);
	} else if (var0[1] != 0) {
		var4 = func_ov027_021d9704();
	} else {
		var4 = func_ov027_021d9940();
	}

	if (var4 == 0x15) {
		return func_ov027_021d96c4(0, 0xffff);
	}
	return var4;
}
