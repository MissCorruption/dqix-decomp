#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov006_0215f2b4_24 = 0x10 };
#else
enum { Enum_ov006_0215f2b4_24 = 0x18 };
#endif

#include "GameState/GameState.h"

extern "C" int func_0200fb8c(int* arg0);

struct Struct_020e25e8;
extern "C" void func_020e25e8(struct Struct_020e25e8* arg0);
struct GameResources;
void SetBrightness(GameResources*, int, int);
struct Struct_02109bf4_4;
extern "C" void func_0209c678(struct Struct_02109bf4_4* arg0, int arg1);
int IsBrightnessTransitionActive(GameResources*);

extern int data_02109bf4;

struct Struct_ov006_0215f2b4 {
	unsigned char unknown_0_[Enum_ov006_0215f2b4_24];
	struct Struct_020e25e8* unknown_18_;
	unsigned char unknown_1c_[0x38f - Enum_ov006_0215f2b4_24 - 4];
	unsigned char unknown_38f_;
	unsigned char unknown_390_;
	unsigned char unknown_391_[0x394 - 0x391];
	unsigned short unknown_394_;
};

// USA: func_ov006_0215f2b4
extern "C" ARM void func_ov006_0215f2b4(struct Struct_ov006_0215f2b4* arg0) {
	int var0 = func_0200fb8c((int*)GameState::GetInstance());
	if (arg0->unknown_390_ == 0) {
		if (arg0->unknown_18_ != 0) {
			func_020e25e8(arg0->unknown_18_);
		}
		SetBrightness((GameResources*)var0, -16, 16);
		if ((arg0->unknown_394_ & 2) == 0) {
			func_0209c678((struct Struct_02109bf4_4*)&data_02109bf4, 0xf);
		}
		arg0->unknown_390_ += 1;
		return;
	}
	if (arg0->unknown_390_ != 1) {
		return;
	}
	if (IsBrightnessTransitionActive((GameResources*)var0) == 0) {
		arg0->unknown_38f_ = 0xd;
		arg0->unknown_390_ = 0;
	}
}
