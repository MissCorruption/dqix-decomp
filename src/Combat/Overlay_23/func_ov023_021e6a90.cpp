#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov023_021e6a90_881 = 0x341, Enum_ov023_021e6a90_172 = 0x90, Enum_ov023_021e6a90_868 = 0x33c, Enum_ov023_021e6a90_860 = 0x334 };
#else
enum { Enum_ov023_021e6a90_881 = 0x371, Enum_ov023_021e6a90_172 = 0xac, Enum_ov023_021e6a90_868 = 0x364, Enum_ov023_021e6a90_860 = 0x35c };
#endif

struct Struct_0205d81c;

extern "C" void* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);
extern "C" void func_0205ac40(void* arg0, void* arg1);

// USA: func_ov023_021e6a90
extern "C" ARM void func_ov023_021e6a90(void* arg0) {
	if (((unsigned char*)arg0)[0x1000 + Enum_ov023_021e6a90_881] == 6) return;
	void* var0 = func_0205d81c((struct Struct_0205d81c*)((char*)arg0 + Enum_ov023_021e6a90_172), 0x11);
	if (!var0) return;
	short var1 = *(short*)((char*)var0 + 0xac);
	short var2 = *(short*)((char*)var0 + 0xae);
	unsigned char* var3 = *(unsigned char**)((char*)arg0 + 0x1000 + Enum_ov023_021e6a90_868);
	*(int*)(var3 + 0x1f4) = ((short)(var1 << 3) + 0xa) << 0xc;
	*(int*)(var3 + 0x1f8) = ((short)(var2 << 3) + 3) << 0xc;
	void* var4 = *(void**)((char*)arg0 + 0x1000 + Enum_ov023_021e6a90_860);
	func_0205ac40(var4, var3 + 0x1e0);
}
