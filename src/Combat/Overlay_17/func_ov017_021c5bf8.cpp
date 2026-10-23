#include <globaldefs.h>

struct Struct_0207d7f4 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned int unknown_4_; unsigned int unknown_8_; };
extern "C" void* func_0207d78c(void);
extern "C" int func_0207d978(Struct_0207d7f4* arg0, unsigned short arg1);
extern "C" Struct_0207d7f4* func_0207d9bc(Struct_0207d7f4* arg0, unsigned short arg1);

// USA: func_ov017_021c5bf8
extern "C" ARM int func_ov017_021c5bf8(int arg0, int arg1) {
	if (arg0 >= 4)
		goto zero;
	{
	Struct_0207d7f4* var0 = (Struct_0207d7f4*)func_0207d78c();
	if (!func_0207d978(var0, (unsigned short)arg1))
		goto zero;
	{
	Struct_0207d7f4* var1 = func_0207d9bc(var0, (unsigned short)arg1);
	if (var1 != NULL) {
		signed char var2 = *((signed char*)var1 + arg0 + 8);
		if (var2 != -1)
			return 1;
	}
	}
	}
zero:
	return 0;
}
