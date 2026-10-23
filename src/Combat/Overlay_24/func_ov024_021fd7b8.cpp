#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov024_021f6a1c;
extern "C" void func_ov024_021f6a1c(struct Struct_ov024_021f6a1c* arg0, void* arg1);

struct Struct_ov024_021fd7b8 { unsigned int unknown_0_[3]; };

// USA: func_ov024_021fd7b8
extern "C" ARM void func_ov024_021fd7b8(void* arg0) {
	char* var0 = (char*)arg0;
	float var1 = 12.5f;
	GameObject* var2 = *(GameObject**)(var0 + 0x668);
	int var3 = *(unsigned char*)((char*)var2->currentStats_ + 0x48);
	float var4 = var1 * ((float)var3 / 100.0f);
	struct Struct_ov024_021fd7b8 var5 = *(struct Struct_ov024_021fd7b8*)(var0 + 0x65c);
	short var6 = *(short*)(*(char**)(var0 + 0x64c) + 0x32);
	*(float*)&var5.unknown_0_[0] = (float)var6;
	unsigned char var7 = ((unsigned char*)&var5)[7];
	float var8 = (float)var7 * var4 / 100.0f;
	((unsigned char*)&var5)[7] = (unsigned char)(int)var8;
	((unsigned char*)&var5)[8] = 2;
	func_ov024_021f6a1c(*(struct Struct_ov024_021f6a1c**)(var0 + 0x658), &var5);
}
