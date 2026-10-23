#include <globaldefs.h>

struct OamAttr_0222b918 {
	unsigned short attr0;
	unsigned short attr1;
	unsigned short attr2;
};
struct Inner0222b918 {
	unsigned char pad[0x10];
	OamAttr_0222b918* objA[5];
	OamAttr_0222b918* objB[5];
	unsigned char pad2[0x42 - 0x38];
	unsigned short charA[3];
	unsigned short charB[4];
	unsigned char pad3[0x51 - 0x50];
	unsigned char field51;
};
struct Struct0222b918 {
	unsigned char pad[2];
	unsigned short field2;
	Inner0222b918* field4;
};
extern Struct0222b918 data_ov031_02290c8c;
extern const unsigned char data_ov031_02248eac[3];
extern const unsigned char data_ov031_02248eb0[4];

extern "C" ARM OamAttr_0222b918* func_ov031_0223be44(int a, int b);
extern "C" int func_ov031_0223bdb0(int, int, void*);

// USA: func_ov031_0222b918
extern "C" ARM void func_ov031_0222b918(void) {
	int n;
	int i;
	n = data_ov031_02290c8c.field4->field51;
	if (n > 5) {
		n = 5;
	}
	for (i = 0; i < n; i++) {
		data_ov031_02290c8c.field4->objA[i] = func_ov031_0223be44(0, 0x2e);
		data_ov031_02290c8c.field4->objB[i] = func_ov031_0223be44(0, 0x18);
	}
	for (i = 0; i < sizeof(data_ov031_02248eac); i++) {
		func_ov031_0223bdb0(0, data_ov031_02248eac[i], data_ov031_02290c8c.field4->objA[0]);
		data_ov031_02290c8c.field4->charA[i] = data_ov031_02290c8c.field4->objA[0]->attr2 & 0x3ff;
	}
	for (i = 0; i < sizeof(data_ov031_02248eb0); i++) {
		func_ov031_0223bdb0(0, data_ov031_02248eb0[i], data_ov031_02290c8c.field4->objB[0]);
		data_ov031_02290c8c.field4->charB[i] = data_ov031_02290c8c.field4->objB[0]->attr2 & 0x3ff;
	}
	for (i = 0; i < n; i++) {
		data_ov031_02290c8c.field4->objA[i]->attr2 = (data_ov031_02290c8c.field4->objA[i]->attr2 & ~0xc00) | 0xc00;
		data_ov031_02290c8c.field4->objB[i]->attr2 = (data_ov031_02290c8c.field4->objB[i]->attr2 & ~0xc00) | 0xc00;
	}
}
