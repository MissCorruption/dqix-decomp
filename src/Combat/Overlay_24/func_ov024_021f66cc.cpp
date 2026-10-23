#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include "GameState/GameState.h"

extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);
extern "C" int func_ov000_02159d94(void* arg0, int arg1);

struct Struct_ov024_021f66cc {
	char unknown_0_[0xc];
	unsigned short unknown_c_;
	unsigned short unknown_e_;
};

extern "C" struct Struct_ov024_021f66cc* func_02079e2c(char* arg0, int arg1);

class Struct_ov024_021f66cc_2 {
public:
	void* unknown_0_;
};

typedef int (Struct_ov024_021f66cc_2::*Type_02000c9c_16)(unsigned char id, struct Struct_ov024_021f66cc* move, int a3, int a4);

extern Type_02000c9c_16 data_ov024_021ff790[];

// USA: func_ov024_021f66cc
extern "C" ARM int func_ov024_021f66cc(Struct_ov024_021f66cc_2* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5) {
	arg0->unknown_0_ = arg1;
	func_0200fea4(GameState::GetInstance(), arg3);
	struct Struct_ov024_021f66cc* var0 = func_02079e2c((char*)func_020797dc(), (short)arg2);
	int var1 = 0;
	int var2 = func_ov000_02159d94(arg0->unknown_0_, (short)arg3);
	switch (var2) {
	case 1:
		var1 = var0->unknown_c_;
		break;
	case 2:
		var1 = var0->unknown_e_;
		break;
	}
	if (var1 >= 0xa1) {
		return (arg0->*data_ov024_021ff790[0])(arg3, var0, arg4, arg5);
	}
	if (data_ov024_021ff790[var1] == 0) {
		return (arg0->*data_ov024_021ff790[0])(arg3, var0, arg4, arg5);
	}
	return (arg0->*data_ov024_021ff790[var1])(arg3, var0, arg4, arg5);
}
