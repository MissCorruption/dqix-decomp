#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

struct Struct_02039df4;
extern "C" void func_ov017_021973e8(void* arg0);
extern "C" void func_ov017_0218e8c8(void* arg0, unsigned int arg1, int arg2);
extern "C" void func_ov017_021a1d98(void* arg0, unsigned int arg1);

// USA: func_ov017_02196398
extern "C" ARM void func_ov017_02196398(unsigned int* arg0) {
	GameState* var0 = GameState::GetInstance();
	func_020100bc(var0);
	unsigned short var1 = ((Object3D*)((struct Struct_02039df4*)var0->GetProtagonist()))->GetField06();
	func_ov017_021973e8(arg0);

	if (!TestFlags04((GameResources*)arg0, 4)) {
		func_ov017_0218e8c8(arg0, var1, 1);
	}
	if (!TestFlags04((GameResources*)arg0, 0x10)) {
		func_ov017_021a1d98(arg0, var1);
	}
	if (!TestFlags04((GameResources*)arg0, 4)) {
		func_ov017_0218e8c8(arg0, var1, 2);
	}
}
