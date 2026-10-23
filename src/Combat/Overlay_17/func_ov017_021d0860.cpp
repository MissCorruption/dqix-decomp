#include <globaldefs.h>

extern "C" void* func_0202ae18(void);
struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

// USA: func_ov017_021d0860
extern "C" ARM void func_ov017_021d0860(int arg0, int arg1, int arg2) {
	void* var0 = func_0202ae24();
	void* var1 = func_0202ae18();
	unsigned char var2[0x14];
	unsigned char* var3 = var2 + 4;
	var3[2] = arg1;
	var2[0] = 0x9a;
	var3[0] = arg0;
	signed char var4 = func_0202c1a4((struct Struct_0202c1a4*)var1);
	var3[1] = var4;
	if (var3[2] == 0) {
		var3[3] = arg2;
	} else if (var3[2] == 1) {
		var3[3] = arg2;
	}
	func_0205e330(var0, var2, 0);
}
