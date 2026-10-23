#include <globaldefs.h>

struct Cont0207fd88;
extern "C" void func_0207fd88(struct Cont0207fd88* obj);
extern "C" int func_020421a0(void);
extern "C" void func_0204359c(void* obj, int count);
extern "C" void func_020439b0(void* a, int b);

// USA: func_ov017_021aaec8
extern "C" ARM void func_ov017_021aaec8(char* p) {
	if (*(int*)(p + 0x14) == 5) {
		void* p18 = *(void**)(p + 0x18);
		if (p18 != NULL) func_0207fd88((struct Cont0207fd88*)p18);
	}
	void* x = (void*)func_020421a0();
	func_0204359c(x, 8);
	func_020439b0(x, 0);
}
