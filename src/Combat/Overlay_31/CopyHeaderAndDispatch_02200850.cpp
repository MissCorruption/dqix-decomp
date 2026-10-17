#include <globaldefs.h>
#include "System/Memory.h"

extern "C" int func_ov031_0220f104(void* a, void* b, unsigned int c, void* d, unsigned int e);

extern unsigned char data_ov031_0224968c[6];

struct GlobalStruct0224c980_02200850 {
	unsigned char field0;
};

extern "C" GlobalStruct0224c980_02200850 _ZZ18GetGlobal_02201364vE1s;

// USA: func_ov031_02200850
ARM void CopyHeaderAndDispatch_02200850(void* a, unsigned int b, void* c, unsigned int d) {
	VectorizedInvertedMemcpy(data_ov031_0224968c, (char*)a + 6, 6);
	int result = func_ov031_0220f104(a, (char*)a + 6, b - 6, c, d);
	_ZZ18GetGlobal_02201364vE1s.field0 = result < 0;
}
