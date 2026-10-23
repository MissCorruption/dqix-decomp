#include <globaldefs.h>

struct Struct_ov031_022919bc { int unknown_0_; int unknown_4_; };
extern Struct_ov031_022919bc data_ov031_022919bc;

struct Struct_ov031_022919c4 { void* unknown_0_; int unknown_4_; };
extern Struct_ov031_022919c4 data_ov031_022919c4[];
extern Struct_ov031_022919c4 data_ov031_022919c8[];

extern "C" int func_ov031_022413c8(int arg0, void* arg1);
extern "C" void func_ov031_02241720(void* arg0);

// USA: func_ov031_0224175c
extern "C" ARM void func_ov031_0224175c(void* arg0, void** arg1) {
	int var0 = (data_ov031_022919bc.unknown_0_ + 1) & 7;
	if (var0 == data_ov031_022919bc.unknown_4_) {
		func_ov031_022413c8(0, data_ov031_022919c4[data_ov031_022919bc.unknown_4_].unknown_0_);
		func_ov031_02241720(data_ov031_022919c8[data_ov031_022919bc.unknown_4_].unknown_0_);
		data_ov031_022919bc.unknown_4_ = (data_ov031_022919bc.unknown_4_ + 1) & 7;
	}
	if (*arg1 == 0) {
		return;
	}
	int var1 = data_ov031_022919bc.unknown_0_;
	data_ov031_022919c4[var1].unknown_0_ = arg0;
	data_ov031_022919c8[var1].unknown_0_ = *arg1;
	*arg1 = 0;
	data_ov031_022919bc.unknown_0_ = var0;
}
