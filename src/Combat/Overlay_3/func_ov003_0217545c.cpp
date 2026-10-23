#include <globaldefs.h>

struct Struct_0207fdcc_2;
struct Struct_0207fdcc;
extern "C" Struct_0207fdcc* func_02081da8(struct Struct_0207fdcc_2* arg0, int arg1);
extern "C" int func_0204c7cc(unsigned char* arg0);
extern "C" void func_ov003_02173f08(char* arg0, char* arg1, char* arg2, char* arg3);
extern "C" void func_ov003_0217585c(void* arg0, int arg1, int arg2, int arg3, unsigned char arg4);

// USA: func_ov003_0217545c
extern "C" ARM void func_ov003_0217545c(void* arg0) {
	struct Struct_0207fdcc_2* var0;
	struct Struct_0207fdcc* var1;
	short var2;
	short var3;
	char var4, var5, var6, var7;
	short var8;

#if defined(jpn)
    enum { Enum_ov003_0217545c_2204 = 0x818 };
#else
    enum { Enum_ov003_0217545c_2204 = 0x89c };
#endif
	var0 = *(struct Struct_0207fdcc_2**)((char*)arg0 + Enum_ov003_0217545c_2204);
	var1 = func_02081da8(var0, 10);
	if (var1 == NULL) return;
	if (!func_0204c7cc((unsigned char*)var1)) return;

	var2 = *(short*)((char*)var1 + 0xae);
	var3 = *(short*)((char*)var1 + 0xac);

#if defined(jpn)
    var4 = 8;
    var5 = 0x41;
#else
	func_ov003_02173f08(&var4, &var5, &var6, &var7);
#endif

	{
		short var9 = var2 << 3;
		var8 = (short)(var9 + 0x22);
		short var10 = var3 << 3;
		func_ov003_0217585c(arg0, var4 + var10, var8, 0x1a, 0x78);
		func_ov003_0217585c(arg0, var5 + var10, var8, 0x1b, 0x7a);
	}
}
