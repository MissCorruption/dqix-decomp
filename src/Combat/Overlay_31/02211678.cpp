#include <globaldefs.h>

extern "C" void func_020c9b10(unsigned int* arg0);

struct Struct_ov031_02211678 {
	unsigned int unknown_0_;
	unsigned int unknown_4_;
	unsigned int unknown_8_;
};

// USA: func_ov031_02211678
extern "C" ARM void func_ov031_02211678(Struct_ov031_02211678* arg0, unsigned int arg1, unsigned int arg2) {
	unsigned int var0[8];
	unsigned int var1;
	unsigned long long var2;

	func_020c9b10(var0);
	var1 = 1;
	do {
		var0[var1] = var0[var1] ^ *(unsigned int*)((char*)&var0[var1] - 4);
	} while (++var1 < 8);
	var2 = (unsigned long long)var0[7];
	var2 *= 0x5d588b656c078965ULL;
	arg0->unknown_4_ = (unsigned int)(arg1 & 0xFFFFFFFFull);
	arg0->unknown_0_ = (unsigned int)(arg2 & 0xFFFFFFFFull);
	var2 += 0x00269ec3ULL;
	arg0->unknown_8_ = (unsigned int)(var2 >> 32);
}
