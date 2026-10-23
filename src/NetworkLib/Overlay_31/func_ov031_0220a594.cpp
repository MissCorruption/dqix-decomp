#include <globaldefs.h>

struct Struct_ov031_0220a594_2 {
	unsigned char unknown_0_[0x456];
	unsigned char unknown_456_;
	unsigned char unknown_457_[0x824 - 0x456 - 1];
	void* unknown_824_;
	int unknown_828_;
	int unknown_82c_;
};
struct Struct_ov031_0220a594 { unsigned char unknown_0_[0xc]; Struct_ov031_0220a594_2* unknown_c_; };

extern "C" ARM int func_ov031_02209840(void* arg0, int arg1, void* arg2);
extern "C" void func_ov031_022098d8(Struct_ov031_0220a594_2* arg0, void* arg1);
extern "C" int func_ov031_02209b58(Struct_ov031_0220a594* arg0);
extern void* data_ov031_0224c9c0;

// USA: func_ov031_0220a594
extern "C" ARM void* func_ov031_0220a594(int* arg0, Struct_ov031_0220a594* arg1) {
	Struct_ov031_0220a594_2* var0 = arg1->unknown_c_;
	if (var0->unknown_824_ != NULL && var0->unknown_456_ == 0) {
		int var1 = var0->unknown_82c_;
		int var2 = var0->unknown_828_;
		int var3 = func_ov031_02209840((char*)var0->unknown_824_ + var1, var2 - var1, arg1);
		if (var3 != 0) {
			void (*var4)(void*) = *(void (**)(void*))&data_ov031_0224c9c0;
			var4(var0->unknown_824_);
			var0->unknown_824_ = NULL;
			*arg0 = 0;
			return NULL;
		}
		func_ov031_022098d8(var0, var0->unknown_824_);
		if (var0->unknown_456_ == 0) {
			var0->unknown_824_ = NULL;
		}
	}
	if (var0->unknown_824_ == NULL) {
		while (1) {
			int var5 = func_ov031_02209b58(arg1);
			if (var5 == 9) {
				*arg0 = 0;
				return NULL;
			}
			if (var0->unknown_824_ != NULL) break;
		}
	}
	*arg0 = var0->unknown_828_ - var0->unknown_82c_;
	return (char*)var0->unknown_824_ + var0->unknown_82c_;
}
