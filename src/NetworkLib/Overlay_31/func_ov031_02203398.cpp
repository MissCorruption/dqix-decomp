#include <globaldefs.h>

struct Struct_ov031_02203398 {
	char unknown_0_[0x8];
	unsigned char unknown_8_;
};

extern "C" int func_ov031_02201f10(int, int, int);
void CycleCurrentPriorityContexts();

extern "C" int func_ov031_02201f98(int, int);
extern "C" int func_ov031_02201f84(int, int);

// USA: func_ov031_02203398
extern "C" ARM void func_ov031_02203398(Struct_ov031_02203398* arg0) {
	CycleCurrentPriorityContexts();
	unsigned char var0 = arg0->unknown_8_;
	if (var0 == 3 || var0 == 4) {
		func_ov031_02201f98((int)arg0, 0x19);
		arg0->unknown_8_ = 7;
	} else if (var0 != 0) {
		func_ov031_02201f84((int)arg0, 0x1a);
	}
}
