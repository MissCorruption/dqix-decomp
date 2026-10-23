#include <globaldefs.h>

extern "C" int func_ov017_021d4ce4(void* arg0, int arg1);
extern "C" void func_ov001_0215a9b4(void* arg0);
extern int data_ov001_02165828;
extern int data_ov001_0216580c;

// USA: func_ov001_02153948
extern "C" ARM int func_ov001_02153948(unsigned short arg0) {
	int var0 = func_ov017_021d4ce4(&data_ov001_02165828, arg0);
	if (var0 == -1) {
		return 0;
	}
	if (var0 != 0) {
		data_ov001_0216580c = arg0;
		func_ov001_0215a9b4(&data_ov001_0216580c);
	}
	return var0;
}
