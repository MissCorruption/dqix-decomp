#include <globaldefs.h>

struct Struct_ov014_02189380;
extern "C" int* func_ov014_02189380(struct Struct_ov014_02189380* arg0);

struct Struct_ov014_02189398 {
	char unknown_0_[4];
	unsigned short unknown_4_;
	char unknown_6_[6];
	int* unknown_c_;
};

// USA: func_ov014_02189398
extern "C" ARM int* func_ov014_02189398(struct Struct_ov014_02189398* arg0) {
	int* var0 = arg0->unknown_c_;
	int var1 = (int)func_ov014_02189380((struct Struct_ov014_02189380*)arg0) + (arg0->unknown_4_ << 1) - (int)var0;
	var1 = (var1 + 3) & ~3;
	return (int*)((char*)var0 + var1);
}
