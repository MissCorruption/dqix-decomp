#include <globaldefs.h>

struct Struct_ov031_0221087c {
	int unknown_0_;
	int unknown_4_;
	char unknown_8_[0x40 - 8];
	volatile int unknown_40_;
};

extern void* volatile data_ov031_0224e588;

extern "C" void func_ov031_022103dc(void* arg0);
extern "C" void func_ov031_022103f8(void* arg0);
extern "C" int func_ov031_02212598(void);
extern "C" int func_ov031_022125bc(void);
extern "C" int func_ov031_02212524(char* arg0, void* arg1);
void SleepCurrentContext(unsigned int ms);

// USA: func_ov031_0221087c
extern "C" ARM void func_ov031_0221087c(void) {
	{
		Struct_ov031_0221087c* var0 = (Struct_ov031_0221087c*)data_ov031_0224e588;
		if (var0->unknown_4_ == 1 && var0->unknown_40_ == 3) {
			func_ov031_022103dc((void*)4);
			return;
		}
	}

	{
		Struct_ov031_0221087c* var1 = (Struct_ov031_0221087c*)data_ov031_0224e588;
		if (!func_ov031_02212524((char*)var1 + 0x38, (char*)var1 + 0x44)) return;
	}

	Struct_ov031_0221087c* var2;
	while ((var2 = (Struct_ov031_0221087c*)data_ov031_0224e588)->unknown_40_ != 3 && var2->unknown_40_ != 5 && var2->unknown_40_ != 4) {
		int var3 = func_ov031_02212598();
		var2 = (Struct_ov031_0221087c*)data_ov031_0224e588;
		var2->unknown_40_ = var3;
		var2 = (Struct_ov031_0221087c*)data_ov031_0224e588;
		switch (var2->unknown_40_) {
		case 1:
		case 2:
			SleepCurrentContext(0x64);
			var2 = (Struct_ov031_0221087c*)data_ov031_0224e588;
			if (var2->unknown_4_ == 2) {
				func_ov031_022125bc();
			}
			break;
		case 0:
		case 3:
		case 4:
		case 5:
			if (var2->unknown_40_ == 3 && var2->unknown_4_ == 1) {
				func_ov031_022103dc((void*)4);
			} else {
				func_ov031_022103f8((void*)1);
				var2 = (Struct_ov031_0221087c*)data_ov031_0224e588;
				var2->unknown_40_;
			}
			break;
		}
	}
}
