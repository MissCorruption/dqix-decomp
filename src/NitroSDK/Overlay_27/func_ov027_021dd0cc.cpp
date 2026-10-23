#include <globaldefs.h>

struct Struct_ov027_021e33e0_20 {
	unsigned char unknown_0_[8];
	unsigned char* unknown_8_;
};

extern Struct_ov027_021e33e0_20 data_ov027_021e33e0;

struct Struct_ov027_021dd0cc { unsigned short unknown_0_; unsigned short unknown_2_; };
typedef void (*Type_ov027_021dd0cc)(int, Struct_ov027_021dd0cc*);

// USA: func_ov027_021dd0cc
extern "C" ARM void func_ov027_021dd0cc(int arg0, int arg1) {
	if (arg1 == 2 || arg1 == 0) return;
	volatile unsigned short var0;
	volatile unsigned short var1;
	var1 = (unsigned short)arg0;
	unsigned char* var2 = data_ov027_021e33e0.unknown_8_;
	var0 = (unsigned short)arg1;
	Type_ov027_021dd0cc var3 = *(Type_ov027_021dd0cc*)(var2 + 0x51c);
	var3(0xff, (Struct_ov027_021dd0cc*)&var1);
}
