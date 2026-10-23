#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_0202ae18(void);
extern "C" void func_ov017_02195398(int, int);
extern "C" void func_ov017_02191234(int);
extern "C" void func_ov017_021905b8(int, int, int);

extern "C" void func_ov017_02195618(unsigned char* arg0);
extern "C" int func_020100a8(GameState* arg0);

struct Struct_0202b2f0;
extern "C" void func_0202c660(struct Struct_0202b2f0* arg0, int arg1);

struct Struct_ov017_0219558c;
extern "C" void func_ov017_021b1454(struct Struct_ov017_0219558c* arg0, int arg1);

// USA: func_ov017_0219558c
extern "C" ARM void func_ov017_0219558c(unsigned char* arg0, int arg1) {
#if defined(jpn)
 enum {Enum_ov017_0219558c_2868=0x914};
#else
 enum {Enum_ov017_0219558c_2868=0xb34};
#endif
	GameState* var0 = GameState::GetInstance();
	int var1 = ((int)GetGameResources());
	struct Struct_0202b2f0* var2 = (struct Struct_0202b2f0*)func_0202ae18();
	if (arg1 == 0) {
		func_ov017_02195618(arg0);
		return;
	}
	if (arg1 == func_020100a8(var0)) return;
	func_ov017_02195398(var1, arg1);
	func_0202c660(var2, arg1);
	func_ov017_02191234(var1);
	func_ov017_021905b8(var1, arg1, 1);
	func_ov017_021b1454(*(struct Struct_ov017_0219558c**)((char*)arg0 + 0x3000 + Enum_ov017_0219558c_2868), arg1 & 0xff);
}
