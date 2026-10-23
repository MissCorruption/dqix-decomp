#include <globaldefs.h>

extern void* data_ov031_022496a4;
extern int data_ov031_0224c9d0;
extern int data_ov031_0224c99c;
extern int data_ov031_0224c9ac;

struct Struct_ov031_0224c9e0 {
	int unknown_0_;
	int unknown_4_;
};
extern Struct_ov031_0224c9e0 data_ov031_0224c9e0;

struct Struct_ov031_0224e1c0_3 {
	char unknown_0_[8];
	int unknown_8_;
};
extern Struct_ov031_0224e1c0_3 data_ov031_0224e1c0;

// USA: func_ov031_02204f94
extern "C" ARM void func_ov031_02204f94(void) {
	void* var0 = data_ov031_022496a4;
	data_ov031_0224c9d0 = *(int*)((char*)var0 + 4);
	data_ov031_0224c99c = *(int*)((char*)var0 + 8);
	data_ov031_0224c9ac = *(int*)((char*)var0 + 0xc);
	data_ov031_0224c9e0.unknown_0_ = *(int*)((char*)var0 + 0x10);
	data_ov031_0224c9e0.unknown_4_ = *(int*)((char*)var0 + 0x14);
	data_ov031_0224e1c0.unknown_8_ |= 2;
}
