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

ARM OamAttr_0222b918* CallTailCallThenBdb0_0223be44(int a, int b);
extern "C" int func_ov031_0223bdb0(int, int, void*);

// USA: func_ov031_0222b918
extern "C" ARM void func_ov031_0222b918(void) {
	int n;
	int i;
	const unsigned char* p;
	unsigned int j;
	int k;
	n = data_ov031_02290c8c.field4->field51;
	if (n > 5) {
		n = 5;
	}
	i = 0;
	if (n > 0) {
		do {
			data_ov031_02290c8c.field4->objA[i] = CallTailCallThenBdb0_0223be44(0, 0x2e);
			data_ov031_02290c8c.field4->objB[i] = CallTailCallThenBdb0_0223be44(0, 0x18);
			i++;
		} while (i < n);
	}
	j = 0;
	p = data_ov031_02248eac;
	do {
		func_ov031_0223bdb0(0, *p, data_ov031_02290c8c.field4->objA[0]);
		data_ov031_02290c8c.field4->charA[j] = data_ov031_02290c8c.field4->objA[0]->attr2 & 0x3ff;
		p++;
		j++;
	} while (j < 3);
	j = 0;
	p = data_ov031_02248eb0;
	do {
		func_ov031_0223bdb0(0, *p, data_ov031_02290c8c.field4->objB[0]);
		data_ov031_02290c8c.field4->charB[j] = data_ov031_02290c8c.field4->objB[0]->attr2 & 0x3ff;
		p++;
		j++;
	} while (j < 4);
	k = 0;
	if (n > 0) {
		do {
			data_ov031_02290c8c.field4->objA[k]->attr2 = (data_ov031_02290c8c.field4->objA[k]->attr2 & ~0xc00) | 0xc00;
			data_ov031_02290c8c.field4->objB[k]->attr2 = (data_ov031_02290c8c.field4->objB[k]->attr2 & ~0xc00) | 0xc00;
			k++;
		} while (k < n);
	}
}
