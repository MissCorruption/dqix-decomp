#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_0200fb8c(int* arg0);
struct GameResources;
void SetBrightness(GameResources*, int, int);
int IsBrightnessTransitionActive(GameResources*);

struct Struct_ov014_021882d4 {
	unsigned char unknown_0_[0x17a];
	unsigned char unknown_17a_;
	unsigned char unknown_17b_;
};

// USA: func_ov014_021882d4
extern "C" ARM void func_ov014_021882d4(struct Struct_ov014_021882d4* arg0) {
	int var0 = func_0200fb8c((int*)GameState::GetInstance());
	if (arg0->unknown_17b_ == 0) {
		SetBrightness((GameResources*)var0, -16, 8);
		arg0->unknown_17b_++;
		return;
	}
	if (arg0->unknown_17b_ != 1) return;
	if (!IsBrightnessTransitionActive((GameResources*)var0)) {
		arg0->unknown_17a_ = 6;
		arg0->unknown_17b_ = 0;
	}
}
