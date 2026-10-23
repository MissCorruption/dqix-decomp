#include <globaldefs.h>

struct GlobalStruct022496fc {
	int field0;
	int field4;
};

extern GlobalStruct022496fc data_ov031_022496fc;

// USA: func_ov031_02207cd0
extern "C" ARM int func_ov031_02207cd0() {
	return data_ov031_022496fc.field4;
}
