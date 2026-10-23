#include <globaldefs.h>

struct Struct_ov031_0223d634 { unsigned short unknown_0_, unknown_2_, unknown_4_, unknown_6_; };
struct Struct_ov031_0223d634_2 { unsigned short unknown_0_, unknown_2_, unknown_4_, unknown_6_; };

extern "C" int func_ov031_0223d49c(struct Struct_ov031_0223d634_2* arg0);

// USA: func_ov031_0223d634
extern "C" ARM int func_ov031_0223d634(struct Struct_ov031_0223d634* arg0) {
	struct Struct_ov031_0223d634_2 var0;
	int var1 = *(unsigned short*)0x27fffa8 & 0x8000;

	if (var1 >> 15) return 0;

	var0.unknown_0_ = arg0->unknown_0_;
	var0.unknown_2_ = arg0->unknown_2_;
	var0.unknown_4_ = arg0->unknown_0_ + arg0->unknown_4_;
	var0.unknown_6_ = arg0->unknown_2_ + arg0->unknown_6_;
	return func_ov031_0223d49c(&var0);
}
