#include <globaldefs.h>
#include "Graphics/LightingManager.h"
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0200fd0c(GameState* arg0);
struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" void* func_0205ec34(void);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);
extern "C" int func_0202c540(void* arg0);
extern "C" void func_020103c8(int arg0, int arg1);
struct Struct_ov017_0218d0ec_4;

struct Struct_ov017_021c51c0 {
	unsigned char unknown_0_[4];
	unsigned char unknown_4_;
	unsigned char unknown_5_;
	unsigned short unknown_6_;
	unsigned short unknown_8_;
	int unknown_c_;
	unsigned short unknown_10_;
	unsigned short unknown_12_;
};

// USA: func_ov017_021c51c0
extern "C" ARM void func_ov017_021c51c0(int arg0, Struct_ov017_021c51c0* arg1, GameState* arg2, unsigned char* arg3, struct Struct_0202c1a4* arg4) {
#if defined(jpn)
 enum {Enum_ov017_021c51c0_1804=0x4fc};
#else
 enum {Enum_ov017_021c51c0_1804=0x70c};
#endif
	unsigned char* var0 = arg3 + 0x3000;
	void* var1 = *(void**)(var0 + Enum_ov017_021c51c0_1804);
	void* var2 = func_0200fd0c(arg2);
	signed char var3 = func_0202c1a4(arg4);
	if (arg1->unknown_4_ != var3) return;

	*(unsigned char*)((char*)var1 + 0xb) = 1;

	if (arg1->unknown_5_ == 1) {
		void* var4 = func_0205ec34();
		if (func_0206dfb0((int)var4, (unsigned char*)var4 + 0x8c, arg1->unknown_8_ + 0x38e) == 0) {
			*(int*)((char*)var2 + 0x24) = arg1->unknown_6_;
		}
	} else if (arg1->unknown_5_ == 2) {
		*(int*)((char*)var2 + 0x28) = arg1->unknown_6_;
		*(int*)((char*)var2 + 0x2c) = arg1->unknown_8_;
	}

	if (func_0202c540(arg4) != 0 && arg0 == 0) {
		func_020103c8((int)arg2, arg1->unknown_c_);
		LightingManager::GetInstance();
	}

	*(unsigned short*)((char*)var1 + 0xe) = arg1->unknown_10_;
	*(unsigned short*)((char*)var1 + 0x10) = arg1->unknown_12_;
}
