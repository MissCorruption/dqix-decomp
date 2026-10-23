#include <globaldefs.h>

extern "C" int func_ov031_022270ac(int arg0, unsigned int arg1);
extern "C" int func_ov031_022167b8(void);
extern "C" void func_ov031_022167a8(int arg0);
extern "C" void func_ov031_02227128(void);
extern "C" void func_ov031_022271f0(void);
extern "C" void func_ov031_0223677c(void);
extern "C" void func_ov031_022274c0(int arg0);
extern "C" void func_ov031_02227d94(void);
extern "C" ARM void func_ov031_0223d0a4(void);
extern "C" void func_ov031_0223e168(int arg0);
extern "C" void func_ov031_0223d704(void);
extern "C" int func_ov031_0223dfd0(void);
extern "C" void func_020c9820(void);
extern "C" void func_ov031_02227468(void);

extern int data_ov031_0224b608;

struct Struct_ov031_02250c0c {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
	char unknown_2_[4 - 2];
	void* unknown_4_;
	char unknown_8_[0xc - 0x8];
	void (*unknown_c_)(void);
};
extern Struct_ov031_02250c0c data_ov031_02250c0c;

// USA: func_ov031_02226fe4
extern "C" ARM int func_ov031_02226fe4(void* arg0, int arg1, unsigned int arg2) {
	data_ov031_02250c0c.unknown_4_ = arg0;
	if (!func_ov031_022270ac(arg1, arg2)) {
		return -1;
	}
	int var0 = func_ov031_022167b8();
	func_ov031_022167a8((int)&data_ov031_0224b608);
	data_ov031_02250c0c.unknown_1_ = 0;
	func_ov031_02227128();
	func_ov031_022271f0();
	func_ov031_0223677c();
	func_ov031_022274c0((int)func_ov031_02227d94);
	int var1 = 0;
	do {
		func_ov031_0223d0a4();
		data_ov031_02250c0c.unknown_c_();
		func_ov031_0223e168(var1);
		func_ov031_0223d704();
		func_ov031_0223dfd0();
		func_020c9820();
	} while (data_ov031_02250c0c.unknown_1_ == 0);
	func_ov031_02227468();
	func_ov031_022167a8(var0);
	return 0;
}
