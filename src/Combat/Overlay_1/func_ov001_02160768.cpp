#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_ov017_021d612c(void*);
extern "C" int func_ov001_0215ad2c(int arg0);
extern SafeAllocator* data_ov001_021658b8[8];
extern "C" void* func_02010768(void* arg0);
extern "C" void func_020100c4(GameState* arg0, int arg1);

struct Struct_0204a120;
extern "C" void func_0204a120(struct Struct_0204a120* arg0);

struct Struct_0204a3f0_2;
struct Struct_0204a3f0;
extern "C" void func_0204a3f0(struct Struct_0204a3f0_2* arg0, struct Struct_0204a3f0* arg1);

extern "C" void func_0204a440(char* arg0, const char* arg1);
extern "C" void func_0204a464(char* arg0, const char* arg1);
extern "C" void func_0204a488(char* arg0, const char* arg1);

struct Struct_0204a5dc;
extern "C" void func_0204a5dc(struct Struct_0204a5dc* arg0, int arg1);

// USA: func_ov001_02160768
extern "C" ARM int func_ov001_02160768(char* arg0) {
	GameState* var0 = GameState::GetInstance();
	SafeAllocator* var1 = data_ov001_021658b8[0];
	void* var2 = func_02010768(var0);

	int var3 = func_ov017_021d60f4(arg0);
	void* var4 = func_ov017_021d612c(arg0 + 0x8);
	void* var5 = func_ov017_021d612c(arg0 + 0x10);
	void* var6 = func_ov017_021d612c(arg0 + 0x18);
	int var7 = func_ov017_021d60f4(arg0 + 0x20);

	int var8 = func_ov001_0215ad2c(var3);
	int var9 = func_ov001_0215ad2c(var7);

	GameObject* var10 = var0->GetGameObjectByIndex(var8);
	if (var10 == NULL) return 0;

	GameObject* var11 = var0->GetGameObjectByIndex(var9);
	if (var11 == NULL) return 0;

	void* var12 = var1->Allocate(0x268);

	*(void**)((char*)var2 + 0x4) = func_020100bc(var0);

	func_0204a120((struct Struct_0204a120*)var12);
	func_0204a3f0((struct Struct_0204a3f0_2*)var12, (struct Struct_0204a3f0*)var10);
	func_0204a440((char*)var12, (const char*)var4);
	func_0204a464((char*)var12, (const char*)var5);
	func_0204a488((char*)var12, (const char*)var6);
	func_0204a5dc((struct Struct_0204a5dc*)var12, (int)var11);

	((Object3D*)((unsigned char*)var10))->EnableFlag(1);
	((Object3D*)((unsigned char*)var10))->EnableFlag(0x20);

	func_020100c4(var0, (int)var12);
	return 1;
}
