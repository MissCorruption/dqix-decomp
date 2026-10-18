#include <globaldefs.h>

struct Elem_0223b228 {
	unsigned short id;
	unsigned char pad[0x42];
};

struct State_0223b228 {
	unsigned char pad0[0x100];
	Elem_0223b228 elems[3];
	unsigned char pad1cc[0x34];
	unsigned short counter;
	unsigned short nextId;
	unsigned char pad204[4];
	void* slots[16];
	unsigned char pad248[0x84b];
	unsigned char synced;
	unsigned int ticks;
};

extern State_0223b228* data_ov031_02290d20;

// USA: func_ov031_0223b228  (semantic: SyncSlotsAndCounters_0223b228)
extern "C" ARM void func_ov031_0223b228(void) {
	int i = 0;
	do {
		void* slot = *(void**)((char*)data_ov031_02290d20->slots + i * sizeof(void*));
		if (slot == 0) {
			continue;
		}
		Elem_0223b228* elem = (Elem_0223b228*)((char*)data_ov031_02290d20->elems + i * sizeof(Elem_0223b228));
		if (i != 1) {
			continue;
		}
		if (data_ov031_02290d20->synced == 1) {
			if (elem->id != 0x10) {
				return;
			}
			data_ov031_02290d20->ticks++;
			if ((data_ov031_02290d20->ticks & 1) != 0) {
				continue;
			}
			data_ov031_02290d20->counter++;
			if (data_ov031_02290d20->counter >= 0x24) {
				data_ov031_02290d20->counter = 0;
			}
		} else {
			data_ov031_02290d20->nextId = 0xbc;
			if (elem->id != 0xbd) {
				continue;
			}
			data_ov031_02290d20->synced = 1;
			data_ov031_02290d20->counter = 0;
			data_ov031_02290d20->ticks = 0;
		}
	} while (++i < 16);
}
