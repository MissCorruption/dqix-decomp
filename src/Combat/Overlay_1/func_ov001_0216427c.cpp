#include <globaldefs.h>

struct Struct_0203d028_15;
extern "C" void func_02040774(struct Struct_0203d028_15* arg0, int arg1, int arg2, int arg3);

struct Struct_ov001_0216427c { int unknown_0_; char unknown_4_[8]; void* unknown_c_; };
struct Struct_ov001_0216427c_2 { char unknown_0_[0x44]; int unknown_44_; int unknown_48_; int unknown_4c_; };

// USA: func_ov001_0216427c
extern "C" ARM int func_ov001_0216427c(Struct_ov001_0216427c* arg0, int arg1, int arg2, int arg3, int arg4) {
	Struct_ov001_0216427c* var0;
	void* var1;
	if (arg1 < 0 || arg1 >= 0x20) return 0;
	var0 = &arg0[arg1];
	switch (var0->unknown_0_) {
	case 0:
	case 1:
	case 4:
	case 5:
		var1 = var0->unknown_c_;
		if (var1 == 0) return 0;
		((Struct_ov001_0216427c_2*)var1)->unknown_44_ = arg2;
		((Struct_ov001_0216427c_2*)var1)->unknown_48_ = arg3;
		((Struct_ov001_0216427c_2*)var1)->unknown_4c_ = arg4;
		return 1;
	case 2:
	case 6:
		var1 = var0->unknown_c_;
		if (var1 == 0) return 0;
		func_02040774((struct Struct_0203d028_15*)var1, arg2, arg3, arg4);
		return 1;
	default:
		return 0;
	}
}
