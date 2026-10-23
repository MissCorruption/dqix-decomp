#include <globaldefs.h>

extern "C" unsigned short func_ov017_021d60f4(int arg0);

struct Struct_02109bf4_2 {
	char unknown_0_[0xc9];
	unsigned char unknown_c9_;
	char unknown_ca_[4];
	unsigned short unknown_ce_;
};
extern "C" void func_0209c830(Struct_02109bf4_2* arg0, int arg1);

extern struct Struct_02109bf4_2 data_02109bf4;

// USA: func_ov001_02163744
extern "C" ARM int func_ov001_02163744(int arg0) {
	func_0209c830(&data_02109bf4, func_ov017_021d60f4(arg0));
	return 1;
}
