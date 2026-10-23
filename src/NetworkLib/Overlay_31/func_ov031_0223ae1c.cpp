#include <globaldefs.h>

struct Slot0223ae1c { unsigned char data[0x40]; };
struct State0223ae1c {
	unsigned char pad0[0x200];
	unsigned short field200;
	unsigned char pad1[2];
	unsigned int field204;
	unsigned char pad2[0x440];
	unsigned short field648;
	unsigned short field64a;
	unsigned char pad3[0x444];
	unsigned char fieldA90;
	unsigned char pad4[0x13];
	struct Slot0223ae1c* slotsAA4;
};
extern struct State0223ae1c* data_ov031_02290d20;

extern "C" int func_ov031_02239be8(void);
extern "C" unsigned short func_ov031_0223b30c(void);
extern "C" int func_ov031_0223a0fc(int selection, int first, int second);
extern "C" void func_ov031_0223b0c0(int a, int b, void* src);
extern "C" void func_ov031_0223b228(void);

// USA: func_ov031_0223ae1c
extern "C" ARM void func_ov031_0223ae1c(void) {
	switch (func_ov031_02239be8()) {
	case 1:
		func_ov031_0223a0fc(4, (unsigned short)(data_ov031_02290d20->field648 + 1), data_ov031_02290d20->field64a);
		break;
	case 4:
	case 5:
	case 6:
		func_ov031_0223b0c0(0, data_ov031_02290d20->field200, &data_ov031_02290d20->slotsAA4[data_ov031_02290d20->field200 % 16]);
		func_ov031_0223b228();
		if (data_ov031_02290d20->fieldA90 == 0x1b) {
			break;
		}
		if (data_ov031_02290d20->field204 > 0x1e0) {
			data_ov031_02290d20->fieldA90 = 0x1b;
			break;
		}
		if (func_ov031_0223b30c() == 0x10 || func_ov031_0223b30c() == 0x20) {
			func_ov031_0223b30c();
			data_ov031_02290d20->fieldA90 = 0xa;
		} else if (func_ov031_0223b30c() == 0x40) {
			data_ov031_02290d20->fieldA90 = 0xb;
		} else if (func_ov031_0223b30c() == 0xff) {
			data_ov031_02290d20->fieldA90 = 0x1b;
		} else if (func_ov031_0223b30c() == 0x50) {
			data_ov031_02290d20->fieldA90 = 0x15;
		} else if (func_ov031_0223b30c() == 0x60) {
			data_ov031_02290d20->fieldA90 = 0x18;
		} else if (func_ov031_0223b30c() == 0x70) {
			data_ov031_02290d20->fieldA90 = 0x1b;
		} else if (func_ov031_0223b30c() == 0) {
			data_ov031_02290d20->fieldA90 = 8;
		} else if (func_ov031_0223b30c() == 0xbd) {
			data_ov031_02290d20->fieldA90 = 9;
		} else {
			data_ov031_02290d20->fieldA90 = 0x1f;
		}
		break;
	}
}
