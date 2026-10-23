#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov000_0215440c;
struct Struct_ov000_021600f8;
extern "C" struct Struct_ov000_021600f8* func_ov000_021600f8(struct Struct_ov000_0215440c* arg0, int arg1);
extern "C" void* func_ov000_0215fff4(void* arg0, int arg1, int arg2);
extern "C" short func_ov000_0215a16c(void* arg0, int arg1, int arg2, short* arg3);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215ccbc(void* arg0, void* arg1, GameObject* arg2,
                            short arg3, short arg4, short arg5, unsigned long long arg6, unsigned char arg7);
extern "C" void func_ov000_0215fe84(void* arg0, void* arg1, int arg2);

struct Struct_ov024_021e5988_5 { char unknown_0_[0x18]; unsigned char unknown_18_; };
struct Struct_ov024_021e5988_6 { char unknown_0_[0xc]; short unknown_c_; };
struct Struct_ov024_021e5988 { char unknown_0_[0x22]; short unknown_22_; };
struct Struct_ov024_021e5988_2 { unsigned int unknown_0_0_ : 12; unsigned int unknown_1_4_ : 20; };
struct Struct_ov024_021e5988_3 { char unknown_0_[4]; struct Struct_ov024_021e5988_2 unknown_4_; };
struct Struct_0200fd38_2 { char unknown_0_[2]; short unknown_2_; };
struct Struct_ov024_021e5988_4 {
	char unknown_0_[4];
	struct Struct_ov000_0215440c* unknown_4_;
	struct Struct_ov024_021e5988* unknown_8_;
	struct Struct_ov024_021e5988_5* unknown_c_;
	void* unknown_10_;
};

static inline short inline_ov024_021e5988(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return ((struct Struct_0200fd38_2*)arg0->currentStats_)->unknown_2_; }

// USA: func_ov024_021e5988
extern "C" ARM void func_ov024_021e5988(struct Struct_ov024_021e5988_4* arg0, int arg1, struct Struct_ov024_021e5988_3* arg2) {
	struct Struct_ov024_021e5988_5* var0;
	GameObject* var1 = GetCombatantByID((int)arg0->unknown_10_, arg1);
	if (!var1) return;
	var0 = arg0->unknown_c_;
	if (arg2->unknown_4_.unknown_0_0_ == 0x91) {
		struct Struct_ov024_021e5988_5* var2 = (struct Struct_ov024_021e5988_5*)func_ov000_021600f8(arg0->unknown_4_, 0);
		if (var2) var0 = var2;
	}
	int var3 = 0;
	int var4 = 0;
	for (int var5 = 0; var5 < var0->unknown_18_; var5++) {
		struct Struct_ov024_021e5988_6* var6 = (struct Struct_ov024_021e5988_6*)func_ov000_0215fff4(var0, var5, var4);
		if (var6) var3 += var6->unknown_c_;
	}
	var3 >>= 2;
	if (var3 <= 0) return;
	short var7 = 0;
	short var8 = func_ov000_0215a16c(arg0->unknown_10_, arg1, var3, &var7);
	arg0->unknown_8_->unknown_22_ = var8;
	void* var9 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var9) return;
	union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var10;
	var10.unknown_0_ = 0;
	var10.unknown_4_ = 0;
	func_ov000_02159eac(arg0->unknown_10_, &var10, 0x25);
	func_ov000_0215a88c(arg0->unknown_10_, var9, 0x215);
	func_ov000_0215ccbc(arg0->unknown_10_, var9, var1, -var3, var8,
	                       inline_ov024_021e5988(var1), var10.unknown1_0_, 0);
	func_ov000_0215fe84(arg0->unknown_8_, var9, 2);
	((unsigned char*)arg0->unknown_10_)[0x8e02]++;
}
