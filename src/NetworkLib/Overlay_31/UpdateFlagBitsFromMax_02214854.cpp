#include <globaldefs.h>

struct Entry02214854 {
	unsigned char state;
	unsigned char id;
	unsigned char level;
	unsigned char lowBits : 7;
	unsigned char topBit : 1;
};

struct Record02214854 {
	unsigned char pad[0x36];
	unsigned short maxVal;
	unsigned char rest[0x88];
};

struct State02214854 {
	unsigned char pad[0x444];
	Entry02214854 entries[11];
	Record02214854 records[11];
	unsigned char pad2[0x62];
	unsigned char count;
};

// USA: func_ov031_02214854  (semantic: UpdateFlagBitsFromMax_02214854)
extern "C" ARM int func_ov031_02214854(void* obj) {
	State02214854* s = (State02214854*)obj;
	int i;
	unsigned char result = 0;
	for (i = 0; i < s->count; i++) {
		if (s->entries[i].state == 0 && s->records[i].maxVal - 1 != s->entries[i].lowBits) {
			s->entries[i].topBit = 0;
			result++;
		} else {
			s->entries[i].topBit = 1;
		}
	}
	return result;
}
