#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);
extern "C" void func_ov017_02193428(void* arg0, void* arg1);

struct Struct_ov017_021c4854 {
	unsigned short unknown_0_;
};

struct Struct_ov017_021c4854_2 {
	int unknown_0_;
	int unknown_4_;
	int unknown_8_;
};

struct Struct_ov017_021c4854_3 {
	unsigned short unknown_0_;
	unsigned char unknown_2_;
	unsigned char unknown_3_;
	unsigned short unknown_4_;
	short unknown_6_;
	short unknown_8_;
	short unknown_a_;
	short unknown_c_;
};

// USA: func_ov017_021c4854
extern "C" ARM void func_ov017_021c4854(struct Struct_ov017_021c4854* arg0, unsigned char arg1, unsigned short arg2, struct Struct_ov017_021c4854_2* arg3, short arg4, unsigned char arg5) {
	unsigned short var0 = arg0->unknown_0_;
	void* var1 = func_0202ae24();
	unsigned char var2[0x14];
	var2[0] = 0x37;
	Struct_ov017_021c4854_3* var3 = (Struct_ov017_021c4854_3*)(var2 + 4);
	var3->unknown_0_ = var0;
	var3->unknown_2_ = arg1;
	var3->unknown_4_ = arg2;
	var3->unknown_6_ = arg3->unknown_0_ >> 5;
	var3->unknown_8_ = arg3->unknown_4_ >> 5;
	var3->unknown_a_ = arg3->unknown_8_ >> 5;
	var3->unknown_c_ = arg4;
	var3->unknown_3_ = arg5;
	func_0205e330(var1, var2, 0);

	GameState* var4 = GameState::GetInstance();
	GameObject* var5 = var4->GetUnknownGameObject();
	((Object3D*)((unsigned char*)var5))->EnableFlag(0x4000000);
	func_ov017_02193428(var5, 0);
}
