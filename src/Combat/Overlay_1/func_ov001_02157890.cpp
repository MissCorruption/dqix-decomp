#include <globaldefs.h>

extern "C" int func_ov001_021570b4(void* arg0);

struct Struct_ov001_02157570_2 {
	unsigned char unknown_0_[0x38c];
	int unknown_38c_;
	int unknown_390_;
	int unknown_394_;
};
struct Struct_ov001_02157570 {
	int unknown_0_;
	int unknown_4_;
	int unknown_8_;
};

extern "C" void func_ov001_02157570(struct Struct_ov001_02157570_2* arg0, struct Struct_ov001_02157570* arg1);

// USA: func_ov001_02157890
extern "C" ARM void func_ov001_02157890(char* arg0, struct Struct_ov001_02157570* arg1, struct Struct_ov001_02157570* arg2) {
	if (*(int*)(arg0 + 0x8c0) != 0) {
		int var0 = 0;
		int var1 = 0;
		if (func_ov001_021570b4(arg0 + 0x188) != 0) {
			var0 = 1;
		}
		if (func_ov001_021570b4(arg0 + 0x524) != 0) {
			var1 = 1;
		}
		if (var0 != 0 && var1 != 0) {
			*(int*)(arg0 + 0x8c0) = 0;
		}
		func_ov001_02157570((struct Struct_ov001_02157570_2*)(arg0 + 0x188), arg1);
		func_ov001_02157570((struct Struct_ov001_02157570_2*)(arg0 + 0x524), arg2);
	}
}
