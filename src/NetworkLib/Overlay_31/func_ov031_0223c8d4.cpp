#include <globaldefs.h>

struct Struct_020b0e6c;
struct Struct_020b0eb4;
struct Struct_020b1d70;

struct Struct_ov031_0223c8d4 { void* unknown_0_; unsigned short unknown_4_; unsigned short unknown_6_; };

extern char* data_ov031_02290d38;

extern "C" int func_020b0e6c(Struct_020b0e6c* arg0, unsigned int arg1);
extern "C" void* func_020b0eb4(Struct_020b0eb4** arg0, unsigned int arg1);
extern "C" int func_ov031_0223c898(Struct_020b1d70* arg0, int arg1, int arg2, int arg3, unsigned short arg4, int arg5);

// USA: func_ov031_0223c8d4
extern "C" ARM void func_ov031_0223c8d4(Struct_020b1d70* arg0, int arg1, int arg2, int arg3, int arg4, unsigned short* arg5, int arg6) {
	if (arg5[0] == 0) return;
	do {
		Struct_ov031_0223c8d4* var0 = (Struct_ov031_0223c8d4*)(data_ov031_02290d38 + arg6 * 8);
		unsigned int var1 = func_020b0e6c((Struct_020b0e6c*)var0, arg5[0]);
		unsigned int var2 = var1;
		if (var1 == 0xffff) {
			var2 = *(unsigned short*)((char*)var0->unknown_0_ + 2);
		}
		void* var3 = func_020b0eb4((Struct_020b0eb4**)var0, var2);
		unsigned short var4 = arg5[0];
		signed char var5 = *((signed char*)var3 + 2);
		int var6 = arg1 + ((arg4 - var5) >> 1);
		func_ov031_0223c898(arg0, var6, arg2, arg3, var4, arg6);
		arg5++;
		arg1 += arg4;
	} while (*arg5 != 0);
}
