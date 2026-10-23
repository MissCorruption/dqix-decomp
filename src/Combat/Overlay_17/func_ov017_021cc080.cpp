#include <globaldefs.h>

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov017_021b8468(void* arg0);
extern "C" int func_ov000_02163d94(void* arg0);

struct Struct_ov017_021cc080 { unsigned char unknown_0_[4]; unsigned short unknown_4_; };
struct Struct_ov017_021cc080_2 { unsigned char unknown_0_[8]; unsigned short unknown_8_; };

// USA: func_ov017_021cc080
extern "C" ARM void func_ov017_021cc080(int arg0, Struct_ov017_021cc080* arg1, int arg2, unsigned char* arg3) {
	arg3 += 0x3000;
	void* var0 = *(void**)(arg3 +
#if defined(jpn)
        0x508
#else
        0x718
#endif
);
	Struct_ov017_021cc080_2* var1 = (Struct_ov017_021cc080_2*)func_ov017_021b8478(var0);
	void* var2 = func_ov017_021b8468(var0);
	if (!var1) {
		return;
	}
	if (var1->unknown_8_ != arg1->unknown_4_) {
		return;
	}
	if (!var2) {
		return;
	}
	func_ov000_02163d94(var2);
}
