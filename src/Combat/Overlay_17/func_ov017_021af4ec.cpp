#include <globaldefs.h>
#include "Resource/Brightness.h"

extern "C" void* func_020d6c00(void);
extern "C" int* func_020936f8(void);
struct Struct_0209494c;
extern "C" int func_0209494c(struct Struct_0209494c* arg0);
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);
extern "C" void* func_0202ae18(void);
extern "C" void* func_0202ae24(void);
extern "C" void func_0202b0f4(void* arg0);
extern "C" void func_ov017_02195748(unsigned char* arg0);
extern "C" void func_ov017_02192594(unsigned char* arg0);
extern "C" void func_020939fc(unsigned char* arg0);
struct Struct_0205e854;
extern "C" void* func_0205e854(struct Struct_0205e854* arg0);

struct Struct_ov017_021af4ec {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
	unsigned char unknown_2_[6];
	unsigned char unknown_8_;
	unsigned char unknown_9_[6];
	unsigned char unknown_f_;
};

// USA: func_ov017_021af4ec
extern "C" ARM unsigned char func_ov017_021af4ec(Struct_ov017_021af4ec* arg0) {
#if defined(jpn)
 enum {Enum_ov017_021af4ec_17123=0x40c3, Enum_ov017_021af4ec_17122=0x40c2};
#else
 enum {Enum_ov017_021af4ec_17123=0x42e3, Enum_ov017_021af4ec_17122=0x42e2};
#endif
	unsigned int* var0 = (unsigned int*)func_020d6c00();
	struct Struct_0209494c* var1 = (struct Struct_0209494c*)func_020936f8();
	if (func_0209494c(var1)) {
		func_020466e4(var0, 0x20);
		int var2 = (int)GetGameResources();
		void* var3 = func_0202ae18();
		struct Struct_0205e854* var4 = (struct Struct_0205e854*)func_0202ae24();
		arg0->unknown_f_ = 0;
		SetFlags00((GameResources*)var2, 2);
		func_0202b0f4(var3);
		func_ov017_02195748((unsigned char*)var2);
		func_ov017_02192594((unsigned char*)var2);
		func_020939fc((unsigned char*)var1);
		func_0205e854(var4);
		ClearFlags00((GameResources*)var2, 0x40);
		((unsigned char*)var2)[Enum_ov017_021af4ec_17123] = 0;
		((unsigned char*)var2)[Enum_ov017_021af4ec_17122] = 0;
		arg0->unknown_1_ = 1;
	}
	return arg0->unknown_8_;
}
