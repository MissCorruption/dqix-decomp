#include <globaldefs.h>

struct Struct_0207fd88;
extern "C" void func_0207fd88(struct Struct_0207fd88* arg0);
extern "C" int func_020421a0(void);
extern "C" void func_0204359c(void* arg0, int arg1);
extern "C" void func_020439b0(void* arg0, int arg1);

// USA: func_ov017_021aaec8
extern "C" ARM void func_ov017_021aaec8(char* arg0) {
	if (*(int*)(arg0 + 0x14) == 5) {
		void* var0 = *(void**)(arg0 + 0x18);
		if (var0 != NULL) func_0207fd88((struct Struct_0207fd88*)var0);
	}
	void* var1 = (void*)func_020421a0();
	func_0204359c(var1, 8);
	func_020439b0(var1, 0);
}
