#include <globaldefs.h>

extern "C" int func_ov031_0221b780(int a0, int a1, int a2);
extern "C" int func_ov031_0221b7fc(int a, int b, int c, int d);
extern "C" int func_ov031_0221b848(void);
extern "C" unsigned short func_020d1cc8(const unsigned short* table, const unsigned char* data, unsigned int len);

struct Data0224e6a0 {
	unsigned char pad[8];
	int field8;
};
extern Data0224e6a0 data_ov031_0224e6a0;

struct Block0221b0ac {
	unsigned char data[0xfe];
	unsigned short crc;
};

struct Store0221b0ac {
	Block0221b0ac blocks[4];
	unsigned char work[0x100];
	unsigned short crcTable[0x100];
};

// USA: func_ov031_0221b0ac
extern "C" ARM int func_ov031_0221b0ac(int obj) {
	Store0221b0ac* store = (Store0221b0ac*)obj;
	int i;
	int srcBase = data_ov031_0224e6a0.field8;

	for (i = 0; i < 4; i++) {
		Block0221b0ac* block = &store->blocks[i];
		int src = srcBase + i * 0x100;
		store->blocks[i].crc = func_020d1cc8(store->crcTable, block->data, 0xfe);
		do {
			func_ov031_0221b780(src, 0x100, (int)block);
		} while (func_ov031_0221b7fc((int)block, src, 0x100, (int)store->work) == 0);
	}

	return func_ov031_0221b848() != 0;
}
