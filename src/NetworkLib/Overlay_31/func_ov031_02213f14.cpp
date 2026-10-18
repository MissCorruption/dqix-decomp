#include <globaldefs.h>

struct Entry02213f14 {
	unsigned char lo : 4;
	unsigned char state : 4;
	unsigned char id;
	unsigned char field2;
	unsigned char nameLen;
	char name[0x20];
};

struct Slot02213f14 {
	char pad0[0xa];
	unsigned short nameLen;
	char name[0xb4];
};

struct Obj02213f14 {
	char pad0[0x300];
	Entry02213f14 entries[9];
	char pad444[0x2c];
	Slot02213f14 slots[11];
	char padcb0[0x5c];
	unsigned char lo : 4;
	unsigned char mid : 2;
	unsigned char mode : 2;
	unsigned char fieldd0d;
	unsigned char fieldd0e;
	unsigned char fieldd0f;
	unsigned char count;
	unsigned char fieldd11;
	unsigned char fieldd12;
	unsigned char slotIdx;
};

extern "C" int func_ov031_02213800(Slot02213f14* slot);
extern "C" int func_ov031_022145b4(Slot02213f14* slot);
extern "C" int strncmp(const void*, const void*, unsigned int);

// USA: func_ov031_02213f14
extern "C" ARM unsigned char func_ov031_02213f14(Obj02213f14* e) {
	Slot02213f14* slot;
	int result;
	int i;

	slot = &e->slots[e->slotIdx];
	result = 0;
	if (e->mode == 0) {
		int count;
		char* base;
		char* name;
		Entry02213f14* ent;

		count = 0;
		if (slot->nameLen == 0x20) {
			result = func_ov031_02213800(slot);
			if (result > 0) {
				count++;
			} else {
				result = 0;
			}
		} else if (slot->nameLen == 8) {
			result = func_ov031_022145b4(slot);
			if (result != 0) {
				count++;
			} else {
				result = 0;
			}
		}
		i = 0;
		if (i < e->count) {
			base = (char*)e;
			name = e->entries[0].name;
			ent = e->entries;
			do {
				if (slot->nameLen == *(unsigned char*)(base + 0x303) && strncmp(slot->name, name, slot->nameLen) == 0) {
					if (count == 0) {
						result = *(unsigned char*)(base + 0x301);
					} else {
						ent->state = 1;
						e->mode = 1;
					}
					count++;
				}
				i++;
				base += 0x24;
				name += 0x24;
				ent++;
			} while (i < e->count);
		}
	} else {
		Entry02213f14* ent;
		char* base;
		int count;

		i = 0;
		count = 0;
		if (i < e->count) {
			base = (char*)e;
			ent = e->entries;
			do {
				if (ent->state == 1) {
					if (count == 0) {
						ent->state = 0;
						result = *(unsigned char*)(base + 0x301);
					}
					count++;
				}
				i++;
				ent++;
				base += 0x24;
			} while (i < e->count);
		}
		if (count == 1) {
			e->mode = 0;
		}
	}
	return result;
}
