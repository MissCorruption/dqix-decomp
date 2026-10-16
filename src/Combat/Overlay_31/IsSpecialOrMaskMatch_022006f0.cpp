#include <globaldefs.h>

struct GlobalStruct0224c980_022006f0 {
	char pad1[0x1c];
	unsigned int field1c;
	char pad2[0x50-0x1c-4];
	unsigned int field50;
};

extern "C" GlobalStruct0224c980_022006f0 _ZZ18GetGlobal_02201364vE1s;

// USA: func_ov031_022006f0
ARM int IsSpecialOrMaskMatch_022006f0(int a) {
	int result = 1;
	if (a != -1 && a != 0x7F000001) {
		unsigned int mask = _ZZ18GetGlobal_02201364vE1s.field1c;
		if ((a & mask) != (_ZZ18GetGlobal_02201364vE1s.field50 & mask)) result = 0;
	}
	return result;
}
