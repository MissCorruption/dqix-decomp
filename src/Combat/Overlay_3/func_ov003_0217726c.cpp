#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0217726c_4100 = 0xf80 };
enum { Enum_ov003_0217726c_4154 = 0xfb6 };
enum { Enum_ov003_0217726c_4156 = 0xfb8 };
enum { Enum_ov003_0217726c_2164 = 0x7f0 };
enum { Enum_ov003_0217726c_2204 = 0x818 };
#else
enum { Enum_ov003_0217726c_4100 = 0x1004 };
enum { Enum_ov003_0217726c_4154 = 0x103a };
enum { Enum_ov003_0217726c_4156 = 0x103c };
enum { Enum_ov003_0217726c_2164 = 0x874 };
enum { Enum_ov003_0217726c_2204 = 0x89c };
#endif

#include "Combat/Main/BattleList.h"

struct Struct_0201099c_10;
struct Struct_0201099c_9;
extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);
extern "C" unsigned int func_ov003_02175898(char* arg0, void* arg1);
struct Struct_0207fdcc_2;
extern "C" void func_02080c20(struct Struct_0207fdcc_2* arg0, int arg1);
extern "C" void func_02080c68(void* arg0, int arg1, int arg2);
struct Struct_02080fa8;
extern "C" void func_02080fa8(struct Struct_02080fa8* arg0, int arg1, int arg2);
extern "C" void func_020813ec(void* arg0, int arg1);

// USA: func_ov003_0217726c
extern "C" ARM void func_ov003_0217726c(char* arg0) {
	int var0 = *(short*)(arg0 + Enum_ov003_0217726c_4154);
	struct Struct_0201099c_10* var1 = (struct Struct_0201099c_10*)(arg0 + Enum_ov003_0217726c_2164);
	struct Struct_0207fdcc_2* var2 = *(struct Struct_0207fdcc_2**)(arg0 + Enum_ov003_0217726c_2204);
	struct Struct_0201099c_9* var3 = func_020dedd0(var1, var0);
	int var4 = *(short*)(arg0 + Enum_ov003_0217726c_4100);
	int var5 = 0;
	int var6;
	if (var4 != 4) {
		if (var4 == 5) var5 = *(unsigned short*)((char*)var3 + 0x1a);
	} else {
		var5 = func_ov003_02175898(arg0, var3);
	}
	var6 = var5 * (*(unsigned char*)(arg0 + Enum_ov003_0217726c_4156));
	func_02080c20(var2, 10);
	func_02080c68(var2, 10, 0);
	func_02080fa8((struct Struct_02080fa8*)var2, 0x5b, var6);
	func_020813ec(var2, 10);
}
