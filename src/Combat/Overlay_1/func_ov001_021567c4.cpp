#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "Resource/Brightness.h"

extern "C" char* func_020100f8(char* arg0);
extern "C" void func_020a2794(void* arg0);
extern "C" void func_020a2718(char* arg0);
extern "C" void func_0209c2e0(void* arg0, int arg1, int arg2);
extern "C" void func_ov001_02154da0(void);
extern "C" void func_ov001_02156b20(void* arg0);
extern "C" void func_ov017_021bb27c(void* arg0);

extern char data_02109bf4;

struct Struct_ov001_021567c4 {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
	char unknown_2_[8];
	unsigned short unknown_a_;
	#if defined(jpn)
 char unknown_c_[0x90 - 0xc];
#else
 char unknown1_c_[0x94 - 0xc];
#endif
	int unknown_94_;
};

static inline unsigned char* inline_ov001_021567c4(GameResources* arg0) { SDK_NULL_ASSERT(arg0); return (unsigned char*)arg0->unknown_ptr_3718; }

// USA: func_ov001_021567c4
extern "C" ARM unsigned short func_ov001_021567c4(Struct_ov001_021567c4* arg0) {
	GameState* var0 = GameState::GetInstance();
	GameResources* var1 = GetGameResources();
	var0->GetUnknownGameObject();
	char* var2 = func_020100f8((char*)var0);
	inline_ov001_021567c4(var1)[1] = 1;
	func_ov001_02154da0();
	SetBrightness(var1, 0, 0x1e);
	func_020a2794(var2);
	func_020a2718(var2);
	func_0209c2e0(&data_02109bf4, arg0->unknown_94_, 0);
	func_ov001_02156b20(arg0);
	func_ov017_021bb27c(arg0);
	arg0->unknown_1_ = 1;
	return arg0->unknown_a_;
}
