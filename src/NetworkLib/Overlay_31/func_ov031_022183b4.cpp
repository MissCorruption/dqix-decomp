#include <globaldefs.h>

extern "C" void* VectorizedMemset(void* dst, int val, int n);

struct Struct_ov031_022183b4;
extern "C" void func_ov031_02218f18(void* arg0, Struct_ov031_022183b4* arg1, int arg2);
extern "C" void func_ov031_022187fc(int arg0, void* arg1);

extern int data_ov031_02249e2c;
extern int data_ov031_02249e44;

typedef void (*Type_ov031_022183b4)(void*, int, int);

// USA: func_ov031_022183b4
extern "C" ARM void func_ov031_022183b4(void* arg0) {
	char* var0 = (char*)arg0;
	Type_ov031_022183b4 var1 = *(Type_ov031_022183b4*)(var0 + 0x1014);
	if (arg0 == 0) return;

	func_ov031_02218f18(var0, (Struct_ov031_022183b4*)(var0 + 0x1a38), 0x20);
	func_ov031_022187fc((int)var0, var0 + 0x1a08);
	func_ov031_022187fc((int)var0, var0 + 0x19f8);

	int var2 = *(int*)(var0 + 0x19cc);
	if (var2 != 0) {
		var1(&data_ov031_02249e2c, var2, 0);
		*(int*)(var0 + 0x19cc) = 0;
	}

	int var3 = *(int*)(var0 + 0x19d0);
	if (var3 != 0) {
		var1(&data_ov031_02249e44, var3, 0);
		*(int*)(var0 + 0x19d0) = 0;
	}

	VectorizedMemset(var0, 0, 0x1c14);
}
