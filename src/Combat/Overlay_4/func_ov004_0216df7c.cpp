#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov004_0216df7c_3 = 5 };
#else
enum { Enum_ov004_0216df7c_3 = 3 };
#endif

extern "C" void func_ov011_021848a0(int arg0, int arg1);

extern unsigned char data_ov004_02171034[];

// USA: func_ov004_0216df7c
extern "C" ARM int func_ov004_0216df7c(int arg0) {
	data_ov004_02171034[Enum_ov004_0216df7c_3] = 5;
	func_ov011_021848a0(arg0, 5 + 0x128);
	return 0;
}
