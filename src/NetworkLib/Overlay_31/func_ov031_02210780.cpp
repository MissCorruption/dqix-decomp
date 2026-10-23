#include <globaldefs.h>

struct Struct_ov031_02210780 {
	int unknown_0_;
	int unknown_4_;
	char unknown_8_[0x34 - 8];
	volatile int unknown_34_;
};

extern void* volatile data_ov031_0224e588;

extern "C" void func_ov031_022103dc(void* arg0);
extern "C" void func_ov031_022103f8(void* arg0);
extern "C" int func_ov031_022125c8(void);
extern "C" int func_ov031_0221268c(void);
extern "C" int func_ov031_02212784(void);
void SleepCurrentContext(unsigned int ms);

// USA: func_ov031_02210780
extern "C" ARM void func_ov031_02210780(void) {
	{
		Struct_ov031_02210780* var0 = (Struct_ov031_02210780*)data_ov031_0224e588;
		if (var0->unknown_4_ == 1 && var0->unknown_34_ == 3) {
			func_ov031_022103dc((void*)3);
			return;
		}
	}

	if (!func_ov031_022125c8()) return;

	Struct_ov031_02210780* var1;
	while ((var1 = (Struct_ov031_02210780*)data_ov031_0224e588)->unknown_34_ != 3 && var1->unknown_34_ != 5 && var1->unknown_34_ != 4) {
		int var2 = func_ov031_0221268c();
		var1 = (Struct_ov031_02210780*)data_ov031_0224e588;
		var1->unknown_34_ = var2;
		var1 = (Struct_ov031_02210780*)data_ov031_0224e588;
		switch (var1->unknown_34_) {
		case 1:
		case 2:
			SleepCurrentContext(0x64);
			var1 = (Struct_ov031_02210780*)data_ov031_0224e588;
			if (var1->unknown_4_ == 2) {
				func_ov031_02212784();
			}
			break;
		case 0:
		case 3:
		case 4:
		case 5:
			if (var1->unknown_34_ == 3 && var1->unknown_4_ == 1) {
				func_ov031_022103dc((void*)3);
			} else {
				func_ov031_022103f8((void*)1);
				var1 = (Struct_ov031_02210780*)data_ov031_0224e588;
				var1->unknown_34_;
			}
			break;
		}
	}
}
