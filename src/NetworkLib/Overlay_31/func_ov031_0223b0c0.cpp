#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int func_ov031_0223a2b0(void* ctx);
extern "C" int func_ov031_02239be8(void);
extern "C" unsigned short func_ov031_02239bd4(void);
extern "C" int func_ov031_0223a288(int c);

struct Packet_0223b0c0 {
	unsigned short cmd;
	unsigned short arg;
	unsigned char data[0x40];
};

struct Ctx_0223b0c0 {
	unsigned char pad0[0x100];
	unsigned char slots[2][0x44];
	unsigned char pad188[0x204 - 0x188];
	int counter;
	int slotValid[2];
	unsigned char pad210[0xa90 - 0x210];
	unsigned char state;
	unsigned char padA91;
	unsigned char fieldA92;
	unsigned char fieldA93;
	unsigned char padA94[0xab0 - 0xa94];
	Packet_0223b0c0* packet;
};

extern Ctx_0223b0c0* data_ov031_02290d20;

// USA: func_ov031_0223b0c0
extern "C" ARM void func_ov031_0223b0c0(unsigned short cmd, unsigned short arg, const void* src) {
	if (data_ov031_02290d20->fieldA93 == 1) {
		data_ov031_02290d20->packet->cmd = cmd;
		data_ov031_02290d20->packet->arg = arg;
		VectorizedInvertedMemcpy(src, data_ov031_02290d20->packet->data, 0x40);
	} else {
		data_ov031_02290d20->counter++;
		data_ov031_02290d20->packet->cmd = 0xbc;
		data_ov031_02290d20->packet->data[0] = data_ov031_02290d20->fieldA92;
	}

	if (func_ov031_02239be8() != 5) {
		return;
	}
	if (func_ov031_0223a2b0(data_ov031_02290d20) == 0) {
		data_ov031_02290d20->counter += 4;
		return;
	}

	if (data_ov031_02290d20->fieldA93 == 0) {
		data_ov031_02290d20->counter++;
	} else {
		data_ov031_02290d20->counter = 0;
		if (func_ov031_02239bd4() != 3) {
			data_ov031_02290d20->state = 0x1b;
			return;
		}
	}

	unsigned short i = 0;
	do {
		int result = func_ov031_0223a288(i);
		if (result != 0) {
			VectorizedInvertedMemcpy((const void*)result, data_ov031_02290d20->slots[i], 0x44);
			data_ov031_02290d20->slotValid[i] = 1;
		} else {
			data_ov031_02290d20->slotValid[i] = 0;
		}
	} while (++i < 2);
}
