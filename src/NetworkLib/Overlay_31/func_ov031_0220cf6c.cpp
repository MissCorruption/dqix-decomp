#include <globaldefs.h>

int DisableIRQInterrupts(void);
void SetIRQInterruptState(int mask);
extern "C" void func_ov031_0220da1c(int);

struct Struct_ov031_0220cf6c {
	char unknown_0_[0x2260];
	int unknown_2260_;
	char unknown_2264_[0x2280 - 0x2264];
	short unknown_2280_;
};
extern Struct_ov031_0220cf6c* data_ov031_0224e53c;

// USA: func_ov031_0220cf6c
extern "C" ARM int func_ov031_0220cf6c(void) {
	int var0 = DisableIRQInterrupts();
	Struct_ov031_0220cf6c* var1 = data_ov031_0224e53c;
	if (var1 == 0) {
		SetIRQInterruptState(var0);
		return 1;
	}

	switch (var1->unknown_2260_) {
		case 6:
			func_ov031_0220da1c(7);
			data_ov031_0224e53c->unknown_2280_ = 4;
			goto epilogue3;
		case 7:
			SetIRQInterruptState(var0);
			return 2;
		case 3:
			SetIRQInterruptState(var0);
			return 0;
		default:
			SetIRQInterruptState(var0);
			return 1;
	}
epilogue3:
	SetIRQInterruptState(var0);
	return 3;
}
