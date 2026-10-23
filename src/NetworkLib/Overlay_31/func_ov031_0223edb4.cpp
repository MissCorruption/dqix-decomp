#include <globaldefs.h>

struct Obj02240df4;
extern "C" void func_ov031_02240df4(struct Obj02240df4*);
extern "C" void func_ov031_0223faa8(void);
extern void (*data_ov031_02290dc0)(void*);

// USA: func_ov031_0223edb4
extern "C" ARM void func_ov031_0223edb4(void* p0, struct Obj02240df4* p1) {
	func_ov031_02240df4(p1);
	func_ov031_0223faa8();
	data_ov031_02290dc0(p0);
}
