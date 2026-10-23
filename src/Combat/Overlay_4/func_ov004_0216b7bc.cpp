#include <globaldefs.h>

extern "C" void* func_ov004_0216ae9c(void* arg0, int arg1);
extern "C" void func_ov023_021f8120(void* arg0);
extern "C" void func_ov023_021f7eb8(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9);
extern "C" void func_ov023_021f8960(char* arg0, short arg1, unsigned short arg2);
struct Struct_ov004_0216b7bc;
extern "C" ARM void func_ov011_02184ad8(Struct_ov004_0216b7bc* arg0);

extern unsigned char data_ov004_02171034;

#if defined(jpn)
enum { Enum_ov004_0216b7bc_3 = 5, Enum_ov004_0216b7bc_2 = 0 };
#else
enum { Enum_ov004_0216b7bc_3 = 3, Enum_ov004_0216b7bc_2 = 2 };
#endif

// USA: func_ov004_0216b7bc
extern "C" ARM int func_ov004_0216b7bc(void* arg0, int arg1, int arg2, int arg3) {
	void* var0 = func_ov004_0216ae9c(arg0, arg1);
	func_ov023_021f8120(var0);
	switch (arg1) {
	case 0xd4:
		if (((unsigned char*)&data_ov004_02171034)[Enum_ov004_0216b7bc_3] == 0 || arg3 == 1) {
			func_ov023_021f8960((char*)var0, 0, 6);
		}
		func_ov023_021f7eb8(var0, arg0, arg2, 0, 0x10, 0x20, 8, 0, 1, 0);
		arg2 += 0x2800;
		break;
	case 0xd3:
		if (((unsigned char*)&data_ov004_02171034)[Enum_ov004_0216b7bc_3] == 4) {
			func_ov023_021f7eb8(var0, arg0, arg2, 0x19, 0xa, 7, 5, 0, 1, 0);
			arg2 += 0x460;
		} else if (((unsigned char*)&data_ov004_02171034)[Enum_ov004_0216b7bc_2] == 0) {
			func_ov023_021f7eb8(var0, arg0, arg2, 0x19, 0xb, 7, 5, 0, 1, 0);
			arg2 += 0x460;
		} else if (((unsigned char*)&data_ov004_02171034)[Enum_ov004_0216b7bc_2] == 1) {
			func_ov023_021f7eb8(var0, arg0, arg2, 8, 0xa, 0x18, 5, 0, 1, 0);
			arg2 += 0xf00;
		}
		break;
	case 0x3e8:
		if (((unsigned char*)&data_ov004_02171034)[Enum_ov004_0216b7bc_3] == 4) {
			func_ov023_021f7eb8(var0, arg0, arg2, 0x19, 0xa, 7, 5, 0, 1, 0);
			arg2 += 0x460;
		} else if (((unsigned char*)&data_ov004_02171034)[Enum_ov004_0216b7bc_2] == 0) {
			func_ov023_021f7eb8(var0, arg0, arg2, 0x19, 0xb, 7, 5, 0, 1, 0);
			arg2 += 0x460;
		} else if (((unsigned char*)&data_ov004_02171034)[Enum_ov004_0216b7bc_2] == 1) {
			func_ov023_021f7eb8(var0, arg0, arg2, 0xc, 0xb, 0x14, 4, 0, 1, 0);
			arg2 += 0xa00;
		}
		break;
	}
	func_ov011_02184ad8((Struct_ov004_0216b7bc*)arg0);
	return arg2;
}
