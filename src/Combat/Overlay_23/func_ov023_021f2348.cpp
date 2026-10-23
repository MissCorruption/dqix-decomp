#include <globaldefs.h>

struct Obj438 {
	char pad[0x438];
	unsigned short flags;
};

// USA: func_ov023_021f2348
extern "C" ARM void func_ov023_021f2348(void* obj, int flag) {
	Obj438* o = (Obj438*)obj;
	if (flag != 0) o->flags |= 0x400;
	else o->flags &= ~0x400;
}
