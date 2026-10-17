#include <globaldefs.h>
#include "System/Memory.h"

struct GlobalStruct0224c980_022008ac {
	char pad0[0x28];
	volatile unsigned int field28;
	char pad1[0x30 - 0x28 - 4];
	volatile unsigned int field30;
	char pad2[0x58 - 0x30 - 4];
	unsigned char* field58;
	volatile unsigned int field5c;
};

extern GlobalStruct0224c980_022008ac data_ov031_0224c980;
extern unsigned char data_ov031_0224968c[6];

// USA: func_ov031_022008ac
extern "C" ARM void func_ov031_022008ac(void* dstAddr, void* srcAddr, unsigned char* frame, unsigned int len, void* extra, unsigned int extraLen) {
	if (data_ov031_0224c980.field58 == NULL || data_ov031_0224c980.field5c == 0) {
		return;
	}
	unsigned int total = len + extraLen;
	if (total < 8 || total > 0x5e4) {
		return;
	}
	if (frame[0] != data_ov031_0224968c[0] || frame[1] != data_ov031_0224968c[1] ||
	    frame[2] != data_ov031_0224968c[2] || frame[6] != 8) {
		return;
	}
	if (frame[7] != 0 && frame[7] != 6) {
		return;
	}
	unsigned short size = (total + 9) & ~1;
	unsigned int next = data_ov031_0224c980.field28 + size;
	if (data_ov031_0224c980.field28 < data_ov031_0224c980.field30 && data_ov031_0224c980.field30 <= next) {
		return;
	}
	if (next == data_ov031_0224c980.field5c) {
		next = 0;
		if (data_ov031_0224c980.field30 == 0) {
			return;
		}
	} else if (next > data_ov031_0224c980.field5c) {
		next = size;
		if (data_ov031_0224c980.field30 <= size) {
			return;
		}
	}
	if (data_ov031_0224c980.field28 + size > data_ov031_0224c980.field5c) {
		if (data_ov031_0224c980.field5c - data_ov031_0224c980.field28 >= 2) {
			*(unsigned short*)(data_ov031_0224c980.field58 + data_ov031_0224c980.field28) = 0;
		}
		data_ov031_0224c980.field28 = 0;
	}
	*(unsigned short*)(data_ov031_0224c980.field58 + data_ov031_0224c980.field28) = size;
	VectorizedInvertedMemcpy(srcAddr, data_ov031_0224c980.field58 + data_ov031_0224c980.field28 + 2, 6);
	VectorizedInvertedMemcpy(dstAddr, data_ov031_0224c980.field58 + data_ov031_0224c980.field28 + 8, 6);
	VectorizedInvertedMemcpy(frame + 6, data_ov031_0224c980.field58 + data_ov031_0224c980.field28 + 0xe, len - 6);
	if (extra != NULL && extraLen != 0) {
		VectorizedInvertedMemcpy(extra, data_ov031_0224c980.field58 + data_ov031_0224c980.field28 + 8 + len, extraLen);
	}
	data_ov031_0224c980.field28 = next;
}
