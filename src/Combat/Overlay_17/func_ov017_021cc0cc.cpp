#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

extern "C" void* func_0202ae18(void);
extern "C" void* func_0202ae24(void);

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" void* func_02052a10(char* arg0);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021cc0cc {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	signed char unknown_4_;
	unsigned char unknown_5_;
	char unknown_6_[12];
	unsigned char unknown_12_[2];
};

// USA: func_ov017_021cc0cc
extern "C" ARM void func_ov017_021cc0cc(void) {
	GameState* var0 = GameState::GetInstance();
	void* var1 = func_0202ae18();
	void* var2 = func_0202ae24();
	GameObject* var3 = var0->GetProtagonist();
	if (!var3) return;

	Struct_ov017_021cc0cc var4;
	var4.unknown_0_ = 0x2b;
	var4.unknown_4_ = func_0202c1a4((struct Struct_0202c1a4*)var1);
	var4.unknown_5_ = 1;
	#if defined(jpn)
    const char* var5 = var3->baseStats_->unk;
#else
    const char* var5 = (const char*)func_02052a10((char*)var3);
#endif
	strncpy(var4.unknown_6_, var5, sizeof(var4.unknown_6_));
	func_0205e330(var2, &var4, 0);
}
