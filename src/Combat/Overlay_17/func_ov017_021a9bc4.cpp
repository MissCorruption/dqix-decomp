#include <globaldefs.h>

#if defined(jpn)
#define REGION_FIELD_0 0x30c
#define REGION_FIELD_1 0x29e
#else
#define REGION_FIELD_0 0x26c
#define REGION_FIELD_1 0x4de
#endif

#include "GameState/GameState.h"

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_ov017_021a9bc4 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[7];
	unsigned char unknown_8_;
	unsigned char unknown_9_[REGION_FIELD_0 - 0x9];
	unsigned char unknown_26c_;
};

// USA: func_ov017_021a9bc4
extern "C" ARM void func_ov017_021a9bc4(Struct_ov017_021a9bc4* arg0, unsigned char arg1) {
	func_0204693c((Struct_0204693c*)arg0);
	arg0->unknown_0_ = 0x3b;
	arg0->unknown_8_ = 0;
	arg0->unknown_26c_ = 0;
	GameState* var0 = GameState::GetInstance();
	*((unsigned char*)var0 + 0x6000 + REGION_FIELD_1) = arg1;
}
