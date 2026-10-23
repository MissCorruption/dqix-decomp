#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);

struct Struct_ov031_0224e540_3 {
	int unknown_0_[10]; /* 0x0-0x24 */
	int unknown_28_;
};
extern Struct_ov031_0224e540_3 data_ov031_0224e540;

// USA: func_ov031_0220f0e4
extern "C" ARM void func_ov031_0220f0e4(int arg0) {
	unsigned int var0 = DisableIRQInterrupts();
	data_ov031_0224e540.unknown_28_ = arg0;
	SetIRQInterruptState(var0);
}
