#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02175d78_4154 = 0xfb6 };
enum { Enum_ov003_02175d78_2164 = 0x7f0 };
enum { Enum_ov003_02175d78_4156 = 0xfb8 };
#else
enum { Enum_ov003_02175d78_4154 = 0x103a };
enum { Enum_ov003_02175d78_2164 = 0x874 };
enum { Enum_ov003_02175d78_4156 = 0x103c };
#endif

#include "GameState/GameState.h"

struct Struct_0201099c_10;
struct Struct_0201099c_9;
extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);
extern "C" void* func_02010828(GameState* arg0);
extern "C" void func_ov003_02176798(void* arg0);

// USA: func_ov003_02175d78
extern "C" ARM int func_ov003_02175d78(char* arg0) {
	GameState* var0 = GameState::GetInstance();
	int var1 = *(short*)(arg0 + Enum_ov003_02175d78_4154);
	struct Struct_0201099c_9* var2 = func_020dedd0((struct Struct_0201099c_10*)(arg0 + Enum_ov003_02175d78_2164), var1);
	void* var3;
	unsigned int var4;
	unsigned int var5;
	unsigned int var6;
	if (var2 == NULL) return 0;
	var3 = func_02010828(var0);
	var4 = *(unsigned char*)(arg0 + Enum_ov003_02175d78_4156);
	var5 = *(unsigned short*)((char*)var2 + 0x1a);
	var6 = var4 * var5;
	{
		unsigned int var7 = 0x98967f - *(unsigned int*)((char*)var3 + 0xf6c);
		if (var7 < var6) var6 = var7;
	}
	*(int*)((char*)var3 + 0xf6c) += var6;
	func_ov003_02176798(arg0);
	return 1;
}
