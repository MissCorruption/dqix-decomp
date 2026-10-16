#include <globaldefs.h>

struct GlobalStruct0224c980_02200524 {
	char pad[0x3c];
	int field3c;
};

extern "C" GlobalStruct0224c980_02200524 _ZZ18GetGlobal_02201364vE1s;

// USA: func_ov031_02200524
ARM void SetGlobal0224c980Field3c_02200524(int v) {
	_ZZ18GetGlobal_02201364vE1s.field3c = v;
}
