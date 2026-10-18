#include <globaldefs.h>

struct Inner0222c660 {
	unsigned char pad0[0x10];
	int* upper[5];
	int* lower[5];
	unsigned char pad1[0x51 - 0x38];
	unsigned char field51;
	unsigned char pad2[0x56 - 0x52];
	unsigned char field56;
};
struct Struct0222c660 { unsigned char pad[2]; unsigned short field2; Inner0222c660* field4; };
extern Struct0222c660 data_ov031_02290c8c;

extern "C" int FastIntModulus(int numer, int denom);

// USA: func_ov031_0222c660
extern "C" ARM void func_ov031_0222c660(void) {
	int base = 0x36 - FastIntModulus(data_ov031_02290c8c.field2, 0x1c);
	int count = data_ov031_02290c8c.field4->field51;
	if (count > 5) count = 5;
	for (int idx = 0; idx < count; idx++) {
		int* upper = data_ov031_02290c8c.field4->upper[idx];
		*upper = (*upper & 0xfe00ff00) | ((base - 2) & 0xff) | 0xb30000;
		int* lower = data_ov031_02290c8c.field4->lower[idx];
		*lower = (*lower & 0xfe00ff00) | ((base + 1) & 0xff) | 0xd20000;
		base += 0x1c;
	}
	data_ov031_02290c8c.field4->field56 = 1;
}
