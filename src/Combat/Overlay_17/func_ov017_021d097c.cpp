#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void);
extern "C" void func_0206e748(void* arg0, unsigned char arg1, unsigned char arg2, unsigned short arg3, unsigned short arg4);
extern "C" void func_ov017_021a01bc(unsigned char* arg0);

struct Struct_ov017_021d097c {
	unsigned char unknown_0_[4];
	unsigned char unknown_4_;
	unsigned char unknown_5_;
	unsigned short unknown_6_;
	unsigned short unknown_8_;
};

// USA: func_ov017_021d097c
extern "C" ARM void func_ov017_021d097c(int arg0, Struct_ov017_021d097c* arg1, int arg2, unsigned char* arg3) {
	void* var0 = func_0205ec34();
	func_0206e748(var0, arg1->unknown_4_, arg1->unknown_5_, arg1->unknown_6_, arg1->unknown_8_);
	if (arg1->unknown_4_ == 0 || arg1->unknown_4_ == 2 || arg1->unknown_4_ == 7) {
		func_ov017_021a01bc(arg3);
	}
}
