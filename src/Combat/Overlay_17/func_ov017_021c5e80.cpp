#include <globaldefs.h>

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void func_ov017_021b8b6c(char* arg0);
extern "C" void func_ov017_021a23b0(void* arg0, int arg1);

struct Struct_ov017_021c5e80 {
	unsigned char unknown_0_[4];
	unsigned char unknown_4_;
	unsigned char unknown_5_;
	unsigned short unknown_6_;
};

// USA: func_ov017_021c5e80
extern "C" ARM void func_ov017_021c5e80(int arg0, Struct_ov017_021c5e80* arg1, int arg2, unsigned char* arg3, struct Struct_0202c1a4* arg4) {
#if defined(jpn)
 enum {Enum_ov017_021c5e80_1816=0x508};
#else
 enum {Enum_ov017_021c5e80_1816=0x718};
#endif
	unsigned char var0 = arg1->unknown_4_;
	unsigned short var1;
	void* var2 = *(void**)(arg3 + 0x3000 + Enum_ov017_021c5e80_1816);
	var1 = arg1->unknown_6_;
	signed char var3 = func_0202c1a4(arg4);
	if (var0 != var3) {
		if (*((unsigned char*)var2 + 2) == 0) return;
		void* var4 = func_ov017_021b8478(var2);
		if (!var4) return;
		if (*(unsigned short*)((char*)var4 + 8) != var1) return;
		func_ov017_021b8b6c((char*)var2);
		func_ov017_021a23b0(arg3, var1);
		return;
	}
	func_ov017_021b8b6c((char*)var2);
	func_ov017_021a23b0(arg3, var1);
}
