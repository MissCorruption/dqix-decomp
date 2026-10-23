#include <globaldefs.h>

class Struct_ov002_021650d4 { public: virtual void inline_ov002_021650d4(); };
typedef void (Struct_ov002_021650d4::*Type_ov002_021650d4)();

struct Struct_ov023_021fd79c { Type_ov002_021650d4 unknown_0_[3]; };
extern const Struct_ov023_021fd79c data_ov023_021fd79c;

// USA: func_ov023_021e7bc4
extern "C" ARM void func_ov023_021e7bc4(Struct_ov002_021650d4 *arg0, unsigned int arg1, int arg2) {
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
	Struct_ov023_021fd79c var2 = data_ov023_021fd79c;
	(arg0->*var2.unknown_0_[arg1])();
}
