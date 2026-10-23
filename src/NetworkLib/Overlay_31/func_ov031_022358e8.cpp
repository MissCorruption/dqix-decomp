#include <globaldefs.h>

extern char* data_ov031_02290cf8;

extern "C" ARM int func_020d4848(void* arg0);
extern "C" int func_020d5004(int arg0);
extern "C" int func_020d503c(int arg0);
struct Struct_ov031_022358b4;
extern "C" void func_ov031_022359e0(struct Struct_ov031_022358b4* arg0);

// USA: func_ov031_022358e8
extern "C" ARM int func_ov031_022358e8(void) {
	data_ov031_02290cf8[0x1e5c] = 1;
	func_020d4848(data_ov031_02290cf8 + 0x168c);
	if (*(unsigned short*)(data_ov031_02290cf8 + 0x168c) != 2) {
		int var0 = func_020d5004((int)func_ov031_022359e0);
		if (var0 != 2) return 0;
		do {
			func_020d4848(data_ov031_02290cf8 + 0x168c);
		} while (*(unsigned short*)(data_ov031_02290cf8 + 0x168c) != 2);
	}
	int var1 = func_020d503c((int)func_ov031_022359e0);
	if (var1 != 2) return 0;
	return 1;
}
