#include <globaldefs.h>

struct GlobalStruct022496fc_02207ce0 {
	int field0;
	int field4;
};

extern GlobalStruct022496fc_02207ce0 data_ov031_022496fc;

// USA: func_ov031_02207ce0
extern "C" ARM void func_ov031_02207ce0(int v) {
	data_ov031_022496fc.field4 = v;
}
