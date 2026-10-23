#include <globaldefs.h>

class Struct_ov012_0218adac { public: virtual void inline_ov012_0218adac(); };
typedef void (Struct_ov012_0218adac::*Type_ov012_0218adac)();

struct Struct_ov023_021fd7b4 { Type_ov012_0218adac unknown_0_[3]; };
extern const Struct_ov023_021fd7b4 data_ov023_021fd7b4;

// USA: func_ov023_021e7c58
extern "C" ARM void func_ov023_021e7c58(Struct_ov012_0218adac *arg0, unsigned int arg1, int arg2) {
	char *var0 = (char*)arg0;
	if (*(int*)(var0 + 0x5d4) == 0) return;
	if (*(int*)(var0 + 0x5dc) == 0) return;

	int var1;
	if (arg2 < 0) goto zero;
	if (arg2 <= 3) {
		var1 = 1;
		goto check;
	}
zero:
	var1 = 0;
check:
	if (var1 == 0) return;

	*(int*)(var0 + 0x5f0) = arg2;
	Struct_ov023_021fd7b4 var2 = data_ov023_021fd7b4;
	(arg0->*var2.unknown_0_[arg1])();
}
